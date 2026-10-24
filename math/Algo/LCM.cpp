#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// GCD
ll GCD(ll a, ll b){
    a=llabs(a);b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}

// LCM
ll LCM(ll a, ll b){
    a=llabs(a);b=llabs(b);
    return (a*b)/GCD(a,b);
}


int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}