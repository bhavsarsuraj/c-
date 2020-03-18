//
//  main.cpp
//  Number X
//
//  Created by Suraj Bhavsar on 04/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i = 1; i <= 2*n-1; i++) {
        
        for(int j = 1; j <= 2*n-1; j++) {
            
            if(i <= n) {
                if(j == i || j == 2*n-i) {
                    cout<<i;
                } else {
                    cout<<" ";
                }
            } else {
                if(j == i || j == 2*n-i) {
                    cout<<2*n-i;
                } else {
                    cout<<" ";
                }
            }
            
            
            
        }
        cout<<endl;
    }
    
    
}
