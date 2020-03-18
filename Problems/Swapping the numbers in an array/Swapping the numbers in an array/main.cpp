//
//  main.cpp
//  1
//
//  Created by Suraj Bhavsar on 15/02/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int  noOfElements, i = 0;
    cout<<"Enter the no of elements you want to enter:"<<endl;
    cin>>noOfElements;
    int j = noOfElements / 2;
    int arr[noOfElements];
    cout<<"Enter the numbers:"<<endl;
    
    for(int k = 0; k < noOfElements; k++) {
        cin>>arr[k];
    }
    if(noOfElements % 2 == 0) {
        while(i < j) {
            while(j < noOfElements) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
                j++;
                break;
            }
            i++;
        }
    }
    else {
        j = noOfElements / 2 + 1;
        while(i < j) {
            while(j < noOfElements) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
                j++;
                break;
            }
            i++;
        }
    }
    for(int k = 0; k < noOfElements; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}

/**
 */
