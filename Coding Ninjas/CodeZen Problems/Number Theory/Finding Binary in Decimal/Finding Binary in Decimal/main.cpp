#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int countOfNumbers(int n)
{
    
    string num = to_string(n);
    int length = num.size();
    
    
    
    int count = pow(2, length-1);
    for(int i = pow(10, length) + 1; i <= n; i++) {
        bool isBinary = true;
        while(i > 0) {
            if(i % 2 == 0){
                isBinary = false;
                break;
            }
        }
        if(isBinary)
            count++;
    }
    return count;
}

int main() {
    
    int count = countOfNumbers(100);
    cout<<count;
    return 0;
}
