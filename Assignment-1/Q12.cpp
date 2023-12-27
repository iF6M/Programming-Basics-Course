#include <iostream>
using namespace std;

int main(){
      int number = 0;
      int findFactorial=1;
      cout << "Enter a number to find factorial: ";
      cin >> number;
      for(int i=1; i<=number; ++i){
            findFactorial *= i;
            cout << "Factorial: " << findFactorial << endl;
      }
}