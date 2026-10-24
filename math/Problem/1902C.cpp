#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD(ll a ,ll b){
    a=llabs(a);b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}

ll solve(vector<ll>&a){
    if(a.size()==1) return 1;

    // sort array
    sort(a.begin(),a.end());

    // Finding maximum element
    ll maxm = a[a.size()-1];

    //GCD of difference b/w max element and rest elements for x:
    ll x = 0;
    for(ll i=1;i<a.size();i++){
        x=GCD(x,a[i]-a[i-1]);
    }

    // Finding a+1:
    ll a1 = maxm-x;
    for(ll i=a.size()-1;i>=0;i--){
        if(a[i]==a1){
            a1-=x;
        }
    }
    a.push_back(a1);

    // finding no of operation:
    ll ans = 0;
    for(ll i=0;i<a.size();i++){
        ll dif = maxm -a[i];
        ans+=dif/x;
    }
    return ans;
}


int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        vector<ll>a(m);
        for(ll j=0;j<m;j++){
            cin >> a[j];
        }
        cout << solve(a) << "\n";
    }
    return 0;
}