#include <bits/stdc++.h>
using namespace std;
 // sort algo
int f(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        } 
        if(i<j){
            swap(arr[i],arr[j]);
        }       
    }
      swap(arr[low],arr[j]);
      return j;
}

void quoick_sort(vector<int> &arr,int low,int high){
    if(low<high){
        int pindex = f(arr,low,high);

        quoick_sort(arr,low,pindex-1);
        quoick_sort(arr,pindex+1,high);
    }
}

// Highest product algo
int h_product(vector<int> &arr){
    int n = arr.size();
    quoick_sort(arr,0,n);
    
    //Case 1 : Product of last two element
    int ans1 = arr[n-1]*arr[n-2]*arr[n-3];
    //Case 2 : Product of last element and first two element
    int ans2 = arr[0]*arr[1]*arr[n-1];

    return max(ans1,ans2);

}

int main (){

    return 0;
}