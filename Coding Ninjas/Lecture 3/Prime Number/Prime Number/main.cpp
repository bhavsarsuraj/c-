//
//  main.cpp
//  Prime Number
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
#include<math.h>
using namespace std;

int main() {

    int num;
    cin>>num;
    
    bool isPrime = true;
    
    for(int i = 2; i < sqrt(num); i++) {
        
        if(num % i == 0) {
            isPrime = false;
            break;
        }
        
    }
    
    if(isPrime) {
        cout<<"Prime\n";
    } else {
        cout<<"Not Prime\n";
    }
    
    return 0;
}

