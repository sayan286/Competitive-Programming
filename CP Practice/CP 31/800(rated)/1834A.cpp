#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&a,int b){
    int n1=0; // for 1
    int n2=0; // for -1
    for(int i=0;i<b;i++){
        if(a[i]==1) n1++;
        else n2++;
    }
    int n = n2 - n1;
    int ans =n/2;
    if(n<=0){
        if(n2%2!=0) return 1;
        else return 0;
    }else{
        if(n%2!=0) ans++;
        if((n2-ans)%2!=0) ans++;
        return ans;
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        vector<int>a(b);
        for(int i=0;i<b;i++){
            cin >> a[i];
        }
        cout << solve(a,b) << "\n";
    }

    return 0;
}