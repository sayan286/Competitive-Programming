#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n; i++){
        cin >> arr[i];
    }

    insertion_sort(n,arr);
    

    return 0;
}