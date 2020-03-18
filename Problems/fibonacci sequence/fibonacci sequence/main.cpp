//
//  main.cpp
//  fibonacci sequence
//
//  Created by Suraj Bhavsar on 23/01/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    
    int count = 1, sum = 0;
    
    cout<<" 1 ";
    while(count < 50) {
        
        sum += count;
        cout<<sum<<" ";
        count += sum;
        cout<<count<<" ";
    }
    
    
}
