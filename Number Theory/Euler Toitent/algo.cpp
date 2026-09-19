#include <bits/stdc++.h>
using namespace std;

// Basic Implementation(for single number)

int phi_s(int n){
    int res = n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
        res-=res/i;
        }
    }
    if(n>1) res-=res/n;
    return res;
}



// Euler Totient Sieve (For multiple numbers)
typedef long long int ll;

ll max_n;
vector<int>phi(max_n,0);

vector<int>compute_toitent(int n){
    for(int i=0;i<=max_n;i++){
        phi[i]=i;
    }

    for(int i=2;i<=max_n;i++){
        if(phi[i]==i){
            phi[i]-=1;
            for(int j=2*i;j<=max_n;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
    return phi;
}

int main (){
    
    return 0;
}