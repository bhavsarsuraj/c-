//
//  main.cpp
//  reversed of a number
//
//  Created by Suraj Bhavsar on 06/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int remainder, inputNum, reversedNumber = 0, temp;
    cout<<"Enter any number:"<<endl;
    cin>>inputNum;
    temp = inputNum;
    while(inputNum != 0) {
        remainder = inputNum % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        inputNum /= 10;
    }
    inputNum = temp;
    cout<<" The reversed number of "<<inputNum<<" is "<<reversedNumber<<endl;
    return 0;
}
