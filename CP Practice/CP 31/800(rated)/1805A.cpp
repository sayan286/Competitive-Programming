#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&a,int n){
    int ans = a[0];
    if(n%2==0){
        for(int i=1;i<n;i++){
            ans = ans^a[i];
        }
        if(ans==0){
            return 0;
        }else{
            return -1;
        }
    }else{
        for(int i=1;i<n;i++){
            ans = ans^a[i];
        }
        return ans;
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
        cout << solve(a,m) << "\n";
    }

    return 0;
}