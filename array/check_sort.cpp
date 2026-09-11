#include <bits/stdc++.h>
using namespace std;

int main (){
     int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bool sorted = true;

    for(int i=0;i<n-1; i++){
        if(arr[i]>arr[i+1]){
            sorted = false;
            break;
        }    
    }

    cout << sorted << endl;
    return 0;
}