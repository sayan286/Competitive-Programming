#include <bits/stdc++.h>
using namespace std;

void solve(int x1,int y1,int x2,int y2){
    if(y1>y2){
        cout << -1 << "\n";
    }else{
        x1+=y2-y1;
        if(x1>=x2){
            cout << (y2-y1)+(x1-x2) << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        solve(x1,y1,x2,y2);
    }
}