//
//  main.cpp
//  Diamond Star
//
//  Created by Suraj Bhavsar on 05/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int i = 1;
    
    while(i <= n/2+1) {
        int j = 1;
        while(j <= n/2 + 1 - i) {
            cout<<" ";
            j++;
        }
        j = 1;
        while(j <= 2*i - 1 ) {
            cout<< j;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    i = 1;

    while( i <= n/2) {
        int j = 1;

        while (j <= i) {
            cout<<" ";
            j++;
        }
        j = 1;
        while( j <= 2 * (n/2-i) + 1) {
            cout<< j;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    
    
    
    return 0;
    
}
