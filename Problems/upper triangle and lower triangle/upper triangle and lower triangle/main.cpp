//
//  main.cpp
//  fibonacci series
//
//  Created by Suraj Bhavsar on 27/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int inputNum;
    cout<<"Enter a number:";
    cin>>inputNum;
    if( inputNum % 2 == 0) {
        for( int j = 0; j < inputNum / 2; j++) {
            for( int i = 0; i <= j; i++) {
                cout<<"* ";
            }
            cout<<endl;
        }
        for( int j = inputNum / 2 - 1 ; j >= 0; j--) {
            for ( int i = 0; i <= j; i++) {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    else {
        for( int j = 0; j < inputNum / 2; j++) {
            for( int i = 0; i <= j; i++) {
                cout<<"* ";
            }
            cout<<endl;
        }
        for ( int j = inputNum / 2 ; j >= 0; j--) {
            for( int i = 0; i <= j; i++) {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    return 0;
}
