#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


// GCD
ll GCD(ll a, ll b){
    a=llabs(a);b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}

ll solve(ll a,ll b,ll k){
    ll dx = a/GCD(a,b); ll dy = b/GCD(a,b);
    if(max(dx,dy)<=k) return 1;
    else return 2;
}
    


int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n;
    for(int i=0;i<n;i++){
        ll a,b,k;
        cin >> a >> b >> k;
        cout << solve(a,b,k) << endl;
    }

    return 0;
}