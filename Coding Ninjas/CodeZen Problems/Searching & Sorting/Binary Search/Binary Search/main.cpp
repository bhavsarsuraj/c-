#include <iostream>
using namespace std;

int main() {
    
    
    int n, x;
    cin>>n>>x;
    int arr[n];
    
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i];
    }
    
    int start = 0;
    int end = n-1;
    
    while (start <= end) {
        int mid = (start + end) / 2;
        
        if(x == arr[mid]) {
            cout<<mid<<endl;
            break;
        } else if( x < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid+1;
        }
    }
    return 0;
}

