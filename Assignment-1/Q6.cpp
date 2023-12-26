#include <iostream>
#include <limits>
using namespace std;

int main(){
      int numberOne = 0;
      int numberTwo = 0;
      cout << "Enter number one: ";
      cin >> numberOne;
      cout << endl << "Enter number two: ";
      cin >> numberTwo;
      int maxNumber = max(numberOne, numberTwo);
      if(numberOne == numberTwo){
            cout << "Number one and number two are equal." << endl;
      }else{
            cout << "Number one and number two are not equal." << endl;
      }
      cout << "Maximum number is: " << maxNumber << endl;
}