#include <bits/stdc++.h>
using namespace std;

int solve(string s,int n){
    int count =0;
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(s[i]!=s[j]) count+=2;
        else break;
        i++;
        j--;
    }
    return n-count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        string s;
        cin >> s;
        cout << solve(s,m) << "\n";
    }

    return 0;
}