//
//  main.cpp
//  Sum or Product
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;


void sum(int n) {
    long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    cout<<sum;
}

void product(int n) {
    long product = 1;
    for (int i = 1; i <= n; i++) {
        product  = product * i;
    }
    
    cout<<product;
}

int main() {
    
    int num, choice;
    cin>>num;
    cin>>choice;
    
    if(choice == 1) {
        sum(num);
    } else if ( choice == 2) {
        product(num);
    } else {
        cout<<"-1";
    }
    return 0;
    
}
