#include <bits/stdc++.h>
using namespace std;

void game(int n){
    if((n+1)%3==0 || (n-1)%3==0) cout << "First" << endl;
    else cout << "Second" << endl;
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        game(a);
    }
    return 0;
}