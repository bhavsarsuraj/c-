//
//  main.cpp
//  Pointers and Functions
//
//  Created by Suraj Bhavsar on 14/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void print(int *p) {
    cout<<*p<<endl;
}
void increment(int *p) {
    (*p)++;
}

void incrementPointer(int *p) {
    p = p + 1;
}

void sum(int a[], int n) {
    cout<<sizeof(a)<<endl;
}


int main() {
    
    int i = 9;
    int *p = &i;
    print(p);
    incrementPointer(p);
    cout<<p<<endl;
    print(p);
    increment(p);
    print(p);
    
    
    
    int a[10];
    cout<<sizeof(a)<<endl;
    sum(a, 10);
    
    
}
