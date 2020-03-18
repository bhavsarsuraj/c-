//
//  main.cpp
//  Interesting Alphabets
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
        char toBePrinted = 64 + (n-i);
        for(int j = 0; j <= i; j++) {
            cout<<toBePrinted;
            toBePrinted++;
        }
        cout<<endl;
    }
    
}

