#include <bits/stdc++.h>
using namespace std;

int count_sieve(int n){
    if(n<=2) return 0;
    int counts = 1;
    vector<bool>is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=4;i<=n;i+=2){
        is_prime[i]=false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(is_prime[i]){
            for(int j=i*i;j<=n;j+=2*i){
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(is_prime[i]){
            counts++;
        }
    }
     return counts;
}

int main (){
    int n;
    cin >> n;
    cout << count_sieve(n) << endl;

    return 0;
}