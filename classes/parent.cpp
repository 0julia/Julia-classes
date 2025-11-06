#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

parent::parent()
{
  strcpy(anum, "535");
}

const char* parent::printInfo(){
  cout << "I dunno how to do this";
  return anum;
}
