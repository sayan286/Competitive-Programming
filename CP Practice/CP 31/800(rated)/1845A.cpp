#include <bits/stdc++.h>
using namespace std;

void solve(int n,int k,int x){
    if(n==1 && x==1){
        cout << "NO" << "\n";
        return ;
    }else if(n==1 && x!=1){
        cout << "YES\n";
        cout << 1 << "\n";
        cout << 1 << "\n";
        return ;
    }
    if(k==1) {cout << "NO" << "\n";return;}
    if(k==2 && x==1){
        if(n%2==0){
            cout << "YES" << "\n";
            cout << n/2 << "\n";
            for(int i=0;i<n/2;i++){
                cout << 2 << " ";
            }
            cout << "\n";
            return;
        }else{
            cout << "NO" << "\n";
            return;
        }
    }
    if(x!=1) {
        cout << "YES" <<"\n";
        cout << n << "\n";
        for(int i=0;i<n;i++){cout << 1 << " ";}
        cout << "\n";
        return;
    }
    if(x==1){
        if(n%2==0){
            cout << "YES" << "\n";
            cout << n/2 << "\n";
            for(int i=0;i<n/2;i++){
                cout << 2 << " ";
            }
            cout << "\n";
            return;
        }else{
            cout << "YES" << "\n";
            cout << n/2 << "\n";
            int d = n/2 - 1;
            for(int i=0;i<d;i++){
                cout << 2 << " ";
            }
            cout << 3 <<"\n";
            return ;
        }
    }
    
} 

int main (){
    int a;
    cin >> a;
    for(int i=0;i<a;i++){
        int n,k,x;
        cin >> n >> k >> x;
        solve(n,k,x);
    }

    return 0;
}