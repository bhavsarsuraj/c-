//
//  main.cpp
//  multiples of 3 and 5
//
//  Created by Suraj Bhavsar on 21/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int count = 1, sum = 0;
    while(count<1000) {
        if(count % 3 == 0 && count % 5 == 0) {
            sum = count + sum;
        }
        count++;
    }
    cout<<sum<<endl;
    return 0;
    
}
