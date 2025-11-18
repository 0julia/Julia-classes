#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;


class music : public parent {
 public:
  music(const char* my_title, const char* my_artist, const char* my_year, const char* my_duration, const char* my_publisher);
  string artist;
  string duration;
  string publisher;
  string type = "Music";
  const char* print(){ //prints 'music' objects
    string buffer = type + "\nTitle: " + title + "\nArtist: " + artist + "\nYear Released: " + year + "\nDuration: " + duration + "\nPublisher: " + publisher;
  return buffer.c_str();
  }

};
