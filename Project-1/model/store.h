// store.h
#ifndef STORE_H
#define STORE_H
#include "base.h"

class Base;

enum StoreType {
    SUPERMARKET,
    RESTAURANT,
    CAFE,
    HOTEL
};

class Store : public Base {
private:
    StoreType type;
    string location;

public:
    void setType(StoreType type) {
        this->type = type;
    }

    StoreType getType() const {
        return type;
    }

    void setLocation(string location) {
        this->location = location;
    }

    string getLocation() const {
        return location;
    }

    void print() {
        cout << "Type: ";
        switch (type) {
            case SUPERMARKET:
                cout << "Supermarket";
                break;
            case RESTAURANT:
                cout << "Restaurant";
                break;
            case CAFE:
                cout << "Cafe";
                break;
            case HOTEL:
                cout << "Hotel";
                break;
            default:
                cout << "Unknown";
                break;
        }
        cout << endl;
        cout << "Location: " << location << endl;
    }
};

#endif // STORE_H
