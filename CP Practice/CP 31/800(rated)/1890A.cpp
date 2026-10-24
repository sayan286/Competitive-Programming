#include <bits/stdc++.h>
using namespace std;

void sol(vector<int>&arr){
    unordered_map<int,int>ump;
    int n = arr.size();
    if(n<=2){
        cout << "YES" << endl;
        return;
    }
    for(int i=0;i<n;i++){
        ump[arr[i]]++;
    }
    if(ump.size()>2){
        cout << "NO" << endl;
        return;
    }
    if(ump.size()==1){
        cout << "YES" << endl;
        return ;
    }
    if(ump.size()==2){
        if(n%2==0){
            for(auto it : ump){
                if(it.second==n/2){
                    cout << "YES" << endl;
                    return;
                }else{
                    cout << "NO" << endl;
                    return;
                }
            }
        }else{
            for(auto it : ump){
                if(it.second==n/2 || it.second==(n/2)+1){
                    cout << "YES" << endl;
                    return;
                }else{
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        vector<int>arr(a);
        for(int j=0;j<a;j++){
            cin >> arr[j];
        }
        sol(arr);
    }

    return 0;
}