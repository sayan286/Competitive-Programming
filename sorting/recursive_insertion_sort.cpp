#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// Recursive insertion sort function
void recursive_insertion_sort(int arr[], int i, int n) {
    // Base Case: if index reaches the size, return
    if (i == n) return;

    int j = i;
    // Shift the element to the left while it's smaller than its predecessor
    while (j > 0 && arr[j - 1] > arr[j]) {
        // Swap arr[j] and arr[j-1]
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    // Recur for the next index
    recursive_insertion_sort(arr, i + 1, n);
}



int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n; i++){
        cin >> arr[i];
    }

    recursive_insertion_sort(arr,0,n);

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    

    return 0;
}