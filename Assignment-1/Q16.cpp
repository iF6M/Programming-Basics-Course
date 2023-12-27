#include <iostream>
using namespace std;

int main(){
      int number=0;
      int reversedNumber=0;
      cout << "Enter number: ";
      cin >> number;
      while(number!=0){
            reversedNumber = reversedNumber*10 + number%10;
            number /= 10;
      }
      cout <<"Reversed number: " <<reversedNumber;
}