#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }

    int largest = vec[0]; 
    int sec_largest = INT_MIN;
    for (int i=0;i<n;i++){
        if(largest<vec[i]){
            sec_largest = largest;
            largest = vec[i];
        }else if(vec[i]<largest && vec[i]>sec_largest){
            sec_largest = vec[i];
        }
    }

    cout << sec_largest << endl;

    return 0;
}