#include <iostream>
using namespace std;

int main(){
      int celsiusDegree =0;
      int fahrenheitDegree =0;
      cout << "Enter temperature celsius degree: ";
      cin >> celsiusDegree ;
      fahrenheitDegree = (celsiusDegree * 9/5) + 32;
      cout << endl << "Temperature in fahrenheit: " << fahrenheitDegree ;
}