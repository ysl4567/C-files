#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
//add to each value in array
    int one_thru_twelve[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    std::cout << one_thru_twelve[5] << "\n"; //6

    for (int j=0; j < 12; j++){
        std::cout << one_thru_twelve[j] + 3 << "\n";
    }
// month day differences - REVIEW
    int month, day, total_days, days_difference;
    int days_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    std::cout << "Enter month (integer value): ";
    std::cin >> month;

    std::cout << "Enter day (integer value): ";
    std::cin >> day;
    for (int i = 0; i < month-1; i++){
        days_difference = days_per_month[month-1] - day;
    }
    std::cout << "Days Difference: " << days_difference << "\n";


    
}