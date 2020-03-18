//
//  main.cpp
//  power of a number
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n , p;
    cin>>n >> p;
    
    int result = 1;
    
    for(int i = 0; i < p; i++) {
        result = result * n;
    }
    
    cout<<result<<endl;
    
}
