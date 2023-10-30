#include "struct1.h"
#include <string>
#include <iostream>
using namespace std;

struct Student {
    string FirstName;
    string LastName;
    int BirthYear;
    string City;
};

void InputStudent(Student *student){
    cout << "First Name:";
    cin >> student->FirstName;
    cout << "Last Name:";
    cin >> student->LastName;
    cout << "City:";
    cin >> student->City;
    cout << "Birthyear:";
    cin >> student->BirthYear;
}

void PrintStudent(const Student *student){
    cout << student->FirstName << " ";
    cout << student->LastName << " ";
    cout << student->City << " ";
    cout << student->BirthYear << " ";
    cout << endl;
}


void InputStudent(Student &student){
    cout << "First Name:";
    cin >> student.FirstName;
    cout << "Last Name:";
    cin >> student.LastName;
    cout << "City:";
    cin >> student.City;
    cout << "Birthyear:";
    cin >> student.BirthYear;
}



void PrintStudent(const Student &student){
    cout << student.FirstName << " ";
    cout << student.LastName << " ";
    cout << student.City << " ";
    cout << student.BirthYear << " ";
    cout << endl;
}



void run_struct1(){
    Student student1;
    Student student2;

    // InputStudent(&student1);
    // InputStudent(&student2);

    InputStudent(student1);
    InputStudent(student2);
    PrintStudent(student1);
    PrintStudent(student2);

 }


 void run_struct2(){
    Student students[10];
    int count = 0;
    for(int i = 0; i < 10;i++){
        count++;
        cout << "Input student #" << i << endl;
        InputStudent(students[i]);
        cout << "More? 1 - Exit  0";
        int next;
        cin >> next;
        if(next == 0)
            break;
        
    }
    Student &oldest = students[0];
    for(int i = 0; i < count; i++){
        if(students[i].BirthYear < oldest.BirthYear){
            oldest = students[i];
        }
    }
    cout << "Oldest is " << oldest.FirstName << endl;
 }