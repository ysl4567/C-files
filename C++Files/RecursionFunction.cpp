#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Factorial Recursion Function
int factorial (int value){
    if (value ==1 || value ==0){
        return value;
    }

    else{
        int fac_value = value * factorial(value-1);
        return fac_value;
    }
}


void yourmom(){
    std::cout << "Hello World" << "\n";
}

int main(){
    int input_value;
    std::cout << "Enter a value: ";
    std::cin >> input_value;
    std::cout << factorial (input_value); //non void functions yes std::cout 
    std::cout << "\n";
    std::cout << factorial(5) << "\n";
    yourmom(); //void functions no std::cout 
}




