#include <iostream>
#include "parent.h"
#include "game.h"

using namespace std;

game::game(const char* my_title,  const char* my_year, const char* my_publisher, const char* my_rating):parent(my_title, my_year){
  publisher = my_publisher;
  rating = my_rating;
  
}
