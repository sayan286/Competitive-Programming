#include <bits/stdc++.h>
using namespace std;

int almost_prime(int n){
    vector<int>sieve(n+1,0);
    for(int i=4;i<=n;i+=2){
        sieve[i]+=1;
    }
    for(int i=3;i<=n;i+=2){
        if(sieve[i]==0){
            for(int j=2*i;j<=n;j+=i){
                sieve[j]+=1;
            }
        }
    }
    int counts = 0;
    for(int i=6;i<=n;i++){
        if(sieve[i]==2){
            counts++;
        }
    }
    return counts;
}

int main (){
    int n;
    cin >> n;

    cout << almost_prime(n) << endl;


    return 0;

}