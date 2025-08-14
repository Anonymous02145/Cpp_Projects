//constructors are default functions that execute automatically when called. it has the same name as the class


#include <iostream>


class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){ //when parameter names are diffeent from the attribute names the "this" keyword is not needed
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    
    }

};

int main(){
    

    Student student1("Aarush", 19, 9.9);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    return 0;

}