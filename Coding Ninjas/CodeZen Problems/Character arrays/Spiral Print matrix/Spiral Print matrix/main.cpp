//
//  main.cpp
//  Spiral Print matrix
//
//  Created by Suraj Bhavsar on 12/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int row, int col){
    //    i -> iterator
    
    int i, startRowIndex = 0, startColIndex = 0;
    
    while (startRowIndex < row && startColIndex < col) {
       
//        traverse left to right
        
        for(i = startColIndex; i < col; i++) {
            cout<<input[startRowIndex][i]<<" ";
        }
        startRowIndex++;
        
        
//        traverse up to down
        for(i = startRowIndex; i < row ; i++) {
            cout<<input[i][col-1]<<" ";
        }
        col--;
        
//        traverse right to left
        
        for(i = col-1; i >= startColIndex; i--) {
            cout<<input[row-1][i]<<" ";
        }
        row--;
        
//        traverse down to up
        
        for(i = row-1; i >= startRowIndex; i--) {
            cout<<input[i][startColIndex]<<" ";
        }
        
        startColIndex++;
        
    }
    
    
}

