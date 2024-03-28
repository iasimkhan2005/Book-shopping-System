#pragma once
#include<map>
using namespace std;
class Book
{
	int book_id;
	string book_name;
	map<int, string> book_list;

public:
	Book();
	Book(int id, string name) : book_id(id), book_name(name) {
		book_list[book_id] = book_name;
	}
	void showlist() {
		map<int, string>::iterator it;
		for (it = book_list.begin(); it != book_list.end(); it++) {
			cout << it->first << " " << it->second << endl;
		}

		cout << endl;
	}
	





};

