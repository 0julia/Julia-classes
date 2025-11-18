#include <iostream>
#include "parent.h"
#include "game.h"

using namespace std;

game::game(const char* my_title,  const char* my_year, const char* my_publisher, const char* my_rating):parent(my_title, my_year){
  strcpy(publisher, my_publisher);
  strcpy(rating, my_rating);
 }


const char* game::print() {
    static char buffer[500];  // persistent storage
    snprintf(buffer, sizeof(buffer),"%s\nTitle: %s\nYear Released: %s\nPublisher: %s\nRating: %s", type, title, year, publisher, rating);
    return buffer;
}
