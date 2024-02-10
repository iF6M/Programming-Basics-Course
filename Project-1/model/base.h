// base.h
#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>
using namespace std;

class Base{
      private:
            int id;
            string name;
            string email;
            string password;
      public:
            void setId(int id){
                  this->id = id;
            }
            int getId(){
                  return id;
            }
            void setName(string name){
                  this->name = name;
            }
            string getName(){
                  return name;
            }
            void setEmail(string email){
                  this->email = email;
            }
            string getEmail(){
                  return email;
            }
            void setPassword(string password){
                  this->password = password;
            }
            string getPassword(){
                  return password;
            }
            void print(){
                  cout << "ID: " << id << endl;
                  cout << "Name: " << name << endl;
                  cout << "Email: " << email << endl;
                  cout << "Password: " << password << endl;
            }
};
#endif // BASE_H