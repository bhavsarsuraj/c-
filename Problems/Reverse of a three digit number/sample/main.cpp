//
//  main.cpp
//  sample
//
//  Created by Suraj Bhavsar on 05/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num, a,b,c,d ,reversed;
    cout<<"Enter a three digit number:"<<endl;
    cin>>num;
    a = num % 10;
    b = num / 10;
    c = b % 10;
    d = b / 10;
    reversed = a*100 + c*10 + d;
    cout<<reversed<<endl;
    return 0;
}
