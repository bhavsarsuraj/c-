#include <iostream>
using namespace std;

void gridAppearance(int n,int k)
{
    
    int i = 1;
    int count = 0;
    
    while(i <= n) {
        if((k % i == 0) && (i*n >= k)){
            count++;
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
    cout<<count<<endl;
}


int main() {
    
    gridAppearance(100000, 10000);
    return 0;
    
}
