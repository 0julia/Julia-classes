#include <iostream>
#include "parent.h"
#include "music.h"

using namespace std;


music::music(const char* my_title, const char* my_artist, const char* my_year, const char* my_duration, const char* my_publisher):parent(my_title, my_year){
  strcpy(artist, my_artist);
  strcpy(duration, my_duration);
  strcpy(publisher, my_publisher);
}

const char* music::print() {
    static char buffer[500];  // persistent storage
    snprintf(buffer, sizeof(buffer),"%s\nTitle: %s\nArtist: %s\nYear Released: %s\nDuration in Seconds: %s\nPublisher: %s", type, title, artist, year, duration, publisher);
    return buffer;
}
