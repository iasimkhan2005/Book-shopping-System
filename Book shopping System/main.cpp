#include<iostream>
#include<map>
#include "Book.h"
#include "ShoppingCart.h"


using namespace std;

void Book::showlist();


int main() {
	Book book1(101, "Imran Khan");
	Book book2(102, "Rich Dad & Poor Dad");
	Book book3(103, "Trading");
	Book book4(104, "Software Engineer");
	Book book5(105, "Cricket");
	Book book;

	char menu_choice;
	cout << "----------------- Welcome to XYZ Book Store -----------------" << endl;
	cout << "Select Anyone from the Following Options" << endl;
	cout << "1. Browse Book" << endl;
	cout << "2. Your Cart" << endl;
	cout << "3. Checkout" << endl;
	cout << "4. Quit" << endl;

	cout << "Enter Your Choice: ";
	cin >> menu_choice;

	switch (menu_choice)
	{
	case '1':
		cout << "You have selected Browse Book" << endl;
		Book showlist();
		break;
	case '2':
		cout << "You have selected Your Cart" << endl;

		break;
	case '3':
		cout << "You have selected Checkout" << endl;
		break;

	case '4':
		cout << "Good Bye, See you Soon AGAIN.........." << endl;
		exit(0);
		break;
	}


	system("pause");
	return 0;
}
		
