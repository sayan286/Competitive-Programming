#include <bits/stdc++.h>
using namespace std;

int water(string s,int n){
    int coun = 0;
    int coun1 = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            coun++;
            coun1++;
        }
        if(coun>=3) return 2; 
        if(s[i]=='#') coun =0;
    }
     return coun1;
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        string s;
        cin >> s;
        cout << water(s,a) << endl;
    }
    
    return 0;
}