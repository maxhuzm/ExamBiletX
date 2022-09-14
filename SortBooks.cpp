
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;


class Book
{
public:
    string book_name;
    string author_name;
    unsigned pub_year;
    // Constructor
    Book(const string& _bname, const string& _aname, unsigned _year) {
        book_name = _bname;
        author_name = _aname;
        pub_year = _year;
    }
    bool operator < (const Book& b) {
        return this->author_name < b.author_name;
    }
};


int main()
{
    std::vector <Book> mas;
    mas.push_back(Book("Vsadnik bez golovy", "Main Rid", 2005));
    mas.push_back(Book("Harry Potter", "Hans Pot", 1990));
    mas.push_back(Book("American Politics", "Barak Obama", 2011));
    mas.push_back(Book("Bely klyk", "Jack London", 2022));
    
    std::sort(mas.begin(), mas.end());
    for (Book b : mas) {
        cout << b.book_name << ": " << b.author_name << endl;
    }
}
