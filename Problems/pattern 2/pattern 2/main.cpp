//
//  main.cpp
//  pattern 2
//
//  Created by Suraj Bhavsar on 02/11/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int inputNum;
    cout<<"Enter an integer:"<<endl;
    cin>>inputNum;
    for(int j = 0; j < inputNum; j++ ) {
        
        for ( int i = 0; i < inputNum - (j + 1); i++) {
            cout<<"  ";
        }
        for (int k = inputNum - ( j + 1); k < inputNum; k++) {
            
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
