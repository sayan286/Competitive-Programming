#include <bits/stdc++.h>
using namespace std;
void prin(int i,int n){
    if(i>n){
        return;
    }else{
        cout << i << " ";
       prin(i+1,n);
    }
}

int main (){
   int n;
   cout << "Enter no=";
   cin >> n;
    prin(1,n);
    cout << endl;
    return 0;
}