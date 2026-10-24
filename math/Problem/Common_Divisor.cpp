#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Divisor
ll Divisor(ll n){
    ll ans =1;
    for(ll i=2;i*i<=n;i++){
        ll coun = 0;
        while(n%i==0){
            n/=i;
            coun++;
        }
        ans*=(coun+1);
    }
    if(n>1) ans*=2;
    return ans;
}

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

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll g = 0;
    for(int i=0;i<n;i++){
        g = GCD(g,a[i]);
    }

    cout << Divisor(g) << endl;
    
    return 0;
}