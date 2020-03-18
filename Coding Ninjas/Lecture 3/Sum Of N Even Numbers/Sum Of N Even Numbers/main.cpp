//
//  main.cpp
//  Sum Of N Even Numbers
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    
    int sum = 0;
    for(int i = 2; i <= num; i = i+2) {
        sum = sum + i;
    }
    
    cout<<sum<<endl;
    
}
