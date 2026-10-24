#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(ll a,ll b,ll k1,ll k2,ll q1,ll q2){
     
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        ll m;
        cin >> m;
        ll a,b,k1,k2,q1,q2;
        cin >> a >> b;
        cin >> k1 >> k2;
        cin >> q1 >> q2;
        cout << solve(a,b,k1,k2,q1,q2) << "\n";
    }

    return 0;
}