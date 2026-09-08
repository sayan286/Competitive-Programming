#include <bits/stdc++.h>
using namespace std;

void rprint(int i,int n){
    if(i<1){
        return;
    }else{
        cout << i << " ";
        rprint(i-1,n);
    }
}

int main(){
  int n;
  cout << "Enter no=";
  cin >> n;

  rprint(n,n);

    return 0;
}