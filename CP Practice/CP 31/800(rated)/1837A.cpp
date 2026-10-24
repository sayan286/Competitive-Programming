#include<bits/stdc++.h>
using namespace std;

void solve(int x,int k){
    if(x%k==0){
        cout << 2 << "\n";
        cout << 1 << " " << x-1 << "\n";
    }else{
        cout << 1 << "\n";
        cout << x << "\n";
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,k;
        cin >> x >> k;
        solve(x,k);
    }

    return 0;
}