#include "objects4.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace objects4{

    Student::Student(string firstName,string lastName, string school)
    :firstName(firstName), lastName(lastName),school(school)
    {

    }

    void Student::setSchool(string school){
        this->school = school;
    }
    string Student::getSchool(){
        return school;
    }
    string Student::getFirstName(){
        return firstName;
    }
    string Student::getLastName(){
        return lastName;
    }
}


void run_objects4(){
    objects4::Student student1("Stefan", "Holmberg", "Testskolan");
    objects4::Student student2("Oliver", "Holmberg", "Hejskolan");

    cout << student1.getFirstName() << " " <<  student1.getLastName () << endl;
    cout << student2.getFirstName() << " " <<  student2.getLastName () << endl;
}
