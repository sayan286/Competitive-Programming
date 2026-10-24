#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve (vector<ll>&a){
    ll dif_min = INT_MAX;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]) return 0;
        int dif = 0;
        dif = a[i+1]-a[i];
        if(dif<0) dif *=(-1);
        if(dif_min>dif) dif_min = dif;
    }
    if(dif_min == 0 || dif_min == 1) return 1;
    else return (dif_min/2)+1;
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        vector<ll>a(t);
        for(int j=0;j<t;j++){
            cin >> a[j];
        }
        cout << solve(a) << endl;
    }

    return 0;
}