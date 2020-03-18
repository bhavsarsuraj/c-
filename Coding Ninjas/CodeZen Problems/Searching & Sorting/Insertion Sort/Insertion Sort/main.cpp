#include <iostream>
using namespace std;

void swapNumbers(int arr[], int i ,int j) {
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
}


void insertionSort(int arr[], int n) {
    
    for(int i = 0; i < n-1; i++) {
        
        for(int j = i+1; j > 0; j--) {
           if(arr[j] > arr[j-1])
               break;
            swapNumbers(arr, j, j-1);
        }
        
    }
    
    
}


int main() {
    
    int arr[]  = {1, 6, 86, 69, 9, 0, 13};
    
    
    insertionSort(arr, 7);
    
    for(int i = 0; i < 7; i++) {
        cout<<arr[i]<<" ";
    }
    
}
