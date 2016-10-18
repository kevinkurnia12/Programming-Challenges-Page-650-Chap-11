// Programming Challenges Page 651 No 1
// Movie Data

#include <iostream>
#include <string>

using namespace std;

struct movieData {
	string title;
	string director;
	int year;
	int time;
};
void displayMovie (movieData, movieData);

int main(){
	movieData movie1 = {"Titanic", "Kevin", 1998, 90};
	movieData movie2 = {"Snowden", "Kurnia", 1999, 100};
	
	displayMovie (movie1, movie2);
	
	return 0;
}

void displayMovie (movieData mov1, movieData mov2){
	
	cout << "Movie 1 \nTitle : " << mov1.title;
	cout << endl << "Director : " << mov1.director;
	cout << endl << "Year released : " << mov1.year;
	cout << endl << "Running Time : " << mov1.time;
	
	cout << endl << endl << "Movie 2 \nTitle : " << mov2.title;
	cout << endl << "Director : " << mov2.director;
	cout << endl << "Year released : " << mov2.year;
	cout << endl << "Running Time : " << mov2.time;
}
