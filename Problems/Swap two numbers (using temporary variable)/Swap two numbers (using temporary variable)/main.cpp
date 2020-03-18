//
//  main.cpp
//  Swap two numbers (using temporary variable)
//
//  Created by Suraj Bhavsar on 19/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter two numbers:"<<endl;
    cin>>a >>b;
    cout<<"Before Swapping:"<<endl;
    cout<<"a = "<<a<<", "<<"b = "<<b<<endl;
    
    temp = a;
    a = b;
    b = temp;
    cout<<"After Swapping:"
    <<"a = "<<a<<", "<<"b = "<<b<<endl;
    return 0;
    
    

    
}
