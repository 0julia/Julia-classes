#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;


class music : public parent {
 public:
  music();
  char title[80];
  char artist[80];
  int year;
  int duration; //or float?
  char publisher[80];
};
