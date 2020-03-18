//
//  main.cpp
//  print from index
//
//  Created by Suraj Bhavsar on 02/08/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int noOfElements,index;
    cin>>noOfElements;
    int arr[noOfElements];
    for(int i=0; i < noOfElements; i++) {
        cin>>arr[i];
    }
    cin>>index;
    for(int i = index; i < noOfElements; i++) {
        if(i % noOfElements == i) {
            cout<<arr[i];
        }
        else {
            i = i % noOfElements;
        }
    }
}
