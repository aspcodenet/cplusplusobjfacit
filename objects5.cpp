#include "objects5.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace objects5 {
    Person::Person(std::time_t birthDate)
    :birthDate(birthDate)
    {
        
    }

    void Person::setName(string firstName, string lastName){
        this->firstName = firstName;
        this->lastName = lastName;
    }
    void Person::changeAddress(string streetAddress, int postalCode, string city){
        this->streetAddress = streetAddress;
        this->postalCode = postalCode;
        this->city = city;
    }

    void Person::moveInWith(const Person &person){
        this->changeAddress(person.streetAddress,person.postalCode,person.city);
    }

}



void run_objects5(){
    struct tm day;
    day.tm_year = 1972 - 1900; /* years since 1900 */
    day.tm_mon = 8 - 1;
    day.tm_mday = 3;    
    objects5::Person person(mktime(&day));


    day.tm_year = 2008 - 1900; /* years since 1900 */
    day.tm_mon = 5 - 1;
    day.tm_mday = 28;    
    objects5::Person person2(mktime(&day));

    
    person.setName("Stefan", "Holmberg");    
    person.changeAddress("Testgatan 1", 11122, "Teststad");
    person2.setName("Oliver", "Holmberg");
    person2.moveInWith(person);

}
