#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
vector<ll> solve(vector<ll>&arr){
    vector<ll>dup;
    dup.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            dup.push_back(arr[i]);
            dup.push_back(arr[i]);
        }else if(arr[i-1]<=arr[i]){
            dup.push_back(arr[i]);
        }   
    }
    return dup;
}
 
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        vector<ll>arr(a);
        for(int i=0;i<a;i++){
            cin >> arr[i];
        }
        vector<ll>nu = solve(arr);

        cout << nu.size() << endl;
        
        for(auto it:solve(arr)){
            cout << it << " ";
        }
        cout << endl;
    }
    
    return 0;
}