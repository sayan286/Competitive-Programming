#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
vector<int>sieve(MAX+1,0);

// Counting frequency
void frequency(int n){
    for(int i=MAX;i>=2;i--){
        if(n%i==0) sieve[i]++;
    }
}



int main (){
    int n;
    cin >> n;
    vector<int>input(n);
    for(int i=0;i<n;i++){
        cin >> input[i];
        frequency(input[i]);
    }

    int common_divisor = 1;

    for(int i=MAX;i>=2;i++){
        if (sieve[i]>=2){
            common_divisor=i;
            break;
        }
    }

    cout << common_divisor << endl;
    
    return 0;
}
