#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(ll n){
    int no_dig = 0;
    int first = 0;
    while(n>0){
        if(n<10) first = n;
        n/=10;
        no_dig++;
    }
    return (no_dig-1)*9+first;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        ll m;
        cin >> m;
        cout << solve(m) << "\n";
    }

    return 0;
}