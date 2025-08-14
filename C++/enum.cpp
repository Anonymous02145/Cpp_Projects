//enums - > user defined data type

#include <iostream>

enum Day{sunday = 0, monday = 1};

int main(){

    Day today = sunday;
    switch(today){
        case sunday : std::cout << "It is sunday";
                        break;
        case monday : std::cout << "It is monday";

    }
}