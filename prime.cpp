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
    while (t--)
    {
        int num,new_num = 0;
        cin >> num;
        while(num){
            new_num *= 10;
            new_num += (num % 10) ;
            num = num/10;

        }
        cout << new_num << "\n";
    }
    
    return 0;
}