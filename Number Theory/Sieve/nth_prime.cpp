#include <bits/stdc++.h>
using namespace std;
/*
Befor we start we have to calculate with a formula that in how many number can be there to find nth 
prime no. so we use this formula n*log(n) to find how many number needed to find nth prime no.

in question
1<=n<=10^5

n*log(n)=1.15*10^6 (approximately)
for safer upper bound we use 10^7
*/

int nth_prime(int n){
    const int r = 10000000;
    if(n==1){
        return 2;
    }
    vector<bool>sieve(r+1,true);
    for(int i=4;i<=r;i+=2){
        sieve[i]=false;
    }
    
    for(int i=3;i*i<=r;i+=2){
        if(sieve[i]){
            for(int j=i*i;j<=r;j+=2*i){
                sieve[j]=false;
            }
        }
    }
    int counts = 1;
    for(int i=3;i<=r;i+=2){
        if(sieve[i]) counts++;

        if(counts==n) return i;
    }

    return -1;
}

int main (){
    int n;
    cin >> n;

    cout << nth_prime(n) << endl;


    return 0;
}