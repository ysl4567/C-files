#include <iostream>
#include <cmath>
#include <string>



int main(){
    const int COUNTIES = 5;
    const int DISTRICTS = 4;

    int counties_and_districts[COUNTIES][DISTRICTS]; //total values = 5*4 = 20

    for (int c = 0 ; c<COUNTIES ; c = c + 1){
        for (int d = 0 ; d<DISTRICTS ; d = d + 1){
            std::cout << "Enter sales of counties " << c+1 << ", " << "district " << d+1 << ": ";
            std::cin >> counties_and_districts[c][d];
            }      
    }

//calling a value from a multidimensional array
    const int x_value = 4;
    const int y_value = 3;
    double x_y [x_value][y_value] = { {00 , 01, 02 }, {10,11,12}, {20,21,22}, {30,31,32}}; //4 sets, 3 values each
    int x;
    int y;
    std::cout << "Enter a x: ";
    std::cin >> x ;
    std::cout << "Enter a y: ";
    std::cin >> y;
    std::cout << x_y [x][y];

//passing arrays to functions


}