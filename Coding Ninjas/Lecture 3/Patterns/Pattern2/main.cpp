//
//  main.cpp
//  Space Pattern
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    
    int i = num;
    int j;
    int value = 1;
    
    while (i > 0) {
        j = 1;
        
        while( j <= num) {
            
            if(j < i) {
                cout<<" ";
            } else {
                cout<<value;
                value++;
            }
            
            j++;
            
            
        }
        
        cout<<endl;
        i--;
        
        
    }
}
