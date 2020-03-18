//
//  main.cpp
//  sum of natural numbers
//
//  Created by Suraj Bhavsar on 21/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter an integer to find sum of natural numbers:"<<endl;
    cin>>n;
    n = n*(n+1)/2;
    cout<< "The sum of natural numbers is "<<n<<endl;
    return 0;

}
