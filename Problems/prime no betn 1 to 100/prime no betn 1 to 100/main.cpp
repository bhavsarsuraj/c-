//
//  main.cpp
//  prime no betn 1 to 100
//
//  Created by Suraj Bhavsar on 30/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
#include<math.h>
using namespace std;
int main() {
    
    long long int  counter, num = 11, noOfPrimes = 4;
    bool isPrime;
    while (num <= 100 ) {
        counter = 2;
        isPrime = true;
        while ( counter <= sqrt(num)) {
            if(num % counter == 0) {
                isPrime = false;
                break;
            }
            counter++;
        }
        if (isPrime) {
            noOfPrimes++;
        }
        num++;
    }
    cout<<noOfPrimes<<endl;
    return 0;
}
