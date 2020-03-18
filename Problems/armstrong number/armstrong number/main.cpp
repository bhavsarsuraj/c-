//
//  main.cpp
//  armstrong number
//
//  Created by Suraj Bhavsar on 13/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    
    int count = 0, counter, temp, inputNum, num, sum = 0;
    
    cout<<"Enter a number:"<<endl;
    cin>>inputNum;
    
    temp = inputNum;
    
    while( inputNum > 0) {
        inputNum/= 10;
        count++;
    }
    
    inputNum = temp;
    
    while ( inputNum > 10) {
        counter = inputNum % 10;
        num = pow(counter , count );
        sum += num;
        inputNum /= 10;
    }
    
    sum += pow(inputNum,count);
    
    if(sum == temp) {
        cout<<"The given number is an armstrong number"<<endl;
    }
    else {
        cout<<"The given number is not an armstrong number"<<endl;

    }
    
    return 0;
    
}
