#include <iostream>
using namespace std;
int main(){
      int studentMarks = 0;
      cout << endl <<"Enter your marks number: " ;
      cin >> studentMarks;
      if (studentMarks >= 85){
            cout << "Excellent" << endl;
      }else if(studentMarks >=75){
            cout << "Very Good" << endl;
      }else if(studentMarks >=65){
            cout << "Good" << endl;
      }else if(studentMarks >=50){
            cout << "Pass" << endl;
      }else if(studentMarks <50){
            cout << "Fail" << endl;
      }else{
            cout << "Invalid input" << endl;
      }
}