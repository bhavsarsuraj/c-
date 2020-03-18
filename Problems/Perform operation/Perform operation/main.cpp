//
//  main.cpp
//  Perform operation
//
//  Created by Suraj Bhavsar on 13/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    
    int option;
    float num1, num2;
    char userEnteredCharacter = 'y';        //Initialization of counter variable
    
    while (userEnteredCharacter == 'y') {   //For first time 'y' == 'y' .i.e true
      cout<<"Choose the operation you want to perform:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit"<<endl;
        cin>>option;
        if (option == 1) {
            cout<<"Enter two numbers to add:"<<endl;
            cin>>num1>>num2;
            cout<<"The Addition of " <<num1 <<" and" <<num2 <<" is " <<num1+num2<<endl;
        } else if (option == 2) {
            cout<<"Enter two numbers to subtract:";
            cin>>num1>>num2;
            cout<<"The Subtraction of " <<num1<< " and"<< num2  <<" is "  <<num1-num2 <<endl;
        } else if (option == 3) {
            cout<<"Enter two numbers to multiply:";
            cin>>num1>>num2;
            cout<<"The Multiplication of " <<num1  <<" and "  <<num2  <<" is "  <<num1*num2<<endl;
        } else if (option == 4) {
            cout<<"Enter two numbers to divide:";
            cin>>num1>>num2;
            cout<<"The Division of " <<num1 <<" and " <<num2  <<" is "  <<num1/num2<<endl;
        } else if (option == 5) {
            return 1;
        }
        else{
            cout<<"Please enter a valid number"<<endl;
            
        }
        cout<<"To continue again press 'y' or press 'n' to quit."<<endl;
        cin>>userEnteredCharacter;
    }
        
    return 0;
        
}
