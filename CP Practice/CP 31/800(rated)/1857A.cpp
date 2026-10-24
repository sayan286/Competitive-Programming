#include <bits/stdc++.h>
using namespace std;
 
void solve(vector<int>a){
    int coun =0;
    for(int i=0;i<a.size();i++){
        if(a[i]%2!=0) coun++;
    }
    if(coun%2==0) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        vector<int>a(b);
        for(int j=0;j<b;j++){
            cin >> a[j];
        }
        solve(a);
    }
 
    
    return 0;
}