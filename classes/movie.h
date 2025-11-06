#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;


class movie : public parent {
 public:
  movie();
  char title[80];
  char director[80];
  int year;
  int duration; // or float?
  int rating;
  void printInfo();
};
