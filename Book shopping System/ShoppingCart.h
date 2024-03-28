#pragma once

#include <vector>
#include "Book.h"
using namespace std;
class ShoppingCart {
private:
    vector<Book> cart;

public:
    void add_to_cart(const Book& book) {
        cart.push_back(book);
    }

    void view_cart() const {

        if (cart.empty()) {
            cout << "Your cart is empty." << endl;
        }

        else {
            cout << "Items in Your Cart:" << endl;
            cout << "ID  | Book_Name" << endl;
            for (const auto& item : cart) {
                cout << item.getBookId() << "   | " << item.getBookName() << endl;
            }
        }
    }

    void checkout() {
        if (cart.empty()) {
            cout << "Your cart is empty. Cannot proceed to checkout." << endl;
        }
        else {
            cout << "Checkout completed. Thank you for your purchase!" << endl;
            cart.clear(); 
        }

    }





};
