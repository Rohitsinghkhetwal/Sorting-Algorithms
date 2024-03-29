#include<bits/stdc++.h>
using namespace std;
// insertion sort algorithm that take the 0(n2) time complexity 
void insertion_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(arr[j - 1] > arr[j] && j > 0){
            //this loop sorts the array for ith index
            int temp = arr[j - 1];
            arr[j -1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}