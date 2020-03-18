#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    
    int toBePrinted;
    
    for(int i = 0; i <= num; i++) {
        
        toBePrinted = i;
        
        for(int j = 1; j <= 2*num + 1; j++) {
            
            
            if( j <= num - i) {
                cout<<" ";
            } else if( j == num + 1) {
                toBePrinted = 1;
                cout<<"0";
            }   else {
                if( j <= num ) {
                    cout<<toBePrinted--;
                } else if(j > num && toBePrinted <= i) {
                    cout<<toBePrinted++;
                } else {
                    cout<<" ";
                }
            }
        }
        
        cout<<endl;
        
    }
    
    return 0;
}

