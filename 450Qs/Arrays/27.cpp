#include <iostream>
#define MAX 500
using namespace std;

int multiply(int num,int *res,int res_size){
    int carry = 0,m;
    for(int i = 0;i<res_size;i++){
        m = res[i]*num + carry;
        res[i] = m%10;
        carry = m/10;
    }
    while(carry){
        res[res_size] = carry%10;
        res_size++;
        carry/=10;
    }
    return res_size;
}
void factorial(int num){
    int res[MAX];
    int res_size = 1;
    res[0] = 1;
    int carry = 0;
    for(int i = 2;i<= num;i++){
        res_size = multiply(i,res,res_size);
    }
    for(int i = res_size-1;i>=0;i--){
        cout << res[i];
    }
    cout << "\n";
}
int main() {
	int n;
	cin >> n;
	factorial(n);
	return 0;
}