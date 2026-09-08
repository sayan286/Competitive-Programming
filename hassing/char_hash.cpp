#include <bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin >> s;
    

    // Precalculation 
    int hassh[26]={0};
    for (int i=0;i<s.size(); i++){
        hassh[s[i]-'a'] +=1;
    }

    int q;
    cin >> q;
    while(q--){
        char character;
        cin >> character;

        // Fetching
        cout << hassh[character-'a'] << endl;
    }

    return 0;
}