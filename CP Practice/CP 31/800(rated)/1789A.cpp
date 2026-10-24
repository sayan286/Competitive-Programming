#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,int n){
    int g = 0;
    for(int i=0;i<n;i++){
        g = __gcd(g,a[i]);
    }
    if(g<n) {
        if(n<__gcd(a[0],a[1])){
            for(int i=0;i<n-1;i++){
                if(n>__gcd(a[i],a[i+1])){
                    cout << "YES\n";
                    return ;
                }
            }
        }
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        vector<int>a(m);
        for(int j=0;j<m;j++){
            cin >> a[j];
        }
        solve(a,m);
    }

    return 0;
}