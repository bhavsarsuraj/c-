//
//  main.cpp
//  Highest Occuring Character
//
//  Created by Suraj Bhavsar on 12/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

char highestOccurringChar(char input[]) {
    int i = 0;
    int index;
    int result = 0;
    while(input[i] != '\0') {
        int count = 0;
        int j = i+1;
        while(input[j] != '\0') {
            if(input[j] == input[i]) {
                count++;
            }
            j++;
        }
        
        if(count > result) {
            result = count;
            index = i;
        }
        
        
        i++;
    }
}



int main() {
    
    
    
}
