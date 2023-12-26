#include <iostream>
#include <limits>
using namespace std;

int main(){
      int numberOne = 0;
      int numberTwo = 0;
      int numberThree = 0;
      cout << "Enter number one: ";
      cin >> numberOne;
      cout << endl << "Enter number two: ";
      cin >> numberTwo;
      cout << endl << "Enter number three: ";
      cin >> numberThree;
      int minNumber = min(numberOne, numberTwo);
      minNumber = min(minNumber, numberThree);
      cout << endl << "Minimum number is: " << minNumber << endl;
}