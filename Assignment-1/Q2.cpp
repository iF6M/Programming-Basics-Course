#include <iostream>
using namespace std;
int main(){
      string studentName;
      int studentMarks = 0;
      cout << "Enter your name: ";
      cin >> studentName;
      cout << endl <<"Enter your marks number: " ;
      cin >> studentMarks;
      if (studentMarks <= 20){
            cout << "Student name : " << studentName
            << " , Student Grade: " << "F" << endl;
      }else if (studentMarks <=39 && studentMarks >20){
            cout << "Student name : " << studentName
            << " , Student Grade: " << "D" << endl;
      }else if (studentMarks <=59 && studentMarks >39){
            cout << "Student name : " << studentName
            << " , Student Grade: " << "C" << endl;
      }else if (studentMarks <=79 && studentMarks >59){
            cout << "Student name : " << studentName
            << " , Student Grade: " << "B" << endl;
      }else if (studentMarks <=100 && studentMarks>79){
            cout << "Student name : " << studentName
            << " , Student Grade: " << "A" << endl;
      }else{
            cout << "Invalid input" << endl;
      }
}