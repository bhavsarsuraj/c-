
#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    
    int toBePrinted;
    
    for(int i = 1; i <= num; i++) {
        
        toBePrinted = i;
        
        for(int j = 1; j <= 2*num-1; j++) {
            
            
            if( j <= num - i) {
                cout<<" ";
            } else {
                if( j <= num ) {
                    cout<<toBePrinted;
                    
                    if(!(j == num)) {
                        toBePrinted++;
                    } else {
                        toBePrinted--;
                    }
                    
                } else if(j > num && toBePrinted >= i) {
                    cout<<toBePrinted;
                    toBePrinted--;
                    
                } else {
                    cout<<" ";
                }
            }
        }
        
        cout<<endl;
        
    }
    
    return 0;
}

