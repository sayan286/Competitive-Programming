#include <bits/stdc++.h>
using namespace std;

void name(int i, int n){
      if(i>n){
        return;
      }else{
        cout << "name\n";
         name(i+1,n);
      }
}

int main(){
    int n;
    cin >> n;
    name(1,n);
    return 0;
}