#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

struct node *start;

int main() {
    
    int noOfNodes;
    
    struct node *ptr, *temp, *prev = NULL, *next = NULL;
    ptr = new node;
    cin>>noOfNodes;
    cin>>ptr->data;
    
    ptr->link = NULL;
    
    start = ptr;
    
    for(int i = 0; i < noOfNodes - 1; i++)
    {
        temp = new node;
        cin>>temp->data;
        ptr->link = temp;
        temp->link = NULL;
        ptr = temp;
        
    }
    
    ptr = start;
    
    while( ptr != NULL) {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
        
    }
    
    start = prev;
    temp = start;
    
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}
