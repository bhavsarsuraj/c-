#include<iostream>
using namespace std;
int main() {
    int noOfElements,index;
    bool done = false;
    cout<<"Enter the no of elements you want to insert\n";
    cin>>noOfElements;
    
    int arr[noOfElements];
    for(int i = 0; i < noOfElements; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the index from which you want to print the elements of an array\n";
    cin>>index;
    if(index < noOfElements){
    for(int i = index; i < noOfElements; i++){
        cout<<arr[i]<<"  ";
        if(i == noOfElements-1 && index!=0) {
            i = 0;
            while(i<index) {
                done = true;
                cout<<arr[i]<<"  ";
                i++;
            }
            if(done) {
                break;
            }
        }
    }
}
    else{
        cout<<"Invalid Index\n";
        
    }
    return 0;
}
