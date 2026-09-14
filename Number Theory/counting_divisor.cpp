#include <bits/stdc++.h>
using namespace std;

// Naive Method
int naive(int n){
    int counts = 0;
    for(int d=1;d*d<=n;d++){
        if(n%d==0){
            counts++;
            if(d!=n/d) counts++;
        }     
    }
    return counts;
}


 // My method

int My_method(int n){
    int Pfac = 1;
    for(int i=2;i*i<=n;i++){
        int counts = 1;
        while(n%i==0){
            n/=i;
            counts++;
        }
        Pfac*=counts;
    }
    if(n>1){
        Pfac*=2;
    }
    return Pfac;
}

// Most Optimise Method:
int no_factor(int n){
    
    return 0 ;
}


int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        cout << no_factor(x) << endl;
    }

    return 0;
}