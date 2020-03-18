//
//  main.cpp
//  Highest two nnumbers in an array
//
//  Created by Suraj Bhavsar on 31/07/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int noOfElements;
    cout<<"Enter the no of elements\n";
    cin>>noOfElements;
    int arr[noOfElements];
    cout<<"Enter the elements\n";
    for(int i = 0; i < noOfElements; i++) {
        cin>>arr[i];
    }
    int highest = arr[0];
    int secongHighest = arr[0];
    
    

    for(int i = 0; i < noOfElements; i++) {
        for (int j = i+1; j < noOfElements; j++) {
            if(arr[j] > highest){
                highest = arr[j];
            }
            if(arr[j] > secongHighest && arr[j] != highest)
            secongHighest = arr[j];
        }
    }
    
    cout<<"Highest is: "<<highest<<endl;
    cout<<"Second Highest is: "<<secongHighest<<endl;
    
    return 0;
    
}
