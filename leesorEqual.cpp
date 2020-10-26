#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }
    sort(arr,arr+n);
    int res ;
    if(k==n){
        res = arr[n-1]+1;
    }else{
        if(arr[k-1]!=arr[k]){
            res = arr[k-1]+1;
        }else{
            res = -1;
        }
    }
    cout << res << "\n";
    
    return 0;
}