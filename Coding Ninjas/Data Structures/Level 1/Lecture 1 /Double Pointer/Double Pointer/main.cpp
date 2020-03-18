//
//  main.cpp
//  Double Pointer
//
//  Created by Suraj Bhavsar on 14/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void increment(int **q) {
    *q = *q + 1;
}


int main() {
//    int a = 10;
//    int *p = &a;
//
//    int **t = &p;
//    cout<<t<<endl;
//    cout<<&p<<endl;
//
//
//    cout<<p<<endl;
//    cout<<*t<<endl;
//    cout<<&a<<endl;
//
//    cout<<*t<<endl;
//    cout<<**t<<endl;
//
//
//    cout<<*t<<endl;
//    increment(t);
//    cout<<*t<<endl;
//
//
    
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 1;
    cout<<*ptr2<<" ";
    cout<< ptr2 - ptr1;
    return 0;
}
