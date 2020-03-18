#include<iostream>

using namespace std;


struct car {
    
    int price;
    char name[25];
    
    struct car *link;
    
};

struct car *start;

void create_List() {
    
    int noOfCars;
    struct car *ptr, *temp;
    cout<<"How many cars you want"<<endl;
    cin>>noOfCars;
    
    ptr = new car;
    cout<<"Enter the name and price of the car"<<endl;
    cin>>ptr->name>>ptr->price;
    
    start = ptr;
    ptr->link = NULL;
    
    while(noOfCars > 1) {
        
        temp = new car;
        cout<<"Enter name and price of next car"<<endl;
        cin>>temp->name>>temp->price;
        
        temp->link = NULL;
        ptr->link = temp;
        ptr = temp;
        noOfCars--;
    }
}



void display() {
    
    struct car *a;
    a = start;
    cout<<"Car Information are given below "<<endl;
    
    while(a != NULL) {
        
        cout<<"Car Name: "<<a->name<<"\nCar Price: "<<a->price<<endl;
        a = a->link;
        
    }
    
}


int main() {
    
    create_List();
    display();
    return 0;
    
}
