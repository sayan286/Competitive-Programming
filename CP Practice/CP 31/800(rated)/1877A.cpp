#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr){
    int sum =0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return (-1)*sum;
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        vector<int>arr(a-1);
        for(int j=0;j<a-1;j++){
            cin >> arr[j];
        }
        cout << solve(arr) << endl; 
    }

    return 0;
}