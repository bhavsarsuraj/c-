//
//  main.cpp
//  At Beginning
//
//  Created by Suraj Bhavsar on 29/07/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int rollNo;
    struct Student *link;
};
struct Student *tail;
struct Student *start;
int noOfNodes;
int position;
int tempVar;


//create linked lists
void create_list() {
    int noOfNodes;
    cout<<"Enter the no of Students Information you want to enter\n";
    cin>>noOfNodes;
    tempVar = noOfNodes;
    if (noOfNodes > 0) {
        struct Student *ptr, *temp;
        ptr = new Student;
        cout<<"\nEnter name, age and roll number of first Student\n";
        cin>>ptr->name>>ptr->age>>ptr->rollNo;
        start = ptr;
        tail = start;
        ptr->link = NULL;
        
        
        //creating more nodes
        
        while(noOfNodes > 1) {
            temp = new Student; //creating next new node
            cout<<"\nEnter the same for next Student\n";
            cin>>temp->name>>temp->age>>temp->rollNo;
            temp->link = NULL;
            ptr->link = temp;
            ptr = temp;
            tail = ptr;
            noOfNodes--;
            
        }
    }
    
    else {
        cout<<"\n Enter valid number of nodes\n";
        
    }
    
}

//display linked lists

void display() {
    struct Student *address;
    address = start;
    cout<<"\nThe information Of Students are as follows:\n";
    while (address != NULL) {
        cout<<"\nName: "<<address->name<<"\nAge: "<<address->age<<"\n"<<"Roll No.: "<<address->rollNo<<"\n";
        address = address->link;
    }
}


//Inserting nodes at various positions

void InsertBeg() {
    
    struct Student *ptr;
    ptr = new Student;
    cout<<"\nEnter the Name, Age and Roll No of Student\n";
    cin>>ptr->name>>ptr->age>>ptr->rollNo;
    ptr->link = start;
    start = ptr;
    
}

void InsertEnd() {
    
    struct Student *ptr;
    ptr = new Student;
    cout<<"\nEnter the Name, Age and Roll No of Student\n";
    cin>>ptr->name>>ptr->age>>ptr->rollNo;
    tail->link = ptr;
    ptr->link = NULL;

}


void InsertSpecific() {
    
    int position;
    
    struct Student *ptr, *temp;
    ptr = new Student;
    
    cout<<"\nEnter the position where you want to insert details\n";
    cin>>position;
    if(position <= tempVar) {
        
        cout<<"\nEnter the Name, Age and Roll No of Student\n";
        cin>>ptr->name>>ptr->age>>ptr->rollNo;
        
        temp = start;
        for(int i = 1; i < position; i++) {
            temp = temp->link;
        }
        
        ptr->link = temp->link;
        temp->link = ptr;
    }
    
    else {
        cout<<"\nEntered position doesn't exist.\n";
    }
}


//deleting nodes at various positions


//beginning node deletion
void delete_beg() {
    
    struct Student *ptr;
    ptr = start;
    start = ptr->link;
    
    cout<<"\nDeleted Student Information is:\n"<<"Name: "<<ptr->name<<"\nAge: "<<ptr->age<<"\nRoll No.: "<<ptr->rollNo<<endl;
    
    delete ptr;
    
    cout<<"\nAfter Deleting \n";
    display();
    
}


//last node deletion


void delete_last() {
    struct Student *ptr, *temp;
    ptr = start;
    temp = ptr;

    while(ptr->link != NULL) {
        temp  = ptr;
        ptr = ptr->link;
    }
    temp->link = NULL;

    cout<<"\nDeleted Student Information is:\n"<<"Name: "<<ptr->name<<"\nAge: "<<ptr->age<<"\nRoll No.: "<<ptr->rollNo<<endl;

    delete ptr;
    cout<<"\nAfter Deleting \n";
    display();

}

//delete specific node

void delete_specific() {
    struct Student *ptr, *temp;
    
    int deleteNode;
    ptr = start;
    temp = ptr;
    cout<<"\nEnter which Student details you want to delete\n";
    cin>>deleteNode;
    
    if(deleteNode < tempVar) {
    
    for(int i = 1; i <deleteNode; i++) {
        temp = ptr;
        ptr = ptr->link;
    }
        
    cout<<"\nDeleted Student Information is:\n"<<"Name: "<<ptr->name<<"\nAge: "<<ptr->age<<"\nRoll No.: "<<ptr->rollNo<<endl;
        
    temp->link = ptr->link;
        
    delete ptr;
        cout<<"\nAfter Deleting \n";
        display();
        
    }
    else {
        cout<<"Invalid position\n";
    }
}

int main()
{
    int choiceOfDelete;
    int deletingChoice;
    int choice;
    char userEnteredInput;
    create_list();
    display();
    cout<<"\nPress Y if you want to enter one more student details or Press any other key if you don't want to add other student details\n";
    cin>>userEnteredInput;
    if(userEnteredInput == 'Y') {
        cout<<"\nEnter your choice\n1. At Beginning\n2. At End\n3. At Specific Position\n";
        cin>>choice;
        switch (choice) {
            case 1:
                InsertBeg();
                display();
                break;
            case 2:
                InsertEnd();
                display();
                
                break;
            case 3:
                InsertSpecific();
                if (position < tempVar) {
                    display();
                }
                break;
            default:
                break;
        }
    }
    
    cout<<"\nPress 1 if you want to delete one student details or press any other key to exit\n ";
    cin>>deletingChoice;
    
    if(deletingChoice == 1) {
        cout<<"Choose the position of Student details you want to delete\n1. Beginning\n2. Ending\n3. Specific Position\n";
        cin>>choiceOfDelete;
        switch (choiceOfDelete) {
            case 1:
                delete_beg();
                break;
            case 2:
                delete_last();
                break;
            case 3:
                delete_specific();
            default:
                break;
        }
        
    }
    
    else {
        cout<<"\nThanks for using the Program\n";
    }
    return 0;
}
