#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            j++;
            arr[j]=arr[i];
        } 
    }

    for(int i=0;i<=j;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}