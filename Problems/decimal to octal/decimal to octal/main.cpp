//
//  main.cpp
//  decimal to octal
//
//  Created by Suraj Bhavsar on 21/12/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int inputNum , remainder1, remainder2, octal = 0 , tempVariable, reversedNumber = 0, count = 0;
    cout<<"Enter an integer to convert into octal"<<endl;
    cin>>inputNum;
    tempVariable = inputNum;
    
    while(inputNum >= 0) {
        inputNum /= 10;
        count++;
    }
    
    for( int i = 0; inputNum >= 8; i++){
        remainder1 = inputNum % 8;
        inputNum /= 8;
        octal = octal * 10 + remainder1;
    }
    
    octal = octal * 10 + inputNum;
    inputNum = tempVariable;
    
    while(octal != 0) {
        
        remainder2 = octal % 10;
        reversedNumber = reversedNumber * 10 + remainder2;
        octal /= 10;
        
    }
    inputNum = tempVariable;

    if( inputNum % 8 == 0) {
        cout<<" The conversion of decimal number "<<inputNum<<" into octal is "<< reversedNumber * pow(10, count ) <<endl;
    }
    else {
        
    cout<<" The conversion of binary number "<<inputNum<<" into octal is "<< reversedNumber<<endl;
        
    }
    
    return 0;
}
