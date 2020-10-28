#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//INSERTION SORT
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	int j =0,current ;
	for(int i=0;i<n;i++){
	    j = i-1;
	    current = arr[i];
	    while(j>=0 && arr[j] > current){
	        
	        arr[j+1] = arr[j];
	        j--;
	    }
	    arr[j+1] = current;
	}
	for(int i=0;i<n;i++){
	    cout <<  arr[i] << " ";
	}
	return 0;
}