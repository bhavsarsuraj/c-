//
//  main.cpp
//  pattern
//
//  Created by Suraj Bhavsar on 30/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int inputNum;
    cout<<"Enter an integer:"<<endl;
    cin>>inputNum;
    for( int j = inputNum; j > 0; j--) {
        for (int i = inputNum ; i > j ; i--) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
