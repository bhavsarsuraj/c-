//
//  main.cpp
//  find quotient and remainder
//
//  Created by Suraj Bhavsar on 14/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    int num1, num2 ,quotient, remainder;
    
    cout<<"Enter two numbers to find Quotient and remainder:";
    cin>>num1 >> num2;
    quotient = num1 / num2;
    remainder = num1 % num2;
    cout<<"The Quotient is " <<quotient <<" and "<< "the remainder is "<< remainder<<endl;
    return 0;
    
    
}
