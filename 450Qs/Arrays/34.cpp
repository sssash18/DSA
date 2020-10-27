#include <iostream>
using namespace std;

#define ll long long
int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    ll arr[n];
	    for(ll i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    ll count = 0,leftC = 0,rightC = 0;
	    ll left[n],right[n];
	    for(ll i =0;i<n;i++){
	        leftC = max(leftC,arr[i]);
	        left[i] = leftC;
	    }
	    for(ll i =n-1;i>=0;i--){
	        rightC = max(rightC,arr[i]);
	        right[i] = rightC;
	    }
	    
	    for(ll i=0;i<n;i++){
	        count += max(0LL,min(left[i],right[i]) - arr[i]);    
	    }
	    cout << count << "\n";
	   
	}
	return 0;
}