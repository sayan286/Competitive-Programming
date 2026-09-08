#include <bits/stdc++.h>
using namespace std;

bool f(string s,int i=0){
     if(i>=s.size()/2){
        return true;
     }else if(s[i]==s[s.size()-1-i]){
        return f(s,i+1);
     }else{
        return false;
     }
}

int main(){
    string n;
    cout << "Enter=";
    cin >> n;
    if(f(n)==true){
        cout << "Palindrom";
    }else{
        cout << "Not Palindrom";
    }

    cout << endl;
    
    return 0;
}