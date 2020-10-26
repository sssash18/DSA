#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int num){
    if(num==0 || num==1){
        return false;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
vector<int> findPrimes(int n){
    int primeCount = 0;
    int i=2;
    vector<int> res;
    while(primeCount<=n){
        if(checkPrime(i)){
            res.push_back(i);
            primeCount++;
            
        }
        i++;
    }
    return res;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int arr[n][n] ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    
    vector<int> res =  findPrimes(n+1);
    res.erase(res.begin()+1);
    for(int i=0;i<n-1;i++){
        arr[i][i] = res[i]-1;
    }
    for(int i=0;i<n;i++){
        arr[n-1][i] = 1;
        arr[i][n-1] = 1;
    }
    int greatprime = 0;
    for(int i=0;i<n;i++){
        if(res[i]-n+1 == 0){
            break;
        }
        if(res[i] >= n-1 && !checkPrime(res[i]-n+1)){
           // cout << "rrrr" << res[i] << "\n";
            greatprime = res[i];
            break;
        }
    }
    arr[n-1][n-1] = greatprime-n+1;
    if(greatprime == 0){
       arr[n-1][n-1] = 0; 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " " ;
        }
        cout << "\n";
    }}
    return 0;
}