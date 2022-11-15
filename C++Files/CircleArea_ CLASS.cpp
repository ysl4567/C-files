#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Circle{ //define CLASS
   private:
     const long double PI = 3.14159265;
   public:
    long double radius_class_Circle; //class DATA
    long double area_class_Circle(long double radius){ //MEMBER FUNCTION
        return PI * radius * radius; 
    }
};

int main(){

    Circle example_1;  //define OBJECT called example_1. 
    //Object is called an instance of  a class

    std::cout << "Enter a radius value: " << "\n";
    std::cin >> example_1.radius_class_Circle; //CALL MEMBER FUNCTION

    std::cout << "The total area of the circle is: " << example_1.area_class_Circle(example_1.radius_class_Circle) << "\n";

    //std::cout << PI << "\n";


}