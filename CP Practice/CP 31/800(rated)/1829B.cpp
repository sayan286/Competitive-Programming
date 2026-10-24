#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&a){
    int gap_max = 0;
    int gap = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0) {
            gap++;
            gap_max = max(gap_max,gap);
        }
        else gap = 0;
    }
    return gap_max;
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
        cout << solve(a) << "\n";
    }
    return 0;
}