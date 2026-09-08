#include <bits/stdc++.h>
using namespace std;

 void rev(int i,int n,vector<int>&vec){
     if(i>=n/2){
        return;
     }else{
        swap(vec[i],vec[n-i-1]);
        rev(i+1,n,vec);
     }
}
int main(){
    vector<int>vec={1,2,6,7,4,10};

    rev(0,vec.size(),vec);

    for(int val: vec){
        cout << val << " ";
    }
     
      cout << endl;
    
    return 0;
}