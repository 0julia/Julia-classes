# include <iostream>
# include <vector>
# include <cstring>
# include "parent.h"
# include "music.h"
# include "movie.h"
# include "game.h"
using namespace std;

int main()
{
  vector<parent*> media;
  //parent p;
  bool keepgoing = true;
  while(keepgoing == true){
  bool works = false;
  //while(works == false){
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
	  int year;
	  cout << "What year is it? ";
	  cin >> year;
	  //movie m;
	  //media.push_back(new movie(year));
	  tf = true;
	}else if (strcmp(type, "videogame")==0){
	  media.push_back(new game());
	  tf = true;
	}else if(strcmp(type, "music")==0){
	  media.push_back(new music());
	  tf = true;
	}else{
	  cout << " That is not a valid option try 'movie,' 'videogame,' or 'music.' " << endl;
	}
      }
      
    }else if (strcmp(action, "search")==0){
      works = true;
    }else if(strcmp(action, "delete")==0){
      works = true;
    }else if(strcmp(action, "quit")==0){
      keepgoing = false;
    }else{
      cout << "you failed. Try 'add,' 'search,' 'delete,' or 'quit.' ";
    }

    //  }
  }
  
  // parent* e = new parent();
  // cout << e->printInfo() << endl;

  //  movie m;
  //m.addInfo();

  for (const auto& obj : media) {
    cout << endl << endl << obj << endl;
  }
  return 0;
}
