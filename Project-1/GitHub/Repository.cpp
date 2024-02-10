#include <bits/stdc++.h>
#include "Client.h"
#include "Store.h"
#include "Offer.h"

using namespace std;

// Client 

class ClientRepository{
    public:
    virtual int addClient(Client client) = 0;
}; 

class ClientRepositoryImpl : public ClientRepository{
    private:
    std::vector<Client> clients;
    public:
    int addClient(Client client) override {
        clients.push_back(client);
        std::cout << "Client added successfully" << std::endl;
        return clients.size();
    }
};

// Offer

class OfferRepository{
    public:
    virtual int addOffer(Offer offer) = 0;
};

class OfferRepositoryImpl : public OfferRepository{
    private:
    std::vector<Offer> offers;
    public:
    int addOffer(Offer offer) override {
        offers.push_back(offer);
        std::cout << "Offer added successfully" << std::endl;
        return offers.size();
    }
};

// Store

class StoreRepository{
    public:
    virtual int addStore(Store store) = 0;
};

class StoreRepositoryImpl : public StoreRepository{
    private:
    std::vector<Store> stores;
    public:
    int addStore(Store store) override {
        stores.push_back(store);
        std::cout << "Store added successfully" << std::endl;
        return stores.size();
    }
};