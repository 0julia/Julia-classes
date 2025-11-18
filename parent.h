# include <iostream>
# include <cstring>
# pragma once

using namespace std;

class parent {
 public:
  parent(const char* my_title="Stoopidface", const char* my_year="-100");
  char title[80];
  char year[20];
  virtual const char* print()=0; //a funtion that prints all objcets

};
