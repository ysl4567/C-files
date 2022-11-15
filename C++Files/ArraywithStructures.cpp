//Array with Structures - REVIEW
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const int SIZE = 4;
//struct chapter 4
struct WholeFoods{
    string meat_type_number;
    long double price_lbs;
} myWholeFoods;

int main(){

    WholeFoods Meats[SIZE];

    for (int n = 0 ; n< SIZE ; n++){
        std::cout << "Enter meat type number: " << "\n";
        std::cin >> Meats[n].meat_type_number;
        std::cout << "Enter price lbs: " << "\n";
        std::cin >> Meats[n].price_lbs;
    }

    for (int n =0 ; n <SIZE ; n++){
        std::cout << "Meat type: " << Meats[n].meat_type_number << " Enter price lbs: " << Meats[n].price_lbs << "\n";
    }
    
}