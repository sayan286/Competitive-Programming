#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int d = n%10; if(d==0) d = 10;
    n/=10;
    int c = n%10; if(c==0) c = 10;
    n/=10;
    int b = n%10; if(b==0) b = 10;
    n/=10;
    int a = n%10; if(a==0) a = 10;

    return llabs(a)+llabs(b-a)+llabs(b-c)+llabs(c-d)+3;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        cout << solve(m) << "\n";
    }

    return 0;
}