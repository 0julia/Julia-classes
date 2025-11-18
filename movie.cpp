#include <iostream>
#include "movie.h"

using namespace std;

movie::movie(){
  movie("", "", "","","");
  }

movie::movie(const char* my_title, const char* my_director, const char* my_year, const char* my_duration, const char* my_rating):parent(my_title, my_year){
  director = my_director;
  duration = my_duration;
  rating = my_rating;
}
