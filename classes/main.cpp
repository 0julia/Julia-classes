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
      bool tf = false;
      while (tf == false){
	char type[15];
	cout << "What type or media would you like to add? ";
	cin >> type;

	if(strcmp(type, "movie")==0){
	  tf = true;
	}else if (strcmp(type, "videogame")==0){
	  tf = true;
	}else if(strcmp(type, "music")==0){
	  tf = true;
	}else{
	  cout << " That is not a valid option try again." << endl;
	}
      }
      
    }else if (strcmp(action, "search")==0){
      works = true;
    }else if(strcmp(action, "delete")==0){
      works = true;
    }else{
      cout << "you failed. ";
    }

  }
  
  // parent* e = new parent();
  // cout << e->printInfo() << endl;
    
  movie m;
  m.printInfo();
   
  return 0;
}
