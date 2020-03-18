//
//  main.cpp
//  print Substrings
//
//  Created by Suraj Bhavsar on 07/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void printSubstrings(char str[]) {
    
    for(int i = 0; i < strlen(str); i++) {
        for(int j = i; j < strlen(str); j++) {
            for(int k = i; k <= j; k++) {
                cout<<str[k];
            }
            cout<<endl;
        }
    }
    
    
    
}


int main() {
    
    char str[4];
    cin>>str;
    printSubstrings(str);
    
    return 0;
    
    
}
