#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *arr,int n,int key){
    int low = 0,high = n-1;
    int mid = (low+high)/2;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }else{
            if(arr[mid] > key){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
    }
    return -1;
}
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(arr,n,key) << "\n";

    return 0;
}