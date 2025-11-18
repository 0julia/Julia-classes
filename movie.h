#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;


class movie : public parent {
public:
  movie();
  movie(const char* my_title, const char* my_director, const char* my_year, const char* my_duration, const char* my_rating);
  string director;
  string duration;
  string rating;
  string type = "Movie";
  const char* print(){ //prints 'movie' objects
    string buffer = type + "\nTitle: " + title + "\nDirector: " + director + "\nDuration: " + duration + "\nYear Released: " + year + "\nRating:" + rating;
    return buffer.c_str();
  }

};

