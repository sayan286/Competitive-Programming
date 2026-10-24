#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(ll n,ll k){
    if(k==1){
        cout << "YES\n";
        return ;
    }

    if(n==1){
        cout << "NO" << "\n";
        return ;
    }
    
    if(n%2==0){
        cout << "YES\n";
    }else {
        if(k%2!=0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin >> n;
    for(int i=0;i<n;i++){
        ll n,k;
        cin >> n >> k;
        solve(n,k);
    }
    return 0;
}