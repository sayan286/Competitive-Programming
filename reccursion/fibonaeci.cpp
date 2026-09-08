#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=1){
        return n;
    }else{
        return f(n-1)+f(n-2);
    }
}

int main(){
   int n;
   cout << "Enter No=";
   cin >> n;
   cout << "Fibonaecci No=" << f(n) << endl;
   return 0;
}