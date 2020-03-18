//
//  main.cpp
//  Create Linked List
//
//  Created by Suraj Bhavsar on 29/07/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//



//Creating Linked Lists of Students
#include <iostream>
using namespace std;

struct Student {
    std::string name;
    int age;
    int rollNo;
    struct Student *link;
};

struct Student *start;

void create_list() {
    int noOfNodes;
    std::cout<<"Enter the no of elements you want to enter\n";
    std::cin>>noOfNodes;
    
    if (noOfNodes > 0) {
        struct Student *ptr, *temp;
        ptr = new Student;
        std::cout<<"Enter name, age and roll number of first Student\n";
        std::cin>>ptr->name>>ptr->age>>ptr->rollNo;
        start = ptr;
        ptr->link = NULL;
        
        
        //creating more nodes
        
        while(noOfNodes > 1) {
            temp = new Student; //creating next new node
            std::cout<<"Enter the same for next Student\n";
            std::cin>>temp->name>>temp->age>>temp->rollNo;
            temp->link = NULL;
            ptr->link = temp;
            ptr = temp;
            noOfNodes--;
            
        }
    }
    
    else {
        cout<<"\n Enter valid number of nodes\n";
        
    }
    
}


void display() {
    struct Student *address;
    address = start;
    cout<<"The information Of Students are as follows:\n";
    while (address != NULL) {
        cout<<"\nName: "<<address->name<<"\nAge: "<<address->age<<"\n"<<"Roll No.: "<<address->rollNo<<"\n";
        address = address->link;
    }
}

int main() {
    create_list();
    display();
    return 0;
}










