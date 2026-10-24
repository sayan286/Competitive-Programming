#include <bits/stdc++.h>
using namespace std;

int solve(string s,int n,int k){
    unordered_map<char,int>upp;
    for(int i=0;i<n;i++){
        upp[s[i]]++;
    }
     if(upp.size()%2==0 && (n-k)%2==0) cout << "YES\n";
     else cout << "NO\n";

}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m,k;
        cin >> m >> k;
        string s;
        cin >> s;     
        cout << solve(s,m,k) << "\n";
        cout << "\n"
    }
    
    return 0;
}