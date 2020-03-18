//
//  main.cpp
//  Get Palindrome
//
//  Created by Suraj Bhavsar on 05/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;



int reversedNum(int n) {
    
    int reversedNum = 0;
    while(n > 0) {
        
        int remainder = n%10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    return reversedNum;
}

bool isPalindrome(int original, int reversed) {
    
    return original == reversed;
    
}

int main() {
    
    int n;
    cin>>n;
    
    for(int i = 1; i <= n; i++) {
        
        int num = reversedNum(i);
        bool result = isPalindrome(i, num);
        
        if(result)
            cout<<i<<endl;
        
        
    }
    
    
    return 0;
}
