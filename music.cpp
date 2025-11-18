#include <iostream>
#include "parent.h"
#include "music.h"

using namespace std;


music::music(const char* my_title, const char* my_artist, const char* my_year, const char* my_duration, const char* my_publisher):parent(my_title, my_year){
  artist = my_artist;
  duration = my_duration;
  publisher = my_publisher;
}
