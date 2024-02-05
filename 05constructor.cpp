#include<iostream>

using namespace std;

class Book{
  public:
    string title;
    string author;
    int year;
    Book(string title, string author, int year) : title(title), author(author), year(year){ };
};

void display(int num, string title, string author, int year);

int main() {
  Book book1("Rich Dad Poor Dad", "Robert Kiyosaki", 1997);
  Book book2("The 7 Habits of Highly Effective People", "Stephen Covey", 1989);

  display(1, book1.title, book1.author, book1.year);
  cout << endl;
  display(2, book2.title, book2.author, book2.year);

  return 0;
};

void display(int num, string title, string author, int year){
  cout << "Book " << num <<" Details:" << endl;
  cout << "Title: " << title << endl;
  cout << "Author: " << author << endl;
  cout << "Year: " << year << endl;
}