//
//  main.cpp
//  highest value in an array
//
//  Created by Suraj Bhavsar on 15/01/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int arr[5];
    
    cout<<" Enter 5 numbers ";
    
    for(int i = 0; i < 5; i++) {
        cin>>arr[i];
    }
    
    int highestValue = arr[0];
    for(int j = 1 ; j < 5; j++) {
        if(arr[j] > arr[0]) {
            highestValue = arr[j];
        }
    }
    cout<<"Highest value in an array is "<<highestValue<<endl;
    return 0;
}
