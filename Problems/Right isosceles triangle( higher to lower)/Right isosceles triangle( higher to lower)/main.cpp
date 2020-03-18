//
//  main.cpp
//  Right isosceles triangle( higher to lower)
//
//  Created by Suraj Bhavsar on 29/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

//
//  main.cpp
//  fibonacci series
//
//  Created by Suraj Bhavsar on 27/10/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    int chosenOption, arr[11], positionOfNumber, inputNum, numToBeSearched;
    bool isFound = false;
    int foundAtPosition = 11;
    char choice = 'y';
    
    do {
        cout<<"Enter any 10  integer:"<<endl;
        for( int i = 0; i < 10; i++) {
            cin>>arr[i];
        }
        
        cout<<"choose any operation:\n 1. Traversal\n 2. Insertion\n 3. Search"<<endl;
        cin>>chosenOption;
        
        switch (chosenOption) {
            case 1:
                cout<<"Enter a position: "<<endl;
                cin>>positionOfNumber;
                positionOfNumber--;
                cout<<"The number on position "<<positionOfNumber<<" is "<<arr[positionOfNumber]<<endl;
                break;
            case 2:
                cout<<"Enter an integer:"<<endl;
                cin>>inputNum;
                arr[10] = inputNum;
                cout<<"Array after insertion is:"<<endl;
                for(int i = 0; i<= 10; i++) {
                    cout<<arr[i]<<" ";
                }
                break;
            case 3:
                cout<<"Enter an integer to search:"<<endl;
                cin>>numToBeSearched;
                for ( int i = 0; i < 10; i++) {
                    if ( numToBeSearched == arr[i] ) {
                        foundAtPosition = i+1;
                        isFound = true;
                        break;
                    }
                }
                if (isFound) {
                    cout<<"The number "<<numToBeSearched<<" is on position "<<foundAtPosition;
                } else {
                    cout<<"Number not found";
                }
                break;
            default:
                cout<<"Invalid option selected";
                break;
        }
        cout<<"\nDo you want to perform again? (y/n)";
        cin>>choice;
    } while (choice != 'n');
    
    
    return 0;
}

