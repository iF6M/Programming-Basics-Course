#include "user.h"

int User::count = 0;

User::User() {
      name = "";
      age = 0;
      password = "";
      email = "";
      count++;
      id = count; 
}

User::User(string name, int age, string password, string email) {
      this->name = name;
      this->age = age;
      this->password = password;
      this->email = email;
      count++;
      id = count;
}

User::User(const User & user) {
      name = user.name;
      age = user.age;
      password = user.password;
      email = user.email;
      id = user.id;
}

int main() {
      cout << "Hello, World!" << endl;
      return 0;
}