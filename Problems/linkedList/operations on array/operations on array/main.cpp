#include<iostream>
using namespace std;

int top = -1;
int arr[10];
int noOfElements = 10;



int maxSize = 10;

void push() {
    if(top == noOfElements-1) {
        cout<<"Stack Overflow\n";
        return;
    }
    cout<<"Enter element\n";
    top++;
    cin>>arr[top];
}

void pop() {
    if(top == -1) {
        cout<<"Stack Underflow\n";
        return;
    }
    cout<<"Deleted element is " << arr[top]<<"\n";
    top--;
}

void traverse() {
    if(top == -1) {
        cout<<"Stack is Empty\n";
        return;
    }
    
    cout<<"Elements of stack are\n";
    
    for(int i = top; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void topElement() {
    if(top == -1) {
        cout<<"Stack is empty\n";
        return;
    }
    cout<<"Top element of stack is "<<arr[top]<<"\n";
}

void stackSize() {
    if(top == -1) {
        cout<<"Stack is empty\n";
        return;
    }
    
    cout<<"Size of stack is "<<top+1<<"\n";
}

int main()
{
    
    int inputChoice;
    char inputChar;
    
    do {
        cout<<"Enter your choice\n1. Push\n2. Pop\n3. Traverse\n4. Top Element\n5. Stack Size\n";
        cin>>inputChoice;
        if(inputChoice < 1 || inputChoice > 5) {
            cout<<"Enter correct choice\n";
            return 0;
            
        }
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
                stackSize();
                break;
            default:
                break;
        }
        cout<<"Press Y to continue or any other key to exit"<<endl;
        cin>>inputChar;
    } while (inputChar == 'Y' || inputChar =='y');
    
    
    
    return 1;
}
