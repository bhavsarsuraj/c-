//
//  main.cpp
//  Sum of even and odd digits
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int evenSum = 0;
    int oddSum = 0;
    
    while(n > 0) {
        int digit = n % 10;
        
        if(digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        n /= 10;
    }
    
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;
    
}
