#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    
    int toBePrinted;
    for(int i = 0; i < n; i++) {
        
        toBePrinted = n-i;
        
        for(int j = 0; j < n; j++) {
            
            cout<<toBePrinted;
            toBePrinted++;
            
            if(toBePrinted > n ) {
                toBePrinted = n;
            }
            
        }
        
        cout<<endl;
        
        
    }
    
}


