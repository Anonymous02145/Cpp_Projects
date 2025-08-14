// consturctor overloading is when there are more than 1 constructor and they share the same name but different parameters
// if you have an object
#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    };

    Student(std::string y, int x){
        name = y;
        age = x;
    };

    Student(){};

};

int main(){

    Student student1("Aarush", 19, 9.9);
    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";
    return 0;

}