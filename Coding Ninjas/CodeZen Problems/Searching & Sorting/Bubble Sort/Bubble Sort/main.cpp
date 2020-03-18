#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int j = 0; j < n-1; j++) {
        for(int i = 0; i < n-1; i++) {
            if(arr[i+1] < arr[i]) {
                arr[i+1] = arr[i+1] + arr[i];
                arr[i] = arr[i+1] - arr[i];
                arr[i+1] = arr[i+1] - arr[i];
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 83, 8, 1, 7, 3};
    bubbleSort(arr,7);
    for(int i = 0; i < 7; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
