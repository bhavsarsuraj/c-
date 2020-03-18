//
//  main.cpp
//  Square Root of a number
//
//  Created by Suraj Bhavsar on 04/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
#include<math.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    bool isFirst = true;
    int count = 1;
    
    for(int i = 0; i < n; i++) {
        
        if(!isFirst)
            count += 2;
        
        if(i == 0) {
            isFirst = false;
        }
        
        for(int j = 0; j < count; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
}
