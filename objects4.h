#ifndef __OBJECT4_H
#define __OBJECT4_H

namespace objects4{


    class Student {
    private:
        string firstName;
        string lastName;
        string school;
    public:
        Student(string firstName,string lastName, string school);
        void setSchool(string school);
        string getSchool();
        string getFirstName();
        string getLastName();
    };    

}

void run_objects4();


#endif // __OBJECT4_H
