#include <iostream>
#include <cmath>
#include <random>

using namespace std;


int main(){

    
    //pointers
    int number_1 = 8;
    int* number_2 = &number_1; //memory value - pointers
    int& number_3 = number_1; //reference number_3 variable is an alias
    std::cout << number_2 << "\n";
    std::cout << number_3 << "\n";


    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    //a pointer is an integer that stores a memory address
    
}
