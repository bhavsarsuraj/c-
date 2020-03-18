//
//  main.cpp
//  factorial of a  number
//
//  Created by Suraj Bhavsar on 19/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    int integer , fact = 1;
    cout<<"Enter an integer to find factorial:"<<endl;
    cin>>integer;
    while( integer >= 1) {
        fact = fact*integer;
        integer--;
        
    }
    cout<<"The factoral of given integer is "<<fact<<endl;
    return 0;
    
}
