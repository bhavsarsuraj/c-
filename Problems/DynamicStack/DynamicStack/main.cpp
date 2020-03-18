#include <iostream>
using namespace std;

struct Stack {
    int data;
    struct Stack *link;
};

struct Stack *ptr = NULL;
struct Stack *temp;
int sizeOfStack = 0;

void push() {
    
    char ch = 'Y';
    while(ch == 'Y' || ch == 'y' ) {
        if(ptr == NULL) {
            ptr = new Stack;
            cout<<"Enter a number\n";
            cin>>ptr->data;
            ptr->link = NULL;
        } else  {
            temp = new Stack;
            cout<<"Enter a number\n";
            cin>>temp->data;
            temp->link = ptr;
            ptr = temp;
        }
        sizeOfStack++;
        
        cout<<"Press Y is you want to add more data else press any other key to exit\n";
        cin>>ch;
    }
    
    
}

void pop() {
    char ch = 'Y';
    while (ch == 'Y' || ch == 'y') {
        if(ptr == NULL) {
            cout<<"Empty stack\n";
            return;
        }
        cout<<"Removed number is "<<ptr->data<<endl;
        ptr= ptr->link;
        delete temp;
        temp = ptr;
        sizeOfStack--;
        cout<<"Press Y if you want to delete one more data or press any other key to exit\n";
        cin>>ch;
    }
    
}

void traverse() {
    if(ptr == NULL) {
        cout<<"Stack is Empty\n";
        return;
    }
    struct Stack *travNode;
    travNode = ptr;
    cout<<"Elements of stack are: ";
    while (travNode != NULL) {
        cout<<travNode->data<<" ";
        travNode = travNode->link;
    }
    cout<<endl;
    
}

void topElement() {
    if(ptr == NULL) {
        cout<<"Stack is Empty\n";
        return;
    }
    cout<<"Top Element of Stack is: "<<ptr->data<<endl;
}

void stack_size() {
    if(ptr == NULL) {
        cout<<"Stack is Empty\n";
        return;
    }
    
    cout<<"Size of Stack is: " <<sizeOfStack<<endl;
    
    
}

int main() {
    int inputChoice;
    int choice  = 1;
    while (choice == 1)  {
        cout<<"Choose any one operation on Stack\n1. Push\n2. Pop\n3. Traverse\n4. Top Element\n5. Size of Stack\n";
        cin>>inputChoice;
        
        if(inputChoice > 0 && inputChoice <= 5) {
            switch (inputChoice) {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    traverse();
                    break;
                case 4:
                    topElement();
                    break;
                case 5:
                    stack_size();
                    break;
                    
                default:
                    break;
            }
        } else {
            cout<<"Choose a valid operation\n";
        }
        cout<<"Press 1 if you want to continue performing operations on stack or press any other key to exit\n";
        cin>>choice;
    }
    
    
    return 1;
}
