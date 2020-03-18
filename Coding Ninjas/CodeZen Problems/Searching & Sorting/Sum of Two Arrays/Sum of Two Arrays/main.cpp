#include <iostream>

using namespace std;

void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]){
    
    int large = (size1 > size2 ) ? size1 : size2;
    int count = large;
    int carry = 0;
    
    for(int i = size1-1, j = size2 - 1; count > 0 ;i--,j--,count--) {
        
        if( i < 0 ) {
            output[count] = (input2[j] + carry) % 10;
            carry = (input2[j] + carry) / 10;
            continue;
        }
        if( j < 0 ) {
            output[count] = (input1[i] + carry) % 10;
            carry = (input1[i] + carry) / 10;
            continue;
        }
        
        int sum = (input1[i] + input2[j] + carry) % 10;
        carry = (input1[i] + input2[j] + carry) / 10;
        
        output[count] = sum;
    }
    if(carry == 0) {
        output[count] = 0;
    } else {
        output[count] = 1;
    }
}



int main() {
    
    int arr1[] = {1, 2, 4, 7};
    int arr2[] = {2, 4, 7};
    int output[5];
    sumOfTwoArrays(arr1, 4, arr2, 3, output);
    for(int i = 0; i < 5; i++) {
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}
