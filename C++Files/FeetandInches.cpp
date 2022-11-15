#include <iostream>
#include <cmath>
#include <string>


class FeetandInches{
    public: 
       int input_feet;
       long double input_inches;
       
};


int main(){

    FeetandInches example1;

    std::cout << "Enter feet value: " << "\n";
    std::cin >> example1.input_feet;

    std::cout << "Enter inches value " << "\n";
    std::cin >> example1.input_inches;

    if (example1.input_inches >= 12){
        example1.input_feet ++;
        example1.input_inches = example1.input_inches-12;

        std::cout << "Total feet: " << example1.input_feet << "." << "Total inches: " << example1.input_inches << "\n";
    }

    else if (example1.input_inches < 12){
        std::cout << "Total feet: " << example1.input_feet << "." << " Total inches: " << example1.input_inches << "\n";
    }
}