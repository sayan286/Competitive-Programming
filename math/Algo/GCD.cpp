#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Iterative(fast)
ll gcd(ll a, ll b){
    a=llabs(a);b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}

// Recurssive
ll gcd_rec(ll a,ll b){
    a=llabs(a);b=llabs(b);
    return (b==0) ? a : gcd_rec(b,a%b);
    
}

int main (){

    return 0;
}