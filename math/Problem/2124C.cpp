#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// GCD
ll GCD(ll a,ll b){
    a=llabs(a);b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}

// LCM
ll LCM(ll a,ll b){
    a = llabs(a); b = llabs(b);
    ll lcm = (a*b)/GCD(a,b);
    return lcm;
}


ll solve (vector<ll>&a){
    
    ll x = 1;
    for(ll i=0;i<a.size()-1;i++){
        if(a[i+1]%a[i]!=0)  x=LCM(x,a[i]/GCD(a[i],a[i+1])); 
    }
    return x;
}

int main (){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++){
        ll m;
        cin >> m;
        vector<ll>a(m);
        for(ll j=0;j<m;j++){
            cin >> a[j];
        }
        cout << solve(a) << "\n";
    }
    return 0;
}