#include<iostream>
using namespace std;
#include<string>

class Book
{ string title ,author,company;
  int ISBN;

  public:

  void get()
  { cout<<"Enter the Books Title , Author , ISBN number and company name :\n";
    cin>>title>>author>>ISBN>>company;
  }

  void display()
  {  cout<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"ISBN no:"<<ISBN<<endl<<"Company:"<<company<<endl;
  }
};

class FictionBooks : public Book
{ string genre;
  int won;
 public:

  void get()
  { cout<<"Enter the genre and no of awards won:\n";
    cin>>genre>>won;
  }

  void display()
  { cout<<"Genre:"<<genre<<endl<<"Awards won:"<<won<<endl;
  }
};

class NonFictionBooks :public Book
{ string subjectarea;

public:

 void get()
 { cout<<"Enter subjet area (essays, biographies, memoirs, textbooks, and journalistic works) :\n";
 }

 void display()
 { cout<<"Subject area:"<<subjectarea<<endl;
 }
};

int main()
{ FictionBooks a;
  a.Book::get();
  a.FictionBooks::get();
  a.Book::display();
  a.FictionBooks::display();

  NonFictionBooks b;
  b.Book::get();
  b.NonFictionBooks::get();
  b.Book::display();
  b.NonFictionBooks::display();
}
