#include<iostream>
#include <cmath>
using namespace std;

int main(){
      int number=0;
      int power=0;
      cout << "Enter number: ";
      cin >> number;
      cout << "Enter power: ";
      cin >> power;
      cout << "Result: " << pow(number,power) << endl;
}