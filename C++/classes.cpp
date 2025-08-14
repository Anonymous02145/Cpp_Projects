#include <iostream>



class Human{
    public: //acess modifyer. public and private
        std::string name;
        int age;

        void details(){
            std::cout << name << "\n" << age << "\n";
        }

        void eat(){
            std::cout << "He is eating\n";
        }

        void drink(){
            std::cout << "He is drinking\n";
        }

};

int main(){
    Human human1;

    human1.age = 15;
    human1.name = "Aarush";

    human1.eat();
    human1.drink();
    human1.details();

    
    return 0;
}