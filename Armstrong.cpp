#include <iostream>
#include <math.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >> t;
    while(t--){
        int num,orig_N;
        cin >> num;
        bool arm = false;
        int sumDig = 0;
        orig_N = num;
        while(num){
            sumDig += pow(num%10,3);
            num/=10;
        }
        if(sumDig==orig_N){
            arm = true;
        }
        cout << arm << endl;
    }
    return 0;
}