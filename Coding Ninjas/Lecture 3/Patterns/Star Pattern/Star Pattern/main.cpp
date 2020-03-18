//
//  main.cpp
//  Pattern4
//
//  Created by Suraj Bhavsar on 02/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    
    for(int i = 0; i < num; i++) {
        
        for(int j = 1; j < 2*num; j++) {
            
            if( j < num - i) {
                cout<<" ";
            } else {
                if( j <= num + i) {
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            }
            
        }
        
        cout<<endl;
        
    }

    return 0;
}
