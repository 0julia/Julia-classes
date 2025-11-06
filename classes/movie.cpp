#include <iostream>
#include "parent.h"
#include "movie.h"

using namespace std;

movie::movie(){
  int year = 23;
  
}

void movie::printInfo(){
  cout << "The movie " << title << " is directed by " << director << ". It was made in " << year << ", is " << duration << " long, and has a rating of " << rating;
}
