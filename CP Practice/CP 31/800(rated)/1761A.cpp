#include <bits/stdc++.h>
using namespace std;

void solve (int n,int a,int b){
    if(n==a && n==b){cout << "YES\n";return;}
    if((n-(a+b))>1){cout << "YES\n";return;}
    else{cout << "NO\n";return;}
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int n,a,b;
        cin >> n >> a >> b;
        solve(n,a,b);
    }
    return 0;
}