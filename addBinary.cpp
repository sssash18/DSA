#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int addBinary(int a,int b){
    int ans = 0, prevCarry = 0;
    while(a>0 && b>0){
        if(a%2 ==0 && b%2==0){
            
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        if((a%2 == 1 && b%2 == 0 )|| (a%2==0 && b%2 == 1)){
            if(prevCarry == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        if(a%2 == 1 && b%2==1){
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a/=10;b/=10;
    }
    // while(a>0){

    // }
    return ans;
    
}
int main(){
    int a,b;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    cin >> a >>b;
    cout << addBinary(a,b) << endl;

    return 0;
}