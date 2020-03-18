//
//  main.cpp
//  Character arrays
//
//  Created by Suraj Bhavsar on 07/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    char name[10];
    char name2[20];

    cin.getline(name, 10);
    cin.getline(name2, 20);
    
    if(strcmp(name, name2) == 0) {
        cout<<"Same\n";
    } else {
        cout<<"Not Same\n";
    }
    
    
    strncpy(name, "Arbaz khan", 15);
    cout<<name<<endl;
    
    return 0;
}
