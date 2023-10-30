#include "objects3.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

typedef enum {
    DishType_None,
    DishType_Vegetarian,
    DishType_Vegan,
    DishType_Meat
}DishType;

class Dish{
    public:
        std::string name;
        float price;
        DishType type;
        int nrOfCalories;
        
        Dish(string name, float price, DishType type, int nrOfCalories)
            :name(name) ,price(price),type(type),nrOfCalories(nrOfCalories)
        {

        }
};
void run_objects3(){
    vector<Dish> lunchmenu;

    lunchmenu.push_back(Dish("Pannkakor",30,DishType_Vegetarian,100));
    lunchmenu.push_back(Dish("Hamburgare",50,DishType_Meat,100));
    lunchmenu.push_back(Dish("Kebab",60,DishType_Meat,100));
    for(auto &d : lunchmenu){
        cout << d.name << " " << d.price << endl;
    }
}