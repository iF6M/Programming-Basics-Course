#include "store.cpp"

class offer{
      private:
            int id;
            string storeName;
            string description;
            int startDate;
            int endDate;
            int storeId;
      public:
            void setId(int id){
                  this->id = id;
            }
            int getId(){
                  return id;
            }
            void setStoreName(string storeName){
                  this->storeName = storeName;
            }
            string getStoreName(){
                  return storeName;
            }
            void setDescription(string description){
                  this->description = description;
            }
            string getDescription(){
                  return description;
            }
            void setStartDate(int startDate){
                  this->startDate = startDate;
            }
            int getStartDate(){
                  return startDate;
            }
            void setEndDate(int endDate){
                  this->endDate = endDate;
            }
            int getEndDate(){
                  return endDate;
            }
            void setStoreId(int storeId){
                  this->storeId = storeId;
            }
            int getStoreId(){
                  return storeId;
            }
            void print(){
                  cout << "ID: " << id << endl;
                  cout << "Store Name: " << storeName << endl;
                  cout << "Description: " << description << endl;
                  cout << "Start Date: " << startDate << endl;
                  cout << "End Date: " << endDate << endl;
                  cout << "Store ID: " << storeId << endl;
            }
};