//
//  main.cpp
//  Arrays and Pointers
//
//  Created by Suraj Bhavsar on 14/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int arr[13];
    cout<<&arr[0]<<endl;
    arr[0] = 10;
    arr[1] = 20;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<*(arr+1)<<endl;
    int *p = arr;
     cout<<&p<<endl;
    cout<<p;
    p++;
    cout<<*p <<endl;
    cout<<6[arr]<<endl;
    cout<<sizeof(p);
}
