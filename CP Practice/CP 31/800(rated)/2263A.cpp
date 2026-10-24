#include <bits/stdc++.h>
using namespace std;

void solve (vector<int>&a){
    int count1=0;
    int count0=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0) count0++;
        else count1++;
    }
    if(count1>=count0) cout << "Bessie" << "\n";
    else cout << "Elsie" << "\n";
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
        solve(a);
    }

    return 0;
}