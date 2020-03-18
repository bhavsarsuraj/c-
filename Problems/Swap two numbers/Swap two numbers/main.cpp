//
//  main.cpp
//  Swap two numbers
//
//  Created by Suraj Bhavsar on 14/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    float amount;
    
    cout<<"Enter the amount in rupees:\n";
    cin>>amount;
    
    cout<<"\nThe amount in USD is : "<<amount*0.014;
    cout<<"\nThe amount in JPY is : "<<amount*1.54;
    cout<<"\nThe amount in EUR is : "<<amount*0.012;
    cout<<"\nThe amount in EUR is : "<<amount*0.0000022;
    cout<<"\nThe amount in CNY is : "<<amount*0.094;
    
    return 0;
    
}
