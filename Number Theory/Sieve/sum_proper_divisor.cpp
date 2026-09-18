#include <bits/stdc++.h>
using namespace std;

const int MAX = 500000;

vector<int>sieve(MAX+1,1); 

void pre_compute(){
    sieve[0]=sieve[1]=0;
    for(int i=2;i<=MAX;i++){
        for(int j=2*i;j<=MAX;j+=i){
            sieve[j]+=i;
        }
    }
}



int main (){
    pre_compute();
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
       int x;
       cin >> x;
       cout << sieve[x] << endl;
    }

    return 0;
}