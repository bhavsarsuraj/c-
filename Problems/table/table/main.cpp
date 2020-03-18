//
//  main.cpp
//  table
//
//  Created by Suraj Bhavsar on 28/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    /*
j =  0 1 2 3 4
     *          i = 0
     * *        i = 1
     * * *      i = 2
     * * * *    i = 3
     * * * * *  i = 4
     */
    long long int num;
    cout<<"Enter a number:";
    cin>>num;
    long long int i = 0, j;
    while (i < num) {
        j = 0;
        while (j < num) {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
//    int num, a = 1, flag;
//    cout<<"Enter any number"<<endl;
//    cin>>num;
//    while(a <= 10) {
//        flag = num * a;
//        cout<<num <<" x "<<a<<" = "<<flag<<endl;
//        a++;
//    }
    return 0;
}
