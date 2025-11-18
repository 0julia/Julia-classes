# include <memory>
# include <iostream>
# include <vector>
# include <cstring>
# include "parent.h"
# include "music.h"
# include "movie.h"
# include <algorithm>
# include "game.h"
# include <list>
using namespace std;

int main()
{
  // create the list of all the media types
  vector<parent*> media;

  cout << "Welcome to the media repository!" << endl << "Type 'add' to add a piece of media, 'search' to look for one, or 'delete' to delete data." << endl << "Please use all lower case." << endl<< "To quit, type 'quit.'" << endl << endl;
  
  //parent p;
  bool keepgoing = true;
  while(keepgoing == true){ // while the user hasn't quit...
    bool works = false;
    char action[20];
    cout << "What would you like to do? ";//ask what the user wants to do
    cin >> action;

    
    if(strcmp(action, "add")==0){
      works = true;
      bool tf = false;
      while (tf == false){
	char type[15];
	cout << "What type or media would you like to add? ";
	cin >> type;

	if(strcmp(type, "movie")==0){
	  char title[80];
	  cout << "What is the title of the movie? ";
	  cin.ignore(); // clear leftover newline from previous input
	  cin.getline(title, 80);
	  char director[80];
	  cout<< "Who directed the movie? ";
	  cin.ignore(); // clear leftover newline from previous input
	  cin.getline(director, 80);
	  char year[20];
	  cout << "What year was the movie released? ";
	  cin >> year;
	  char duration[20];
	  cout << "How long is the movie in minutes? ";
	  cin >> duration;
	  char rating[20];
	  cout << "What is this movie rated out of 10? ";
	  cin >> rating;
	  //pushes the information into the class and vector
	  media.push_back(new movie(title, director, year, duration, rating));
	  tf = true;
	}else if (strcmp(type, "videogame")==0){
	  char title[80];
	  cout << "What is the title of the videogame? ";
	  cin.ignore(); // clear leftover newline from previous input
	  cin.getline(title, 80);
	  char year[20];
	  cout << "What year was the videogame released? ";
	  cin >> year;
	  char publisher[80];
	  cout << "Who published the videogame? ";
	  cin.ignore();
	  cin.getline(publisher, 80);
	  char rating[20];
	  cout << "What is this movie rated out of 10? ";
	  cin >> rating;
	  //pushes the information into the class and vector
	  media.push_back(new game(title, year, publisher, rating));
	  tf = true;
	}else if(strcmp(type, "music")==0){
	  char title[80];
	  cout << "What is the title of the music? ";
	  cin.ignore(); // clear leftover newline from previous input
	  cin.getline(title, 80);
	  char artist[80];
	  cout<< "Who is the artist? ";
	  cin.ignore(); // clear leftover newline from previous input
	  cin.getline(artist, 80);
	  char year[20];
	  cout << "What year was the music released? ";
	  cin >> year;
	  char duration[20];
	  cout << "How long is the song in seconds? ";
	  cin >> duration;
	  char publisher[80];
	  cout << "Who published this song? ";
	  cin.ignore(); // clear leftover newline from previous input
	  cin.getline(publisher, 80);
	  //pushes the information into the class and vector
	  media.push_back(new music(title, artist, year, duration, publisher));
	  
	  tf = true;
	}else{
	  cout << " That is not a valid option try 'movie,' 'videogame,' or 'music.' " << endl;
	}
      }
      
    }




    else if (strcmp(action, "search")==0){//when the user wants to search smth...
      char isTitle[40];//decide if they want to search by the title or year
      cout << "Are you searching the title or the year? (type 'title' or 'year') ";
      cin >> isTitle;

      if (strcmp(isTitle, "title")==0){
	char compare[80];
	cout << "What is the title? ";
	cin.ignore(); // clear leftover newline from previous input
	cin.getline(compare, 80);

	auto it = media.begin();
	bool found = false;
	while (it != media.end()){
	  it = find_if(it, media.end(), [&](parent* obj){
	    return obj->title== compare;
	  });

	  if(it !=media.end()){
	    cout << endl<< "MEDIA FOUND:" << endl <<endl;
	    parent* p = *it;
	    cout << p->print() << endl<<endl;
	    ++it;
	    found = true;
	  }
	}
	if(found == false){
	  cout<< "There was no matching media" << endl;
	}
      }

      // if they want to search by year, go here
      else if (strcmp(isTitle, "year")==0){
	char compare[80];
	cout << "What is the title? ";
	cin.ignore(); // clear leftover newline from previous input
	cin.getline(compare, 80);

	auto it = media.begin();
	bool found = false;
	while (it != media.end()){
	  it = find_if(it, media.end(), [&](parent* obj){
	    return obj->year == compare;
	  });

	  if(it !=media.end()){
	    cout << "MEDIA FOUND:" << endl <<endl;
	    parent* p = *it;
	    cout << p->print() << endl<<endl;
	    ++it;
	    found = true;
	  }
	}
	if(found == false){
	  cout<< "There was no matching media" << endl;
	}
      } else{
	cout << "Sorry, that is not an option, only 'year' or 'title.'";
      }
      works = true;
    }

    

    //to delete
    else if(strcmp(action, "delete")==0){
      char isTitle[40];
      cout << "Are you searching the title or the year? (type 'title' or 'year') ";
      cin >> isTitle;

      if (strcmp(isTitle, "title")==0){
	char compare[80];
	cout << "What is the title? ";
	cin.ignore(); // clear leftover newline from previous input
	cin.getline(compare, 80);

	auto it = media.begin();
	bool found = false;
	while (it != media.end()){
	  it = find_if(it, media.end(), [&](parent* obj){
	    return obj->title== compare;
	  });

	
	  if(it !=media.end()){
	    cout << "MEDIA FOUND:" << endl <<endl;
	    parent* p = *it;
	    cout << p->print() << endl<< endl;
	    char del[20];
	    cout << "Would you like to delete this media? ('yes' or 'no') ";
	    cin >> del;
	    if (strcmp(del, "yes")==0){
	      parent* p = *it;            //Get the object
	      delete p;                  // free the memory
	      it = media.erase(it);     // erase the pointer from vector
	      found = true;
	    }else{
	      found = true;
	      ++it;
	    }
	  }
	  if(found == false){
	    cout<< "That did not match any media in storage" << endl;
	  }
	}
      } else if (strcmp(isTitle, "year")==0){
	char compare[80];
	cout << "What is the title? ";
	cin.ignore(); // clear leftover newline from previous input
	cin.getline(compare, 80);

	auto it = media.begin();
	bool found = false;
	while (it != media.end()){
	  it = find_if(it, media.end(), [&](parent* obj){
	    return obj->year== compare;
	  });
	
	  if(it !=media.end()){
	    cout << "MEDIA FOUND:" << endl <<endl;
	    parent* p = *it;
	    cout << p->print() << endl<< endl;
	    char del[20];
	    cout << "Would you like to delete this media? ('yes' or 'no') ";
	    cin >> del;
	    if (strcmp(del, "yes")==0){
	      parent* p = *it;            //Get the object
	      delete p;                  // free the memory
	      it = media.erase(it);     // erase the pointer from vector
	      found = true;
	    }else{
	      found = true;
	      ++it;
	    }
	  }if(found == false){
	    cout<< "There was no matching media" << endl;
	  }
	}
	
	works = true;
      }
    }else if(strcmp(action, "quit")==0){
      keepgoing = false;
    }else{
      cout << "you failed. Try 'add,' 'search,' 'delete,' or 'quit.' ";
    }
    cout << endl << endl;
  }
  for(auto p : media) delete p;
  media.clear();
  cout << "Goodbye!";
  return 0;
}
