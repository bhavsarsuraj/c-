//
//  main.cpp
//  Reversing Series Pattern
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int value = 1;
    for(int i = 1; i <= n; i++) {
        
            value += (i-1);
    
        
        
        for(int j = 1; j <= i; j++ ) {
            
            cout<<value<<" ";
            if( i % 2 == 0) {
                value--;
            } else {
                value++;
            }
        }
        
        if( i % 2 == 0) {
            value++;
        }
        
        
        cout<<endl;
    }
    
    
}
