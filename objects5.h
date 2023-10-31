#ifndef __OBJECT4_H
#define __OBJECT4_H
#include <string>
#include <chrono>
#include <ctime>
using namespace std;
namespace objects5{


    class Person {
    private:
        std::time_t birthDate;
        string firstName;
        string lastName;
        string streetAddress;
        int postalCode;
        string city;

    public:
        Person(std::time_t birthDate);
        void setName(string firstName, string lastName);
        void changeAddress(string streetAddress, int postalCode, string city);
        void moveInWith(const Person &person);

    };    

}

void run_objects5();


#endif // __OBJECT4_H
