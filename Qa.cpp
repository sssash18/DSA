#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
int mulmod(int a, int b, int mod) 
{ 
    int res = 0; // Initialize result 
    a = a % mod; 
    while (b > 0) 
    { 
        // If b is odd, add 'a' to result 
        if (b % 2 == 1) 
            res = (res + a) % mod; 
  
        // Multiply 'a' with 2 
        a = (a * 2) % mod; 
  
        // Divide b by 2 
        b /= 2; 
    } 
  
    // Return result 
    return res % mod; 
}
int fact(int n){
    int factor = 1;
    int mod = 1000000000 +7;
    for(int i=n;i>=1;i--){
        factor = ((i%mod)*(factor%mod))%mod;
    }
    return factor%mod;
}
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n,x,pos;
    cin >> n >> x >> pos;
    cout << fact(n) << endl;

    return 0;
}