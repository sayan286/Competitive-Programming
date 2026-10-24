#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


 
int main() {
    // input

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        ll d;
        cin >> d;
        vector<ll>a(d);
        for(int j=0;j<d;j++){
            cin >> a[j];
        }
    
    // algo

    ll maxm = a[0];
    for(int j=0;j<a.size();j++){
        if(a[j]>maxm) maxm = a[j];
    }
    vector<ll>b,c;
   
    for(int j=0;j<a.size();j++){
       if(a[j]==maxm) c.push_back(a[j]);
       else b.push_back(a[j]);
    }

    // output

    if(b.size()==0){
        cout << -1 << endl; 
    } else{
        cout << b.size() << " " << c.size() << endl;
        for(int j=0;j<b.size();j++){
            cout << b[j] << " ";
        }
        cout << endl;
        for(int j=0;j<c.size();j++){
            cout << c[j] << " ";
        }
        cout << endl;
    }
}  
       
    return 0;
}