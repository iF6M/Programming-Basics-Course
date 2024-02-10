// client.h
#ifndef CLIENT_H
#define CLIENT_H

#include "base.h"
#include <vector>

class Client : public Base {
private:
    std::vector<int> favoriteOfferIds;

public:
    void addFavoriteOffer(int offerId) {
        favoriteOfferIds.push_back(offerId);
    }

    void displayFavoriteOffers() const {
        if (favoriteOfferIds.empty()) {
            std::cout << "No favorite offers." << std::endl;
        } else {
            std::cout << "Favorite Offers:" << std::endl;
            for (int offerId : favoriteOfferIds) {
                std::cout << "- Offer ID: " << offerId << std::endl;
            }
        }
    }
};

#endif // CLIENT_H