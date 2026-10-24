#include <bits/stdc++.h>
using namespace std;

int tank (vector<int> &arr,int k){
    int tanki = arr[0];
    int last = 2*(k-arr[arr.size()-1]);
    tanki = max(tanki,last);
    for(int i=1;i<arr.size();i++){       
        tanki = max(tanki,(arr[i]-arr[i-1]));
    }
    return tanki;
}

int main (){
    int c;
    cin >> c;
    for (int i=0;i<c;i++){
        int n,x;
        cin >> n >> x;
        vector<int>arr(n);
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        cout << tank(arr,x) << endl;
       
    }
    return 0;
}