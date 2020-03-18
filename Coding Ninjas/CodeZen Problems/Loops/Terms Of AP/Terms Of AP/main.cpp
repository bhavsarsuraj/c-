//
//  main.cpp
//  Terms Of AP
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i = 1; i <= n; i++) {
        
        int term;
        term = 3*i + 2;
        if(term % 4 != 0) {
            cout<<term<<" ";
        } else {
            n++;
        }
        
    }
    
    
}
