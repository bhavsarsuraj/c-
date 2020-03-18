#include<iostream>
using namespace std;
int main() {
    int counter = 2, count = 4, num = 11,  sum ;
    bool isPrime = false;
    while( counter <= 100) {
        if( num % counter != 0 ){
            isPrime = true;
            break;
            sum = count + 1;
        }
    
        
        counter ++;
    }
    cout<<sum;
    return 0;
}
