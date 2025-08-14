//abstraction - hiding any unnessesory data outside the class
//getter - make private attribute readable 
//setter - make a private attribute writable

#include <iostream>

class Stove{

    private:

        double temp = 200.3;

    public:
    
        int gettemp(){
            return temp;
        }

        void set_temp(int temp){
            if(temp < 0){
                this -> temp = 0.0;
                std::cout << temp << "\n";
            }
            else if (temp > 2000) {
                this -> temp = 2000.0;
            
            }
            else {
                this -> temp = temp;
            }
        }
};

int main(){

    Stove stove;
    double temp = stove.gettemp();
    std::cout << temp;

    return 0;

}