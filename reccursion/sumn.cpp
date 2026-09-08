#include <bits/stdc++.h>
using namespace std;

void j(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }else{
        j(i-1,sum+i);
    }
}

int main(){
   int i;
   cout << "Enter no=";
   cin >> i;
   cout << "sum=";
    j(i,0);
    cout << endl;
    return 0;
}