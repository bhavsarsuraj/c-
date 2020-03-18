//
//  main.cpp
//  Even or Odd
//
//  Created by Suraj Bhavsar on 19/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int integer;
    cout<<"Enter an integer:"<<endl;
    cin>>integer;
    if(integer % 2 == 0)
    {
        cout<<"You entered an even number"<<endl;
        
    }
    else{
        cout<< "You entered an odd number"<<endl;
        
    }
}
