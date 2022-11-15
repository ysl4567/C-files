#include <iostream>
#include <cmath>
#include <random>
using namespace std;



class Circle{
    public: 
        const long double PI = 3.14159265;
        long double radius;
        long double area(long double radius){
            return (radius * radius * PI);
    }
};


enum Example {
    A = 5, B = 6, C = 7
};


class Playing_Cards{
    public: 
        enum Vals{
            ValsAce = 1, ValsTwo, Valshree, ValsFour, ValsFive, ValsSix, ValsSeven, ValsEight, ValsNine, ValsTen, ValsJack, ValsQueen, ValsKing
        };
};


// enum - a state values, give a name to a value
int main(){
    Circle example_1;
    Playing_Cards example_2;

    std::cout << "Please enter a radius value: ";
    std::cin >> example_1.radius;

    std::cout << "Your total area is: " << example_1.area(example_1.radius) << "\n";

    Example value = B;

    std::cout << B << "\n";

    int RandValue = rand();
    std::cout << RandValue << "\n";

    std::cout << example_2.ValsTwo << "\n";
    // std::cout << example_2.rand() << "\n";

}