#include "base.cpp"

class base;

class store : public base{
      private:
            int type;
            string location;
      public:
            void setType(int type){
                  this->type = type;
            }
            int getType(){
                  return type;
            }
            void setLocation(string location){
                  this->location = location;
            }
            string getLocation(){
                  return location;
            }
            void print(){
                  cout << "Type: " << type << endl;
                  cout << "Location: " << location << endl;
            }
};