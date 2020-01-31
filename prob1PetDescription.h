//
//  prob1PetDescription.h
//  Meghna Raswan
//

#ifndef prob1PetDescription_h
#define prob1PetDescription_h

class Pet { //constructing the Pet class
    public:
        void SetName(string petName); //sets the name of the pet as a string
        void SetAge(int petAge); //sets the age of the pet as an integer
        void SetType(string petType); //sets the pet type of the pet as a string
        void SetWeight(double petWeight); //sets the weight of the pet as a decimal
        void Print(); //prints the description of the pet
    private: //can be accessed only by the functions inside the class
        string name; //assigns name as a string
        int age; //assigns age as integer
        string type; //assigns type as string
        double weight; //assigns weight as decimal
};

#endif /* prob1PetDescription_h */

