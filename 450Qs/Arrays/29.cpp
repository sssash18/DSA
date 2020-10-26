#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    int count = 1,big = 0;
	    for(int i=0;i<n-1;i++){
	        if(arr[i]==arr[i+1]){
	            continue;
	        }
	        if((arr[i]+1)==arr[i+1]){
	            count++;
	        }else{
	          
	            count = 1;
	        }
	        big = max(big,count);
	    }
	    if(n==1){
	     big = 1;   
	    }
	    cout << big << "\n";
	}
	return 0;
}
