//
//  main.cpp
//  Binary Pattern
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j < n-i; j++) {
            
            if(i % 2 == 0) {
                cout<<"1";
            } else {
                cout<<"0";
            }
        }
        cout<<endl;
        
    }
    
}
