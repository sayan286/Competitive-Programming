#include <bits/stdc++.h>
using namespace std;

void backt(int i,int n){
    if(i>n){
        return;
    }else{
        backt(i+1,n);
        cout << i << " ";
    }
}

int main(){
   int n; cout << "Enter no="; cin >> n;
      backt(1,n);
      cout << endl;
    return 0;
}