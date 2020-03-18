//
//  main.cpp
//  product of numbers with prime
//
//  Created by Suraj Bhavsar on 03/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int multiplicant = 4, num = 2, count = 2, product = 1, primeNumber = 0;
    bool isPrime;
    while( product <= 10000) {
        while (true) {
            isPrime = true;
            while ( count <= sqrt(num)) {
                if( num % count == 0) {
                    isPrime = false;
                    break;
                }
                count++;
            }
            if(isPrime) {
                primeNumber = num;
                count = num+1;
                break;
            }
            num++;
        }
        product = multiplicant * primeNumber;
        cout<<multiplicant<<" x "<<primeNumber<<" = "<<product<<endl;
        multiplicant*=4;
    }
    
    int result = 0;
    
    while (result <= 10000) {
        while (true) {
//            
        }
    }
    
    return 0;
}
