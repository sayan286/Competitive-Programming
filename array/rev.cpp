#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={1,2,5,8,2,3};
    int start=0; int end=vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }

    for(auto val: vec){
        cout << val << " ";
    }

    cout << endl;
    return 0;
}