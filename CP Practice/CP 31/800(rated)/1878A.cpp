#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr,int k){
     for(int i=0;i<arr.size();i++){
            if(arr[i]==k) {
                cout << "YES" << endl;
                return;           
            }
         }
         cout << "NO" << endl;
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