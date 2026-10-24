#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr,int k){
    if(k==1){
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                cout << "NO" << endl;
                return;
            } 
        }
        cout << "YES" << endl;

    } 
    if(k>1) cout << "YES" << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,k;
        cin >> a >> k;
        vector<int>arr(a);
        for(int j=0;j<a;j++){
            cin >> arr[j];
        }
        solve(arr,k);
    }
    return 0;
}