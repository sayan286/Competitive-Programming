#include <bits/stdc++.h>
using namespace std;

void jagged(vector<int>&arr){
    if (arr[0]==1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
    

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        vector<int>arr(a);
        for(int j=0;j<a;j++){
            cin >> arr[j];
        }
        jagged(arr);
    }

    return 0;
}