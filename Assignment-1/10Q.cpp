#include <iostream>
using namespace std;

int main(){
      int firstNumber=0, secondNumber=0;
      char operation=0;
      cout << "Enter your fist number: ";
      cin >> firstNumber ;
      cout << "Enter your second number: ";
      cin >> secondNumber ;
      cout << "Enter your operation: ";
      cin >> operation ;
      switch (operation){
      case '+':
            cout << firstNumber << " + " << secondNumber << " = " << firstNumber+secondNumber << endl;
            break;
      
      case '-':
      cout << firstNumber << " - " << secondNumber << " = " << firstNumber-secondNumber << endl;
            break;
      
      case '*':
      cout << firstNumber << " * " << secondNumber << " = " << firstNumber*secondNumber << endl;
            break;

      case '/':
      cout << firstNumber << " / " << secondNumber << " = " << firstNumber/secondNumber << endl;
            break;
      default:
            cout << "Invalid input" << endl;
            break;
      }
}