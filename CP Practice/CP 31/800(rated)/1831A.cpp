#include <bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>&a){
    int n = a.size();
    vector<int>r(n);
    int maxm = INT_MIN;
    int mx = 0;
    for(int i=0;i<n;i++){
        r[i] = n+1-a[i];
    }
    return r;
}

int main(){
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
           for(auto it:solve(a)){
                cout << it << " ";
           }
           cout << "\n";
    }
}