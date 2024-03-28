#include<iostream>
#include "Book.h"
#include "ShoppingCart.h"

using namespace std;

 
void Menu() {
	char menu_choice;
	cout << "----------------- Welcome to XYZ Book Store -----------------" << endl;
	cout << "Select Anyone from the Following Options" << endl;
	cout << "1. Browse Book" << endl;
	cout << "2. Your Cart" << endl;
	cout << "3. Checkout" << endl;
	cout << "4. Quit" << endl;
	
	cout << "Enter Your Choice: ";
	cin >> menu_choice;
}
int main() {

	Menu();

	system("pause");
	return 0;
}