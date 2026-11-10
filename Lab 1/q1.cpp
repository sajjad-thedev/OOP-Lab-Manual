#include <iostream>
#include <string>

using namespace std;

struct Movie {
  string title;
  string director;
  int releaseYear;
  float rating;
};

int main(void) {
  // define movie and populate it
  Movie movie;
  movie.title = "Inception";
  movie.director = "Christopher Nolan";
  movie.releaseYear = 2010;
  movie.rating = 9.2;
  // print movie details
  cout << "Movie Name : " << movie.title << endl;
  cout << "Movie Director : " << movie.director << endl;
  cout << "Movie Release Year : " << movie.releaseYear << endl;
  cout << "Movie Rating : " << movie.rating << endl;

  return 0;
}
