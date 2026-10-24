#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(vector<ll>&a,int n){
    int ans =0;
    for(int i=0;i<n-1;i++){
        if((a[i]+a[i+1])%2==0){
            ans++;
        }
    }
    return ans;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        vector<ll>a(m);
        for(int j=0;j<m;j++){
            cin >> a[j];
        }
        cout << solve(a,m) << "\n";
    }
}