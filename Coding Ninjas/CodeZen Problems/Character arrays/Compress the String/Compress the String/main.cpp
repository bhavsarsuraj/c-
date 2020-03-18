//
//  main.cpp
//  Compress the String
//
//  Created by Suraj Bhavsar on 11/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void stringCompression(char input[]) {
    
    int k = 0;
    
    int i = 0;
    
    while(input[i] != '\0'){
        int count = 1;
        int temp = i+1;
        while(input[temp] == input[i]) {
            count++;
            temp++;
        }
        
        input[k] = input[i];
        k++;
        if(count > 1){
            input[k] = 48 + count;
            k++;
        }
        
        i = temp;
    }
    
    input[k] = '\0';
    
}


int main() {
    
    
    char temp[100];
    cin>>temp;
    cout<<temp[7]<<endl;
    stringCompression(temp);
    cout<<temp<<endl;
    
    
}
