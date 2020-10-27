#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(int *arr,int n){
    int max_ending_here = 0,max_so_far = 0,idx = 0;
    for(int i=0;i<n;i++){
        max_ending_here += arr[i];
        if(max_so_far + arr[i] > max_so_far){
            max_so_far += arr[i];
        } 
        if(max_ending_here < 0){
            max_ending_here = 0;
            idx = i;
        }
    }
    return idx;
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,sum;
	    cin >> n >> sum;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int idx = kadaneAlgo(arr,n);
	    int total = 0;
	    int difference = INT_MAX,diff;
	    for(int i=idx;i<n;i++){
	        total = 0;
	        for(int j = i;j<n;j++){
	            total += arr[j];
	            if(total > sum){
	                diff = j-i;
	                difference = min(diff,difference);
	                
	            }
	        }
	    }
	    cout << difference+1 << "\n";
	}
	return 0;
}