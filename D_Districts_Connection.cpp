#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int idx = -1;
        vector<pair<int,int>> res;
        
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[0]){
                res.push_back({1,i+1});
                idx = i;
            }
        }
        if(idx==-1){
            cout << "NO" << "\n";
            continue;
        }
        for(int i=1;i<n;i++){
            if(arr[i]==arr[0]){
                res.push_back({idx+1,i+1});
            }
        }
        cout << "YES" << "\n";
        for (auto it = res.begin(); it!=res.end();it++){
          cout << it -> first << " " << it -> second << endl;   
        }
 
    }
    return 0;
}