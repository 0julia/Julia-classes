# include <iostream>
# include <cstring>
# pragma once

using namespace std;

class parent {
 public:
  parent(const char* my_title="Stoopidface", const char* my_year="-100");
  string title;
  string year;
  virtual const char* print()=0; //a funtion that prints all objcets

};
