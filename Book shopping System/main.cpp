#include <iostream>
#include<vector>
#include "Book.h"
#include "ShoppingCart.h"
using namespace std;

vector<Book> book_list = {
    Book(101, "Imran Khan"),
    Book(102, "Rich Dad & Poor Dad"),
    Book(103, "Trading"),
    Book(104, "Software Engineer"),
    Book(105, "Cricket")
};
void browse_books() {
    cout << "ID  | Book_Name" << endl;
    for (const auto& book : book_list) {
        cout << book.getBookId() << "   | " << book.getBookName() << endl;
    }
    cout << "--------------------------------------------------------------------------\n";

}
int main() {
    Book book1(101, "Imran Khan");
    Book book2(102, "Rich Dad & Poor Dad");
    Book book3(103, "Trading");
    Book book4(104, "Software Engineer");
    Book book5(105, "Cricket");

    ShoppingCart cart;
        cout << "----------------- Welcome to XYZ Book Store -----------------" << endl;
    do
    {
        char menu_choice;
        int book_id;
        cout << "Select Anyone from the Following Options" << endl;
        cout << "1. Browse Book" << endl;
        cout << "2. Add a Book to Cart" << endl;
        cout << "3. Your Cart" << endl;
        cout << "4. Checkout" << endl;
        cout << "5. Quit" << endl;

        cout << "Enter Your Choice: ";
        cin >> menu_choice;
        cout << "--------------------------------------------------------------------------\n";
        switch (menu_choice) {
        case '1':
            
            browse_books();
            break;
        case '2':
			system("cls");
            cout << "----------------- Welcome to XYZ Book Store -----------------" << endl;
            cout << "Enter the ID of the book you want to add to cart: ";
            cin >> book_id;
           
            for (const auto& book : book_list) {
                if (book.getBookId() == book_id) {
                    cart.add_to_cart(book); 
                   cout << "Book added to cart successfully." << endl;
                    break;
                }
            }
            
            if (book_id < 101 || book_id > 105) {
                cout << "Invalid book ID. Please ENters a valid book." << endl;
            }
            break;
        case '3':
			system("cls");
			cout << "----------------- Welcome to XYZ Book Store -----------------" << endl;
            cart.view_cart();
            break;
        case '4':
            system("cls");
            cout << "----------------- Welcome to XYZ Book Store -----------------" << endl;
            cart.view_cart();
            cart.checkout();
            break;
        case '5':
            cout << "Good Bye, See you Soon AGAIN.........." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid choice. Please SElect a valid option." << endl;
        }
    } while (true);

    return 0;
}
