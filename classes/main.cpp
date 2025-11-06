# include <iostream>
# include <cstring>
# include "parent.h"
# include "music.h"
# include "movie.h"
# include "game.h"
using namespace std;

int main()
{
  bool works = false;
  while(works == false){
    char action[20];
    cout << "What would you like to do? ";
    cin >> action;
    if(strcmp(action, "add")==0){
      works = true;
    }else if (strcmp(action, "search")==0){
      works = true;
    }else if(strcmp(action, "delete")==0){
      works = true;
    }else{
      cout << "you failed";
    }
      
  }
  parent* e = new parent();
  cout << e->printInfo() << endl;

  movie* m = new movie();
  cout << m->printInfo() << endl;
  
  return 0;
}
