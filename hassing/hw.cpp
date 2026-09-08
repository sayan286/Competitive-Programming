#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int,int>upp;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        upp[arr[i]]++;
    }

    int max_freq=INT_MIN;
    int smallest_element=INT_MAX;

    for(auto it : upp){
        max_freq = max(max_freq,it.second);
    }

    for (auto it : upp){
        if (it.second == max_freq){
            smallest_element = min(smallest_element,it.first);
        }
    }

    cout << smallest_element << endl;

    
    return 0;
}