//
//  main.cpp
//  Decimal to BInary
//
//  Created by Suraj Bhavsar on 05/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    long n;
    cin>>n;
    
    int bin[64];
    int i = 0;
    
    while (n > 0) {
        bin[i] = n % 2;
        i++;
        n /= 2;
    }
    
    int j = i-1;
    while (j >= 0) {
        cout<<bin[j];
        j--;
    }
    cout<<endl;
    
}
