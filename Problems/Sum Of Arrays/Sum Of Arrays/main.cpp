//
//  main.cpp
//  Sum Of Arrays
//
//  Created by Suraj Bhavsar on 27/07/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void printHelloTenTimes() {
    static int n = 10;
    cout<<n<<endl;
    if (n > 0) {
        cout<<"Hello\n";
        n--;
        return printHelloTenTimes();
    } else {
        return ;
    }
}

int main() {
//    int n = 6;
//    cout<<factorial(n);
    printHelloTenTimes();
    return 0;
}
