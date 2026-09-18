#include <bits/stdc++.h>
using namespace std;


// Most Optimise Method:

const int MAX=1000000;
vector<int>sieve(MAX+1,0);

void pre_compute(){
    for(int i=2;i<=MAX;i++){
        if(sieve[i]==0){
            for(int j=i;j<=MAX;j+=i){
                if(sieve[j]==0) sieve[j]=i;
            }
        }
    }
}

int solve(int n){
    int res = 1;   
    while(sieve[n]!=0){
        int alpha = 1;
        int spf = sieve[n];
        while(n%spf==0){
            alpha++;
            n/=spf;
        }
        res*=alpha;
    }
    return res;
}


int main (){
    int n;
    cin >> n;
    pre_compute();
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        cout << solve(x) << endl;
    }

    return 0;
}