//inheritance - when a class can revice attributes and method from the other class
//the class revicing is the child class
//the class that is giving the attributes and methods are called parent class

#include <iostream>

class Animal{
    public:
        bool alive = true;

        void eat(){
            std::cout << "The animal is eating";
        }
};

class Dog : public Animal{

};


int main(){

    Dog dog;

    std::cout << dog.alive << "\n";
    std::cout << "Its alive" <<  "\n";

    dog.eat();
    std::cout << "\n";

    return 0;

}