//
//  main.cpp
//  xyz
//
//  Created by Suraj Bhavsar on 06/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int remainder , sum = 0, num ;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    while( num > 0) {
        remainder = num % 10;
        sum += remainder;
        num = num/10;
    }
    cout<<"The sum of all digits = "<<sum<<endl;
    return 0;
    
}
