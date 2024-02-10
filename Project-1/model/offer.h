// offer.h
#ifndef OFFER_H
#define OFFER_H

#include "store.h"

class Offer{
      private:
            int id;
            string storeName;
            string description;
            int startDate;
            int endDate;
            Store associatedStore;
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
            void setAssociatedStore(const Store& store) {
                  associatedStore = store;
            }
            const Store& getAssociatedStore() const {
                  return associatedStore;
            }
            void print(){
                  cout << "ID: " << id << endl;
                  cout << "Store Name: " << storeName << endl;
                  cout << "Description: " << description << endl;
                  cout << "Start Date: " << startDate << endl;
                  cout << "End Date: " << endDate << endl;
                  associatedStore.print();
            }
};
#endif // OFFER_H