//
//  main.cpp
//  Galaxy of Stars
//
//  Created by Suraj Bhavsar on 04/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    if(n % 2 == 0) {
        n++;
    }
    
    for(int i = 1; i <= n; i++) {
        if( i <= n/2+1) {
            for(int j = 1; j <= i; j++) {
                cout<<"*";
            }
        } else {
            for(int j = 1; j <= n-i+1; j++) {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}
