//
//  main.cpp
//  Consecutive 1's in binary
//
//  Created by Suraj Bhavsar on 05/08/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main() {
    int remainder, number, binary = 0, count = 0;
    
    cout<<"Enter a number\n";
    cin>>number;
    
    while (number > 1) {
        
        remainder = number % 2;
        number/=2;
        binary += remainder*pow(10, count);
        count++;
    }
    binary = binary + 1*pow(10,count);
    cout<<binary<<endl;
    count++;
    
    int consecutive = 0,count = 0;
    string x = to_string(binary);
    
    for(int i = 0 ; i < sizeof(x)-1; i++) {
        if( x[i] == x[i+1] && x[i] == 1){
            consecutive++;
        }
    }
    
}
