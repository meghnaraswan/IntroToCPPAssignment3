//
//  prob1PetDescription.cpp
//  Meghna Raswan
//

#include <iostream>
using namespace std;

#include "prob1PetDescription.h"

void Pet::SetName(string petName) { //function sets petName to name
    name = petName;
}

void Pet::SetAge(int petAge) { //function sets petAge to age
    age = petAge;
}

void Pet::SetType(string petType) { //function sets petType to type
    type = petType;
}

void Pet::SetWeight(double petWeight) { //function sets petWeight to weight
    weight = petWeight;
}

void Pet::Print() { //print function prints name, age, type, and weight of pet
    cout << "Pet's name: " << name << endl;
    cout << "Pet's age: " << age << endl;
    cout << "Pet's type: " << type << endl;
    cout << "Pet's weight (lbs): " << weight << endl;
}
