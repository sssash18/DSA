//AVL Tree
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int getHeight(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1 + max(getHeight(root->left),getHeight(root->right));
}

Node *rightRotate(Node *root){
    Node *x = root->left;
    Node *T2 = x->right;
    x->right = root;
    root->left = T2;
    root = x;
    return x;
}
Node *leftRotate(Node *root){
    Node *x = root->right;
    Node *T2 = x->left;
    x->left = root;
    root->right = T2;
    return x;
}
int getBF(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    return lh-rh;
}

Node *insertNode(Node *root,int x){
    if(root==NULL){
        return new Node(x);
    }
    if(root->data==x){
        return root;
    }
    if(root->data > x){
        root->left = insertNode(root->left,x);
    }else if(root->data<x){
        root->right = insertNode(root->right,x);
    }else
    return root;
    
    int bf = getBF(root);
    cout << "root" << root->data << " " <<  bf << endl;
    if(bf > 1){
        if(x<root->left->data){
            root = rightRotate(root);
        }else{
            if(x>root->left->data){
                root->left = leftRotate(root->left);
                root = rightRotate(root);
            }
        }
    }
    if(bf<-1){
        if(x > root->right->data){
            return leftRotate(root);
        }else{
            if(x< root->right->data){
                root->right = rightRotate(root->right);
                return leftRotate(root);
            }
        }
    }
    return root;
}
Node *getSucc(Node *root){
    Node *curr = root;
    curr = curr->right;
    while(curr->left!=NULL){
        curr = curr->left;
    }
    return curr;
}
Node *deleteNode(Node *root,int x){
    if(root==NULL){
        return root;
    }
    if(root->data > x){
        root -> left = deleteNode(root->left,x);
    }else{
        if(root->data < x){
            root->right = deleteNode(root->right,x);
        }else{
            if(root->left==NULL){
                root =  root->right;
            }else{
                if(root->right==NULL){
                    root =  root->left;
                }else{
                    Node *temp = getSucc(root);
                    root->data = temp->data;
                    root->right = deleteNode(root->right,temp->data);
                }
            }
        }
    }
    int bf = getBF(root);
    if(bf > 1){
        if(getBF(root->left) >= 0){
            return rightRotate(root->left);
        }
        if(getBF(root->left) < 0){
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
        
    }
    if(bf<-1){
        if(getBF(root->right) >= 0){
            return leftRotate(root->right);
        }if(getBF(root->right)< 0){
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    }
    return root;
}
void LevelOrder(Node *root){
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int si = q.size();
        for(int i=0;i<si;i++){
            cout << q.front()->data <<" ";
            if(q.front()->left){
                q.push(q.front()->left);
            }
            if(q.front()->right){
                q.push(q.front()->right);
            }
            q.pop();
        }
        cout << endl;
    }
}

int main() {
    Node *root = new Node(10);
    root = insertNode(root,5);
    root = insertNode(root,1);
    root = insertNode(root,11);
    root = insertNode(root,12);
    LevelOrder(root);
    root = deleteNode(root,12);
    LevelOrder(root);
    root = deleteNode(root,11);
    LevelOrder(root);
    return 0;
}
