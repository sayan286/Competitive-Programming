#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr){
    int min =INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(min == 0) return 0;
        if(arr[i]<0) arr[i]*=(-1);
        if(arr[i]<min) min = arr[i];
    }
    return min;
}


int main (){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << solve(arr) << endl;

    return 0;
}