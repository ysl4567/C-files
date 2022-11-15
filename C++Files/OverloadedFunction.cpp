#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void addition(int a, int b){
    int c = a + b;
    std::cout << c << "\n";
}

void addition(double a, int b){
    long double c = a + b;
    std::cout << c << "\n";
}

void addition(int a, double b){
    long double c = a + b;
    std::cout << c << "\n";
}

void addition(double a, double b){
    long double c = a + b;
    std::cout << c << "\n";
}


int main()
{
    double e;
    double f;
    std::cout << "Enter first value: " << "\n";
    std::cin >> e;
    std::cout << "Enter second value: " << "\n";
    std::cin >> f;
    std::cout << "\n";
    addition (e,f);
    addition(3.425,5);
    addition (5,3);
} 


/*#include <iostream>
using namespace std;
 
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
 
// Driver code
int main()
{
    add(10, 2);
    add(5.3, 6.2);
 
    return 0;
} */

