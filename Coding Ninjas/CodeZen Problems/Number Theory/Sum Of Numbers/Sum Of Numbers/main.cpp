#include <iostream>
using namespace std;
int main() {
    
    int n,m;
    cin>>n>>m;
    
    int nCount = n/5;
    int mCount = m / 5;
    int nRemainder = n % 5;
    int mRemainder = m % 5;
    
    int count = n * mCount;
    for(int i = 1; i <= mRemainder+1; i++) {
        if(nRemainder >= (5-i)) {
            count += nCount+1;
        }else {
            count += nCount;
        }
    }
    
    cout<<count;
}

