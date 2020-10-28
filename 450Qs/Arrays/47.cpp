class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int r = 0,c = m-1;
	    int max_row = -1;
	    while(r<n && c>=0){
	        if(arr[r][c] == 1){
	            max_row = r;
	            c--;
	        }else{
	            r++;
	        }
	    }
	    return max_row;
	    
	}

};