#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    int num;
    cout<<"Enter a number:\n";
    cin>>num;
    if (isPrime(num)) {
        cout<<"Number is prime";
    } else {
        cout<<"Not prime";
    }
    return 0;
    
}
