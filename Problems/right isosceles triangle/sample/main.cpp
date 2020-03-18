//
//  main.cpp
//  sample
//
//  Created by Suraj Bhavsar on 26/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int userEnteredNum;
    cout<<"Enter any number:"<<endl;
    cin>>userEnteredNum;
    for(int i = userEnteredNum; i > 0; i-- ) {
        for( int j = 0; j < i ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
