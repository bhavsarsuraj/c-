//
//  main.cpp
//  vowel or consonant
//
//  Created by Suraj Bhavsar on 19/09/18.
//  Copyright © 2018 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    char inputCharacter , isUppercaseVowel , isLowercaseVowel;
    cout<<"Enter a character:"<<endl;
    cin>> inputCharacter;
    isUppercaseVowel = (inputCharacter == 'A' || inputCharacter == 'E' || inputCharacter == 'I' || inputCharacter == 'O' || inputCharacter == 'U');
    isLowercaseVowel = (inputCharacter == 'a' || inputCharacter == 'e' || inputCharacter == 'i' || inputCharacter == 'o' || inputCharacter == 'u');
    if (isUppercaseVowel || isLowercaseVowel)
    {
        
     cout<<"You entered a vowel"<<endl;
    }
    else {
        cout<<"You entered a consonant"<<endl;
        
    }
    return 0;
    
}
