//
//  main.cpp
//  Character and pointers
//
//  Created by Suraj Bhavsar on 14/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a[] = "xytgh";
    
    char *b = a;
    
    int arr[] = {1,2,3};
    int *q = arr;
    
    cout<<arr[0]<<" "<<q[0]<<endl;
    cout<<a[0]<<" "<<b[0]<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    
    
    
}
