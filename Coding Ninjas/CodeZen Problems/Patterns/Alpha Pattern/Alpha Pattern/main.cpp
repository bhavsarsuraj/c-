//
//  main.cpp
//  Alpha Pattern
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    char toBePrinted = 65;
    
    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j <= i; j++) {
            
            cout<<toBePrinted;
            
        }
        toBePrinted++;

        cout<<endl;
    }
    
}
