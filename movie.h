#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;


class movie : public parent {
public:
  movie();
  movie(const char* my_title, const char* my_director, const char* my_year, const char* my_duration, const char* my_rating);
  char director[80];
  char duration[20];
  char rating[20];
  char type[20] = "Movie";

  /*
  const char* print(){ //prints 'movie' objects
    string buffer = type + "\nTitle: " + title + "\nDirector: " + director + "\nDuration: " + duration + "\nYear Released: " + year + "\nRating:" + rating;
    return buffer.c_str();
  
  */
  const char* print();
  
};

