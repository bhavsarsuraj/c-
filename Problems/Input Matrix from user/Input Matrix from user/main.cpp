//
//  main.cpp
//  Input Matrix from user
//
//  Created by Suraj Bhavsar on 02/11/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int arr[4];
    cout<<"Enter 4 numbers:"<<endl;
    for( int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin>>arr[i,j];
        }
    }
    for( int i = 0; i < 2; i++) {
        for( int j = 0; j < 2; j++) {
            cout<<arr[i,j];
        }
    }
    return 0;
}
