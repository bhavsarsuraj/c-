//
//  main.cpp
//  TCS
//
//  Created by Suraj Bhavsar on 03/08/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights g
#include <iostream>
#include<math.h>
#include <stdlib.h>
using namespace std;

int main() {
    string num;
    cin>>num;
    int output = 0, factor = 0;
    
    
    for (int i = num.size() - 1; i >= 0; i--) {
        if (num[i] == 'A') {
            output += 10 * (int)pow(17, factor);
        } else if (num[i] == 'B') {
            output += 11 * (int)pow(17, factor);
        } else if (num[i] == 'C') {
            output += 12 * (int)pow(17, factor);
        } else if (num[i] == 'D') {
            output += 13 * (int)pow(17, factor);
        } else if (num[i] == 'E') {
            output += 14 * (int)pow(17, factor);
        } else if (num[i] == 'F') {
            output += 15 * (int)pow(17, factor);
        } else if (num[i] == 'G') {
            output += 16 * (int)pow(17, factor);
        } else {
            output += ((int)num[i] - 48) * (int)pow(17, factor);
        }
        factor++;
    }
    cout<<output;
    
    return 0;
}
