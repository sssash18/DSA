#include <iostream>
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
	    bool result = false;
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        sum=0;
	        for(int j=i;j<n;j++){
	            sum+=arr[j];
	            if(sum==0){
	                result = true;
                    break;
	            }
	        }
	        if(result){
	            break;
	        }
	    }
	    cout << (result ? "Yes" : "No") << "\n";
	}
	return 0;
}