//
//  main.cpp
//  Meghna Raswan
//
//  Create a class called Pet with all the necessary files (.h , .cpp, etc.) This class should have member variables name (string), age (int), type ([‘dog’, ‘cat’]) (string) and weight (double). Make sure to include the appropriate accessor (getters), mutator (setters). Once the Pet class has been implemented, create two instances of Pet and print their details to console output.


#include <iostream>
using namespace std;

#include "prob1PetDescription.h"

int main() {
    Pet myPet; //assigns the class to myPet
    Pet usrPet; //assigns the class to usrPet

    myPet.SetName("Bubbles"); //name is set to "Bubbles" for myPet
    myPet.SetAge(4); //age is set to 4 years old for myPet
    myPet.SetType("Guinea Pig"); //type is set to "Guinea Pig" for myPet
    myPet.SetWeight(2.3); //weight is set to 2.3 pounds for myPet
    
    usrPet.SetName("Paula Anka"); //name is set to "Paula Anka" for usrPet
    usrPet.SetAge(12); //age is set to 12 years old for usrPet
    usrPet.SetType("Polish Lowland Sheepdog"); //type is set to "Polish Lowland Sheepdog" for usrPet
    usrPet.SetWeight(16.8); //weight is set to 16.8 pounds for usrPet
    
    myPet.Print(); //calls the print function and prints the pet's description
    usrPet.Print(); //calls the print function and prints the pet's description

    return 0;
}
