#include <bits/stdc++.h>
using namespace std;

// core algo:
vector<bool> sieve(int n){
        vector<bool> is_prime(n+1,true);
        is_prime[0] = is_prime[1] = false;
        for (int i=2;i<n;i++){
            if(is_prime[i]){
                for(int j=2*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
        }
        }
        return is_prime;
    }


// LITTLE OPTIMISE;

vector<bool> sieve(int n){
        vector<bool> is_prime(n+1,true);
        is_prime[0] = is_prime[1] = false;
        for (int i=2;i<n;i++){
            if(is_prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
        }
        }
        return is_prime;
    }


// UPTO SQRT(N):

vector<bool> sieve_sqrt(int n){
        vector<bool> is_prime(n+1,true);
        is_prime[0] = is_prime[1] = false;
        for (int i=2;i*i<n;i++){
            if(is_prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
        }
        }
        return is_prime;
    }
// ODD SIEVE:

vector<bool> sieve_odd(int n){
    vector<bool> is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;

    // even no handeling:
    for(int j=4;j<=n;j+=2){
        is_prime[j]=false;
    }

    // odd no handeling:
    for(int i=3;i*i<=n;i+=2){
        if(is_prime[i]){
            for(int j=i*i;j*j<=n;j+=2*i){
                is_prime[j]=false;
            }
        }
    }
    return is_prime;
}


// Sieve for Prime factorization

vector<int> sieve_pFactor(int n){
    vector<int>is_prime(n+1,0);
    for(int x=2;x<=n;x++){
        if (is_prime[x]!=0) continue; // Not Prime
        for(int u=2*x;u<=n;u+=x){
            if (is_prime[u]==0) is_prime[u]=x;
        }
    }
    return is_prime;
}

// is prime[x]==0;-->Prime


// Sum of Divisor Sieve:

vector<int> sum_of_divisor(int n,vector<int> &sieve){
    vector<int>sumdiv(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                sumdiv[j]+=i;  // Adding Divisor
            }
        }
        return sumdiv;
}

// Biggest Prime Divisor Sieve:

vector<int>largest_prime_factor(int n){
    vector<int>big(n+1,1);
    big[0]=big[1]=1;
    for(int i=2;i<=n;i++){
        if(big[i]==1){  // i is prime
             for(int j=i;i<=n;j+=i){
            big[j]=i;  // Update with new prime 
        }
    }
        }
    return big;
       
}