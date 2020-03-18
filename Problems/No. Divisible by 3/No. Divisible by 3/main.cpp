//
//  main.cpp
//  No. Divisible by 3
//
//  Created by Suraj Bhavsar on 15/01/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int inputNum, remainder = 0;
    
    cout<<"Enter an integer"<<endl;
    cin>>inputNum;
    
    for(int i = 0; inputNum >= 10 ; i++) {
        remainder += inputNum % 10;
        inputNum /= 10;
    }
    remainder += inputNum;
    
    if( remainder / 3) {
        cout<<" The number is divisible by 3"<<endl;
    }
    else {
        cout<<" The number is not divisible by 3"<<endl;
    }
    
    return 0;
}
