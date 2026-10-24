#include <bits/stdc++.h>
using namespace std;

int operation (string x,string s,int n,int m){
    for(int i=0;i<=5;i++){
        if(x.find(s)!=string::npos) return i;
        x.append(x);
    }
    return -1;
}

int main(){
    int l;
    cin >> l;
    for(int i=0;i<l;i++){
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x;
        cin >> s;
        cout << operation(x,s,n,m) << endl;
    }
    return 0;
}