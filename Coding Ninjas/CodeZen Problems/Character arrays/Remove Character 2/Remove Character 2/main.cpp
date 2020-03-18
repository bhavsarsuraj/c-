//
//  main.cpp
//  Remove Character 2
//
//  Created by Suraj Bhavsar on 12/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
#include<cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    int i = 0, j = 0;
    
    while(input[j] != '\0') {
        
        while(input[j] == c) {
            j++;
        }
        
        if(input[j] == '\0') {
            input[i] = '\0';
            break;
        } else {
            input[i] = input[j];
        }
        j++;
        i++;
        
    }
    
    input[i] = '\0';
    
    
}

int main() {
    
    char x;
    char input[100];
    cin.getline(input, 100);
    cin>>x;
    
    
    removeAllOccurrencesOfChar(input, x);
    cout<<input<<endl;
    
}


