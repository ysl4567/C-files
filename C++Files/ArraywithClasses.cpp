#include <iostream>
#include <string>
#include <cmath>
using namespace std;


//1-D Array
class OneArray{
    public:
      int x_y[5] = {1,2,3,4,5}; //index 0 thru 4
      int i;
      void call_index(int i){
        std::cout << x_y[i] << "\n"; 
      }

      void print_all_values(){
        for (int k = 0; k < (sizeof(x_y) / sizeof(x_y[0])) ; k++){
            std::cout << x_y[k] << ",";
        }
      }
};

//2-D Array
class TwoArray{
    public:
       int a_b[3][4] = {{-00,-01,-02,-03},{10,11,12,13},{20,21,22,23}};
       int i,j;

       void call_index_two(int i, int j){
        std::cout << a_b[i][j];
       }

       void print_all_values_two(){
        for (int i = 0; i < 3; i++){
            for (int j =0; j <4; j++){
                std::cout << a_b[i][j] << "\n";
            }
        } 
       }
};


//Distances - list of distances (ft and in) entered

class Distance{
    public: 
      int feet;
      long double inches;
};




int main(){

    OneArray example1;
    TwoArray example2;
    int user_value;

    std::cout << example1.x_y[2] << "\n";
    std::cout << example2.a_b[1][2] << "\n";

    std::cout << "Enter index value to enter: " << "\n";
    std::cin >> example1.i;
    std::cout << "\n";

    example1.call_index(example1.i);
    example1.print_all_values();
    std::cout << "\n";

    std::cout << "Enter index[a] value to enter: " << "\n";
    std::cin >> example2.i;
    std::cout << "Enter index[b] value to enter: " << "\n";
    std::cin >> example2.j;

    std::cout << "\n";

    example2.call_index_two(example2.i, example2.j);
    std::cout << "\n";
    example2.print_all_values_two();





    


    
  

}
    

