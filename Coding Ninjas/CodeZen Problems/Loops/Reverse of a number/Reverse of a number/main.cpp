//
//  main.cpp
//  Reverse of a number
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int reversedNum = 0;
    
    while (n > 0) {
        int remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    
    cout<<reversedNum<<endl;
}
