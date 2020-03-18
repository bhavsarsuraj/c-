

#include <iostream>
using namespace std;

int main() {
    
    int noOfElements,repeatedNumber ,count;
    bool isRepeated = false;
    cout<<"Enter the no of elements\n";
    cin>>noOfElements;
    int arr[noOfElements];
    cout<<"Enter the elements\n";
    for(int i = 0; i < noOfElements; i++) {
        cin>>arr[i];
    }
    
    for(int i = 0; i < noOfElements; i++) {\
        isRepeated = false;
        count = 1;
        for(int j = i+1; j <noOfElements; j++) {
            if(arr[j] == arr[i] && arr[j] != repeatedNumber) {
                isRepeated = true;
                repeatedNumber = arr[j];
                count++;
            }
        }
        if(isRepeated)
            cout<<"Repeated number is "<<repeatedNumber<<endl;
    
    }
    return 0;
}
