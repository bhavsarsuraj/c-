//
//  main.cpp
//  prime between upper and lower limit
//
//  Created by Suraj Bhavsar on 01/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
#include<math.h>
using namespace std;
int  main() {
    int upperLimit, lowerLimit, tempLowerLimit, counter, noOfprimes = 0;
    bool isPrime;
    cout<<"Note: Negative numbers will be considered as positive numbers\n";
    cout<<"Enter upperlimit:"<<endl;
    cin>>upperLimit;
    cout<<"Enter lowerlimit:"<<endl;
    cin>>lowerLimit;
    tempLowerLimit = lowerLimit;
    if(upperLimit < 0 ) {
        cout<<"You entered a negative upperlimit"<<endl;
        upperLimit = abs(upperLimit);
    }
    if (lowerLimit < 0) {
        cout<<"You entered a negative lower limit"<<endl;
        lowerLimit = abs(lowerLimit);
        tempLowerLimit = lowerLimit;
    }

    if(lowerLimit == 1) {
        noOfprimes--;
    }
    while(lowerLimit <= upperLimit) {
        isPrime = true;
        counter = 2;
        while( counter <= sqrt(lowerLimit) ) {
            if(lowerLimit % counter == 0){
                isPrime = false;
                break;
            }
            counter ++;
        }
        
        if(isPrime){
            noOfprimes++;
        }
        lowerLimit++;
    }
    cout<<"The numbers of prime numbers between "<<tempLowerLimit <<" and "<< upperLimit<<" is/are "<<noOfprimes<<endl;
    
    return 0;
    
}
