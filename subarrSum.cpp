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
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maxsum = INT_MIN,sum=0;
        cin >> arr[0];
        maxsum = arr[0];
        sum=arr[0];
        for(int i=1;i<n;i++){
            cin >> arr[i];
            sum+=arr[i];
            if(sum - arr[i] > sum){
                maxsum = max(maxsum,sum-arr[i]);
                sum=0;
            }else{

            }
        }
        maxsum = max(maxsum,sum);
        cout << maxsum << "\n";
        
    }
    

    return 0;
}