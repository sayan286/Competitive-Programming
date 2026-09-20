#include <bits/stdc++.h>
using namespace std;

int bulb(vector<int> &on){
    int counts = 0;
     for(int i=0;i<on.size();i++){
        if(counts%2==1){
            on[i]^=1;
        }
        if(on[i]==1){
            continue;
        }else{
            on[i]^=1;
            counts++;
        }
        
     }
    return counts;
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        vector<int>arr(a);
        for(int j=0;j<a;j++){
            cin >> arr[j];
        }
        cout << bulb(arr) << endl;
    }
   
    return 0;
}
