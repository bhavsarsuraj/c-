
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
    for(int i = 1; i <= n; i++) {
        
        int j = 1;
        while(j <= n-i) {
            cout<<" ";
            j++;
        }
        
        int toBePrinted = i;
        
        while(j <= n) {
            cout<<toBePrinted--;
            j++;
        }
        
        toBePrinted = 2;
        j = 1;
        while (j <= i-1) {
            cout<<toBePrinted++;
            j++;
        }
        
        cout<<endl;
    }
    
    
    
}
