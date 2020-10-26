#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char c;
    cin >> c;
    bool consonant = true;
    
    switch (c)
    {
        case 'a' : consonant = false;
            break;
        case 'A' : consonant = false;
            break;
        case 'e' : consonant = false;
                break;
        case 'E' : consonant = false;
            break;
        case 'i' : consonant = false;
            break;
        case 'I' : consonant = false;
            break;
        case 'o' : consonant = false;
            break;
        case 'O' : consonant = false;
            break;
        case 'u' : consonant = false;
            break;
        case 'U' : consonant = false;
            break;
        
        default:
            break;
    }
    cout << consonant  << "\n";
    return 0;
}