//
//  main.cpp
//  Repeating numbers
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    if(n != 0) {
        cout<<"1"<<endl;
    }
    int count = 2;
    int value = 2;
    
    for(int i = 1; i < n; i++) {
        
        for(int j = 0; j < count; j++) {
            cout<<value;
            if(value == 9) {
                value = 0;
            }
            value++;
        }
        cout<<endl;
        count *= 2;
        
        
    }
    
    
}
