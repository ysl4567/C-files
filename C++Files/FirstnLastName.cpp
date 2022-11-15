#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name;
    string last_name;
    std::cout << "What is your first name?" << "\n";
    std::cin >> first_name;
    std::cout << "What is your last name?" << "\n";
    std::cin >> last_name;

    std::cout << "Full name: " << first_name << " " << last_name;
}