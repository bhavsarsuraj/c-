//
//  main.cpp
//  Patterns
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    
    int i = 1, j = 1;
    while( i <= n) {
        while (j <= i) {
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    
    
}
