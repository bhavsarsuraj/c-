//
//  main.cpp
//  Pattern3
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    
    int value;
    
    for(int i = 1; i <= num; i++) {
        value = i;
        for(int j = 1; j <= num; j++) {
            
            if( j <= num-i) {
                cout<<" ";
            } else {
                cout<<value;
                value++;
            }
        }
        cout<<endl;
    }
    
}
