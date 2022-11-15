#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// 1-D Array
int array1[5] = {1,2,3,4,5};

void third_index_of_function(){
    std::cout << array1[3];
}

void userinput(int i){
    std::cout << array1[i];
}

void print_all_values(){
    for (int i = 0; i<5; i++){
        std::cout << array1[i];
    }
}

int main(){

    third_index_of_function();
    std::cout << "\n";
    print_all_values();
    std::cout << "\n";
    int k;
    std::cout << "What index value would you like to print? " << "\n";
    std::cin >> k;
    userinput(k);

}