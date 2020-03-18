//
//  main.cpp
//  Remove Character
//
//  Created by Suraj Bhavsar on 12/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    
    int i = 0, j = 0;
    
    while (j < strlen(input)) {
        if (input[i] == c) {
            j++;
        }
        input[i] = input[j];
        i++;
        j++;
    }
    input[i] = NULL;
}

int main() {
    
    char str[1000];
    cin.getline(str, 1000);
    
    char ch;
    cin >> ch;
    
    removeAllOccurrencesOfChar(str, ch);
    cout << str << endl;
    
    return 0;
}
