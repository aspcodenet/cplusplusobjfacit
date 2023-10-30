#include <iostream>
#include <vector>
#include <string>
#include "struct1.h"
#include "objects3.h"

using namespace std;

class Car
{
public:    
    std::string regno;
    std::string model;
    std::string manufacturer;
    int year;
    std::string color;
};

void printMenu(){
    std::cout << "1. Create car\n";
    std::cout << "2. Change car\n";
    std::cout << "3. List all\n";
    std::cout << "4. Exit\n";
}

int getSelection(std::string prompt, int min, int max){
    while(true){
        int selection;
        std::cout << prompt;
        std::cin >> selection;
        if(selection >= min && selection <= max){
            return selection;
        }
        std::cout << endl;
    }
}

Car createCar(){
    Car car;
    cout << "Regno:"    ;
    cin >> car.regno;
    cout << "Manufacturer:"    ;
    cin >> car.manufacturer;
    cout << "Model:"    ;
    cin >> car.model;
    cout << "Year:"    ;
    cin >> car.year;
    cout << "Color:"    ;
    cin >> car.color;
    return car;
}

void listAll(const vector<Car> &cars){
    for(const Car &c : cars) {
        cout << c.regno << endl << "***************" << endl;
        cout << c.manufacturer << " " << c.model << " " << c.year << " " << endl;
    }
}

void editCar(vector<Car> &cars){
    int num = 1;
    for(Car &c : cars) {
        cout << num++ << ":" <<  c.regno << endl << "***************" << endl;
        cout << c.manufacturer << " " << c.model << " " << c.year << " " << c.color << endl;
    }
    int index = getSelection("Enter car:", 1,num);
    cout << "New color:";
    cin >> cars[index-1].color ;
}


int main(){
    //run_struct1();
    run_objects3();

    bool shouldExit = false;
    vector<Car> cars;
    while(!shouldExit){
        printMenu();
        int selection = getSelection("Enter choice:",1,4);
        switch(selection){
            case 1:
                cars.push_back(createCar());
                break;
            case 2:
                editCar(cars);
                break;

            case 3:
                listAll(cars);
                break;
            case 4:
                shouldExit = true;
                break;
        }
    }

    return 0;
}