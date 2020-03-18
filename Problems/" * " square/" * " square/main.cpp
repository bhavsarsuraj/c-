//
//  main.cpp
//  " * " square
//
//  Created by Suraj Bhavsar on 26/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int userEnteredNum;
    cout<<"Enter any number:"<<endl;
    cin>>userEnteredNum;
    for( int j = 0; j < userEnteredNum; j++) {
        for( int i = 0; i < userEnteredNum; i++) {
            cout<<" *  ";
        }
        cout<<endl;
    }
    return 0;
}
