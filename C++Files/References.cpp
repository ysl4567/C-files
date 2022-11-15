#include <iostream>
#include <cmath>
#include <string>

//function example of references
void increment (int& value){
    value = value + 1;
    std::cout << value << "\n";
}



int main(){
    int a =5;
    increment (a);   


// flip b and c values
    int b= 3;
    int c= 2;
    std::cout << b << c << "\n";

    int temp = b;
    b = c;
    c = temp;

    std::cout << b << c<< "\n"; 
}


