#include <iostream>
using namespace std;

//general array c++
int main(){

    int number[4]; //set up array of 4 integers

    for (int i = 0 ; i < 4 ; i = i + 1){
        std::cout << "Enter a value: ";
        std::cin >> number[i];
    }

    for (int i = 0 ; i<4; i++){
        std::cout << "Your values: " << number[i] << "\n";
    }


//average of array elements

    long double numbers[3];

    for (int j = 0; j<3; j++){
        std::cout << "Enter a value: ";
        std::cin >> numbers[j];
    }
    long double sum = 0;
    for (int j =0; j<3; j++){
        sum = sum + numbers[j];
    }

    long double average = sum / 3;
    std::cout << average << "\n";

//average of array elements

    int all_values[2];

    for (int i=0;i<2;i++){
        std::cout << "Enter an integer value: " << "\n";
        std::cin >> all_values[i];
    }
    long double total_sum = 0;
    for (int i=0;i<2;i++){
        
        total_sum = total_sum + all_values[i];
        
    }
    long double average_2 = total_sum / 2;
    std::cout << "Average of the two values is: " << average_2 << "\n";
}





