//
//  main.cpp
//  Arrow Pattern
//
//  Created by Suraj Bhavsar on 04/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int spaces;
    for(int i = 0; i < n; i++) {
        
        if(i < n/2 + 1) {
            spaces  = i;
            for(int j = 0; j < spaces; j++) {
                cout<<"  ";
            }
            for(int k = 0; k <= i; k++) {
                cout<<"* ";
            }
            cout<<endl;
        } else {
            spaces  = n-i-1;
            for(int j = 0; j < spaces; j++) {
                cout<<"  ";
            }
            for(int k = 0; k < n-i; k++) {
                cout<<"* ";
            }
            
            cout<<endl;
        }
    }
    
    return 0;
}
