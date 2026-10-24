#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&a,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==2) count++;
    }
    if(count == 0) return 1;
    if(count%2==0){
        count = count/2;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(a[i]==2) ans++;
            if(ans==count) {
                return i+1;
            }
        }
    }else{
        return -1;
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