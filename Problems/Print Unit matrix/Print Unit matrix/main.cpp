//
//  main.cpp
//  Print Unit matrix
//
//  Created by Suraj Bhavsar on 04/11/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    int inputNum;
    cout<<"Enter an integer:"<<endl;
    cin>>inputNum;
    
    for( int j = 0; j < inputNum; j++) {
        for ( int i = 0; i < inputNum; i++) {
            if ( i == j) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
