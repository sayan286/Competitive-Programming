#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int>divisor;
    for (int i=1; i*i<=n;i++){
        if (n%i==0){
            divisor.push_back(i);
            if (i!=n/i){
                divisor.push_back(n/i);
            }            
        }
    }
    for(int it:divisor){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}