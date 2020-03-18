//
//  main.cpp
//  duplicate numbers in an array
//
//  Created by Suraj Bhavsar on 01/11/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int userEnteredInteger ;
    bool isRepeated = false;
    
    cout<<"Enter the no of integers you want to enter:"<<endl;
    cin>>userEnteredInteger;
    
    int arr[userEnteredInteger], repeatedNumber = 0, count = 0;
    
    cout<<"Enter the numbers:"<<endl;
    
    for( int i = 0; i < userEnteredInteger; i++ ) {
        cin>>arr[i];
    }
    
    for(int j = 0; j < userEnteredInteger; j++ ) {
        
        for (int i = j + 1; i < userEnteredInteger; i++) {
            if (arr[j] == arr[i]){
                isRepeated = true;
                repeatedNumber = arr[j];
                count++;
            }
        }
        
        if( isRepeated == true) {
            break;
        }
    }
    
    if (isRepeated) {
        cout<<"The number "<<repeatedNumber<<" is repeated "<<count<<" times "<<endl;
    } else {
        cout<<"No number is repeated"<<endl;
    }
    
    return 0;
}
