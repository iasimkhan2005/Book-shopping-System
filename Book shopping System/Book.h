#pragma once

#include <string>
using namespace std;
class Book {
private:
    int book_id;
   string book_name;

public:
    Book(int id, const string& name) : book_id(id), book_name(name) {}




    int getBookId() const { return book_id; }



    const string& getBookName() const { return book_name; }





};
