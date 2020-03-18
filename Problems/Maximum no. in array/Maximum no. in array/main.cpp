//
//  main.cpp
//  Maximum no. in array
//
//  Created by Suraj Bhavsar on 26/12/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int noOfElements, positionOfmax;
    cout<<"Enter the number of elements you want to enter:"<<endl;
    cin>>noOfElements;
    int arr[noOfElements];
    cout<<"Enter the numbers:"<<endl;
    
    for(int i = 0; i < noOfElements; i++ ) {
        cin>>arr[i];
    }
    int maximum = arr[0];
    
    for( int i = 0; i < noOfElements; i++ ) {
        for(int j = i + 1; j < noOfElements; j ++) {
            if(arr[j] > arr[i] ) {
                maximum = arr[j];
                positionOfmax = j;
            }
            break;
        }
    }
    cout<<" Maximum number is "<<maximum<<endl;
    int secondMaximum = arr[0];
    for ( int i = 0; i < noOfElements; i ++) {
        for( int k = i + 1 && k != positionOfmax; k < noOfElements; k++) {
            if( arr[k] > arr[i] ) {
                secondMaximum = arr[k];
            }
            break;
        }
    }
    cout<<" Second maximum number is "<<secondMaximum<<endl;
    return 0;
}
