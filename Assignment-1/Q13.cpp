#include <iostream>
using namespace std;

int main(){
      int number = 0;
      bool isPrime = true;

      cout << "Enter a number: ";
      cin >> number;

      if(number == 1) {
            isPrime = false;
      } else {
        for(int i = 2; i * i <= number; ++i) {
            if(number % i == 0) {
                  isPrime = false;
                  break;
            }
      }
}

      if(isPrime) {
            cout << "Prime number" << endl;
      } else {
            cout << "Not a prime number" << endl;
      }
}