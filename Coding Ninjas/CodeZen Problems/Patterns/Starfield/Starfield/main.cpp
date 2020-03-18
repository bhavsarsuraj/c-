//
//  main.cpp
//  Starfield
//
//  Created by Suraj Bhavsar on 10/02/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    for(int i = 1; i <= n ; i++) {
        
        if(i % 2 != 0) {
            int j = 1;
            while (j <= i) {
                cout<<"* ";
                j += 2;
            }
            while ( j <= 2*n-1-i) {
                cout<<" ";
                j++;
            }
            while (j <= 2*n-1) {
                cout<<"* ";
                j += 2;
            }
        } else {
            int j = 1;
            while(j <= i) {
                cout<<" *";
                j += 2;
            }
            while (j <= 2*n-i-2) {
                cout<<" ";
                j++;
            }
            while (j <= 2*n-2) {
                cout<<" *";
                j += 2;
            }
        }
        
        cout<<endl;
        
    }
    
    for(int i = n+1; i <= 2*n-1 ; i++) {
        
        if(i % 2 != 0) {
            int j = 2*n- 1;
            while (j >= i) {
                cout<<"* ";
                j -= 2;
            }
            j = 1;
            int k = i - (n+1);
            while ( j <= 2*k) {
                cout<<" ";
                j++;
            }
            j = 1;
            while (j <= 2*n-i) {
                cout<<"* ";
                j += 2;
            }
        }
         else {
            int j = 2*n-1;
            while(j >= i) {
                cout<<" *";
                j -= 2;
            }
            j = 1;
            int k = i - (n+1);
            while (j <= 2*k) {
                cout<<" ";
                j++;
            }
            j = 1;
            while (j <= 2*n-1-i) {
                cout<<" *";
                j += 2;
            }
        }
    
        cout<<endl;
        
    }
    
    
    return 0;
    
}
