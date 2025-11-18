#include <iostream>
#include <cstring>
#include "parent.h"
#include <string>
using namespace std;

class game : public parent {
 public:
  game(const char* my_title, const char* my_year,const char* my_publisher, const char* my_rating);
  string publisher;
  string rating;
  string type = "Videogame";
  const char* print(){ //prints 'game' objects
    string buffer = type + "\nTitle: " + title + "\nYear Released: " + year + "\nPublisher: " + publisher + "\nRating:" + rating; 
  return buffer.c_str();
  }
};
