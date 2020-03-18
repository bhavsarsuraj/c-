//
//  main.cpp
//  Search in LinkedLists
//
//  Created by Suraj Bhavsar on 07/08/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

struct Student {
    string name;
    struct Student *link;
};

struct Student *start;
int tempVar;

void create_list() {
        struct Student *ptr, *temp;
        ptr = new Student;
        cout<<"\nEnter name of first Student\n";
        cin>>ptr->name;
        start = ptr;
        ptr->link = NULL;
    
    int noOfNodes = 10;
        //creating more nodes
        cout<<"\nEnter the name of  Students\n";
        while(noOfNodes > 0) {
            temp = new Student; //creating next new node
            cin>>temp->name;
            temp->link = NULL;
            ptr->link = temp;
            ptr = temp;
            noOfNodes--;
        }
}

void searchNode() {
    
    bool isFound = false;
    string nameToBeSearched;
    cout<<"Enter the name of Student you want to search\n";
    cin>>nameToBeSearched;
    
    Student *ptr;
    ptr = start;
    
    int count = 0;
    
    while(count < 10) {
        if(ptr->name == nameToBeSearched) {
            isFound = true;
            break;
        }
        else
            ptr = ptr->link;
        
        count++;
    }

    if(isFound) {
        cout<<"Search Successful and index is "<<count<<endl;
    }
    else{
        cout<<"Not Found\n";
    }
    
}

int main() {
    create_list();
    searchNode();
    return 0;
}
