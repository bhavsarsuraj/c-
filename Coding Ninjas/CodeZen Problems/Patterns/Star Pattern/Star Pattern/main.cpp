#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    
    for(int i = 0; i < num; i++) {
        
        for(int j = 1; j < 2*num; j++) {
            
            if( j < num- i) {
                cout<<" ";
            } else {
                if( j <= num + i) {
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            }
            
        }
        
        cout<<endl;
        
    }
    
    return 0;
}
