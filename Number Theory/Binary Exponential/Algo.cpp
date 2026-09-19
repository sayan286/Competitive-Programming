#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll bin_exp(long long int a,long long int b){
    ll res = 1;
        while(b>0){
            if(b&1){ // odd check
                res*=a;
            }
            a*=a;
            b>>=1;
        }
        return res;
    }

// Recursive algo

ll rec_bin(long long int a,long long int b){
    if(b==0) return 1;
    ll res = rec_bin(a,b/2);
    if(b%2){
        return res*res*a;
    }else{
        return res*a;
    }
}


int main (){
    int a,b;
    cin >> a;
    cin >> b;
    
    cout << bin_exp(a,b) << endl;

    return 0;
}