//
//  main.cpp
//  Wave Print
//
//  Created by Suraj Bhavsar on 08/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int row, int col){
    
    int count = 1;
    for(int j = 0; j < col; j++) {
        if(count++ % 2 != 0) {
            for(int i = 0; i < row; i++) {
                cout<<input[i][j]<<" ";
            }
        } else {
            for(int i = row-1; i >= 0; i--) {
                cout<<input[i][j]<<" ";
            }
        }
    }
}




int main() {
    
    
    
}
