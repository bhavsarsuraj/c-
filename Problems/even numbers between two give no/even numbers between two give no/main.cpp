//
//  main.cpp
//  even numbers between two give no
//
//  Created by Suraj Bhavsar on 28/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int upperLimit, lowerLimit;
    cout<<"Enter upper limit"<<endl;
    cin>>upperLimit;
    cout<<"Enter lower limit"<<endl;
    cin>>lowerLimit;
    
    if (lowerLimit%2 != 0) {
        lowerLimit = lowerLimit + 1;
    }
    
    while(upperLimit >= lowerLimit) {
        cout<<lowerLimit<<endl;
        lowerLimit+=2;
    }
    return 0;
}
