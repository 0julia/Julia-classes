#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class game : public parent {
 public:
  game();
  char title[80];
  int year;
  char publisher[80];
  float rating;

 protected:

};
