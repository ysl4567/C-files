#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long double circle(long double radius){
    long double area = radius * radius * 3.14159265;
    std::cout << area << "\n";
}

void stars(){
    for (int i = 0; i < 10; i = i+1){
        std::cout << "*" << "\n";
    }
}

void plussigns(int n){
    for (int j = 0; j < n ; j = j + 1){
        std::cout << "+";
    }
}

long double lbstokg (long double lbs){
    std::cout <<"You weigh: " << lbs / 0.45 << "kgs";  
}



int main(){
    long double r;
    int n;
    long double lbs;
    std::cout << "Enter a radius value" << "\n";
    std::cin >> r;
    circle(r);
    stars();
    std::cout << "Enter how many '+' signs you would like to print" << "\n";
    std::cin >> n;
    plussigns(n);
    std::cout << "How many lbs you weigh?: ";
    std::cin >> lbs;
    lbstokg(lbs);

    
}

