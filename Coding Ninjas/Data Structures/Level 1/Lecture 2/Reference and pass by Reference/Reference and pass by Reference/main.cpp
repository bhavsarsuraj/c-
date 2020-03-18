//
//  main.cpp
//  Reference and pass by Reference
//
//  Created by Suraj Bhavsar on 15/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void increment(int& n) {
    n++;
}

void increment2(int n) {
    n++;
}
//bad Practice

//  int& test(int n) {
//    return n;
//  }


//bad Practice
//int* test2(int n) {
//    return &n;
//}

//Good Practice
int& test(int& n) {
    return n;
}

int* test2(int &n) {
    n += 2;
    return &n;
}

int main() {
    
    int i = 9;
    int& j = i;
    
    int& m = test(i);
    cout<<m<<endl;
    
    int* x = test2(i);
    cout<<*x<<endl;
    
    j++;
    cout<<j<<endl;
    
    int k = 80;
    j = k;
    cout<<i<<endl;
    
    increment2(j);
    cout<<j<<endl;
    
    increment(j);
    cout<<j<<endl;
    
    
}
