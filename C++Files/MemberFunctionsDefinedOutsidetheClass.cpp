#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class RectangleArea{
    public:
       long double x;
       long double y;

       long double Area(long double x, long double y);
};

long double RectangleArea::Area(long double x, long double y) //member function defined outside the class
    {
        return (x*y);
    }


int main(){

    RectangleArea example1;

    std::cout << "Enter width value";
    std::cin >> example1.x;

    std::cout << "Enter length value";
    std::cin >> example1.y;

    std::cout << example1.Area(example1.x, example1.y);

}