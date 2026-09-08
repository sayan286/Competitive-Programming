#include <bits/stdc++.h>
using namespace std;

void backt(int i,int n){
    if(i<1){
        return;
    }else{
        backt(i-1,n);
        cout << i << " ";
    }
}

int main(){
   int n;
   cout << "Enter no=";
   cin >> n;
    backt(n,n);
    cout << endl;
    return 0;
}