#include <bits/stdc++.h>
using namespace std;

vector<int>rotate(vector<int> &arr){
    int n =arr.size();
    for(int i=0;i<n-1;i++){
         swap(arr[i],arr[i+1]);
    }
}

int main (){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    rotate(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }

    cout << endl;
    
    return 0;
}