#include <bits/stdc++.h>
using namespace std;

// Brute

vector<int>rotate(vector<int> &arr,int d){
    int n =arr.size();
    d%=n;
    for(int i=0;i<n-d;i++){
         swap(arr[i],arr[i+d]);
    }
}

int main (){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int d;
    cin >> d;
    rotate(arr,d);
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }

    cout << endl;
    
    return 0;
}