#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

parent::parent(const char* my_title, const char* my_year)
{ //sets comon variables
  
  strcpy(title, my_title);
  strcpy(year, my_year);

}
