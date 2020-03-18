//
//  main.cpp
//  Address Typecasting
//
//  Created by Suraj Bhavsar on 15/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int i = 66;
    char c = i;
    cout<<c<<endl;
    
    int *p = &i;
    cout<<p<<endl;
    char *ch = (char *) p;
    cout<<&ch<<endl;
    char **ch2 = &ch;
    cout<<**ch2<<endl;
    
    int *pc = p;
    cout<<pc<<endl;
    cout<<ch<<endl;
    cout<<*p<<endl;
    cout<<*ch<<endl;
    
    cout<<*(ch + 1)<<endl;
    cout<<*(ch + 2)<<endl;
    cout<<*(ch + 3)<<endl;
    
    
}
