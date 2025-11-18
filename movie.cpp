#include <iostream>
#include "movie.h"

using namespace std;

movie::movie() : parent("",""){
  director[0] = '\0';
  duration[0] = '\0';
  rating[0] = '0';
  //movie("", "", "","","");
  }

movie::movie(const char* my_title, const char* my_director, const char* my_year, const char* my_duration, const char* my_rating):parent(my_title, my_year){
  strcpy(director, my_director);
  strcpy(duration, my_duration);
  strcpy(rating, my_rating);
 }


const char* movie::print() {
    static char buffer[500];  // persistent storage
    snprintf(buffer, sizeof(buffer),"%s\nTitle: %s\nDirector: %s\nDuration: %s\nYear Released: %s\nRating: %s", type, title, director, duration, year, rating);
    return buffer;
}

