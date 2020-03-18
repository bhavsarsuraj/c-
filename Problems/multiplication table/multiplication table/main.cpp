//
//  main.cpp
//  multiplication table
//
//  Created by Suraj Bhavsar on 21/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    long int n = 10 , m = 10;
    n=(n*(n+1)*(2*n+1))/6;
    
    m = m*(m+1)/2;
    m = m*m;
    cout<<n<<"\n"<<m<<endl;
    return 0;
    

}


