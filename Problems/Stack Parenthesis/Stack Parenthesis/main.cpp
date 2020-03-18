#include<iostream>
using namespace std;

void answer(char ch[] ) {
    int count1 = 0, count2 = 0, count3 = 0;
    for(int i = 0; ch[i] != '\0'; i++) {
        switch (ch[i]) {
            case '(':
                count1++;
                break;
            case ')':
                count1--;
                break;
            case '{':
                count2++;
                break;
            case '}':
                count2--;
                break;
            case '[':
                count3++;
                break;
            case ']':
                count3--;
                break;
                
                
            default:
                break;
        }
    }
    
    if(count1 == 0 && ( count2 == 0 && count3 == 0) ) {
        cout<<"Yes\n";
    } else {
        cout<<"No\n";
    }
    
}





int main() {
    
    char ch[50];
    cout<<"Enter string\n";
    cin>>ch;
    answer(ch);
    return 1;
}
