#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;


class movie : public parent {
 private:
  movie();
  char title[80];
  char director[80];
  int year;
  int duration; // or float?
  float rating;
public:
  //addInfo(int y)
  //:year(y){}
  void addInfo();
};
