#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
      double circleRadius =0;
      double circleArea =0;
      double circleCircumference =0;
      cout << "Enter the radius of the circle: ";
      cin >> circleRadius;
      circleArea = M_PI * circleRadius * circleRadius;
      circleCircumference = 2 * M_PI * circleRadius;
      cout << endl << "Area of the circle: " << circleArea
      << endl << "Circumference of the circle: " << circleCircumference;
}