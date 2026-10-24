#include <bits/stdc++.h>
using namespace std;

void solve (int a,int b,int c){
    if(c%2==0){
        a+=c/2;
        b+=c/2;
    }else{
        a+=(c/2)+1;
        b+=c/2;
    }
    if(a>b) cout << "First" << endl;
    else cout << "Second" << endl;
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        solve(a,b,c);

    }
    return 0;
}