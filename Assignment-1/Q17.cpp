#include <iostream>
using namespace std;

int main(){
      int number=0;
      int digitsNumber=0;
      cout << "Enter number: ";
      cin >> number;
      while(number!=0){
            digitsNumber++;
            number /= 10;
      }
      cout <<"Number of digits: " << digitsNumber;
}