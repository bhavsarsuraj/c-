//
//  main.cpp
//  Number Star Pattern
//
//  Created by Suraj Bhavsar on 15/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++) {
        
        int j = 1;
        while(j <= n - i) {
            cout<<j;
            j++;
        }
        while (j <= n) {
            cout<<"*";
            j++;
        }
        
        j = 1;
        while (j <= i) {
            cout<<"*";
            j++;
        }
        
        j = n-j+1;
        while (j >= 1) {
            cout<<j;
            j--;
        }
        
        
        cout<<endl;

        
    }
}
