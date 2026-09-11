#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }

    for (int i=0;i<n;i++){
        cout << nums[i] << " ";
    }

    cout << endl;
}

int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubble_sort(arr,n);

    return 0;
}