#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,int n){
    int minm = INT_MAX;
    int min_index = 0;
    int maxm = INT_MIN;
    int max_index = 0;
    int dif = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]) {
            dif++;
        }
        if(minm>a[i]){
            min_index = i;
        }
        if(maxm<a[i]){
            max_index = i;
        }
    }

    swap(a[0],a[min_index]);
    swap(a[1],a[max_index]);

    if(dif == 0){
        cout << "NO\n";
        return;
    }

    swap(a[0],a[n-1]);

    cout << "YES\n";

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";

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