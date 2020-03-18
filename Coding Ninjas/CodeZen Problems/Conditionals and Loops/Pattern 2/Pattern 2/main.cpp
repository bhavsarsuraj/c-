//
//  main.cpp
//  Pattern 2
//
//  Created by Suraj Bhavsar on 03/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    int  n;
    cin>>n;
    
    if(n == 0){
        return 0;
    }
    cout<<"1\n";
    for(int i = 1; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                cout<<i;
            } else {
                cout<<"0";
            }
        }
        cout<<endl;
    }
    
}
