//
//  main.cpp
//  array manipulations
//
//  Created by Suraj Bhavsar on 30/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int noOfElements;
    
    cout<<"Enter the number of elements you want to enter:"<<endl;
    cin>>noOfElements;
    
    int arr[noOfElements];
    cout<<"Enter the numbers:"<<endl;
    
    for( int i = 0; i < noOfElements; i++) {
        cin>>arr[i];
    }
    int max = arr[0], min = arr[0], positionOfMax = 0, positionOfMin = 0;
    
    
    for(int i = 0; i < noOfElements; i++) {
        if( max < arr[i] ) {
            max = arr[i];
            positionOfMax = i;
        }
        if( min > arr[i] ) {
            min = arr[i];
            positionOfMin = i;
        }
    }
    
    arr[positionOfMin] = max;
    arr[positionOfMax] = min;
    
    for (int i = 0; i < noOfElements; i++) {
        cout<<arr[i]<<" ";
    }
    
//    cout<< "Max value of integer is "<<max<<" and minimum value is "<<min;
    
    return 0;
    
}
