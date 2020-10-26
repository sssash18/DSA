#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rotate(int *arr,int start,int end){
    int temp = arr[end];
    for(int i=end;i> start;i--){
        arr[i] = arr[i-1];

    }
    arr[start] = temp;
}
int main(){

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int n;
    cin >> n;
    int arr[n];
    int out_of_place = -1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n;i++){
        if(out_of_place >= 0){
            if(((out_of_place % 2 == 0) && arr[i] < 0) || ((out_of_place%2 !=0) && arr[i] >= 0)){
                rotate(arr,out_of_place,i);
                out_of_place = -1;
            }

        }
        if(out_of_place==-1){
            if(((i%2 == 0) && arr[i] >= 0) || ((i%2!=0) && arr[i] < 0 )){
                out_of_place = i;
            }
        }
    }
     for(int i=0;i<n;i++){
        cout <<  arr[i] << " ";
    }
    return 0;
}