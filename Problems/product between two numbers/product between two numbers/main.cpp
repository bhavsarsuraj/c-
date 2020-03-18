//
//  main.cpp
//  product between two numbers
//
//  Created by Suraj Bhavsar on 21/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int fact=1;
    int n1 = 5;
    int n2 = 1;
    while(n1>=n2 ) {
        fact = fact*n1;
        n1 --;
        
        
    }
    cout<<fact<<endl;
    return 0;
    
}
