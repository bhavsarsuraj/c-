//
//  main.cpp
//  Report Card
//
//  Created by Suraj Bhavsar on 25/07/19.
//  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

class Subject {
public:
    string subjectName;
    int marks;
};

class Student {
public:
    int rollNo;
    string name;
    string fatherName;
    string className;
    string section;
    Subject subjects[5];
    float percentage;
//    char grade;
    
    Student(int rollNo, string name, string fatherName, string className, string section) {
        this->rollNo = rollNo;
        this->name = name;
        this->fatherName = fatherName;
        this->className = className;
        this->section = section;
    }
};

int main() {
    
    int noOfStudents;
    
    cout<<"Enter the number of students\n";
    cin>>noOfStudents;
    
    Student students[noOfStudents];
    
    cout<<"Enter student details: Roll No., Name, Father\'s Name, Class, Section and Marks of each subject\n";
    
    for (int i = 0; i < noOfStudents; i++) {
        Student student = new Student();
        cin>>student.rollNo>>student.name>>student.fatherName>>student.className>>student.section;
    
        float sum = 0;
        
        for (int j = 0; j < 5; j++) {
            cout<<"Enter subject name and Marks\n";
            cin>>student.subjects[j].subjectName>>student.subjects[j].marks;
            sum += student.subjects[j].marks;
        }
        
        student.percentage = sum / 5.0;
        
        students[i] = student;
    }
    
    for (int i = 0; i < noOfStudents; i++) {
        Student student = students[i];
        cout<<"Student: "<<student.rollNo<<"\t"<<student.name<<"\t"<<student.fatherName<<"\t"<<student.className<<"\t"<<student.section<<endl;
        for (int j = 0; j < 5; j++) {
            cout<<student.subjects[j].subjectName<<":\t"<<student.subjects[j].marks<<endl;
        }
        
        cout<<"Percentage: \t"<<student.percentage;
    }
    
    return 0;
    
}
