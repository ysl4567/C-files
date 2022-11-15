#include <iostream>
#include <cmath>
#include <string>
#include <iomanip> //setw - field width
using namespace std;


class BasicStrings{

    private:
     std::string Hello = "Hello";

    public: 
     std::string Hello_Name = Hello + ", Yuto";
};


int main(){
//String Basics
    BasicStrings example1;
    std::cout << example1.Hello_Name;
    std::cout << setw(77);
    std::cout << example1.Hello_Name;

    std::cout << "\n";

//Maximum Strings

    const int MAX = 20;
    char str[MAX];

    std::cout << "Enter a string";
    std::cin >> setw(MAX) >> str;

    std::cout << "String: " << str;

    std::cout << "\n";

//Constant String


    const std::string introduction = "Hello, World!";
    std::cout << introduction;

    std::cout << "\n";

    char str2[] = "yourmom"; //str2 = name of string
    std::cout << str2;

    std::cout << "\n";
//Strings and spaces - SPACE renders everything afterwards not included, add cin.get(str, MAX)


    const int MAX2 = 20;
    char str3[MAX2];

    cout << "Enter a string value: ";
    cin.get(str3,MAX2);
    cout << str3;
}