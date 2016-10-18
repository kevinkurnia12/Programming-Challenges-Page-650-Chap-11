// Programming Challenges page 651 No 6
// Soccer Scores

#include <iostream>
#include <string>

using namespace std;

struct socPlayer{
	string name;
	unsigned int number;
	unsigned int scored;
};

int main(){
	socPlayer players[12];
	int totalScored;
	int highestScored;
	
	for (int x=0; x<=11; x++){
		cout << "Player's Name : ";
		cin >> players[x].name;
		cout << "Player's Number : ";
		cin >> players[x].number;
		cout << "Points scored by Player : ";
		cin >> players[x].scored;
		cout << endl;
		
		totalScored += players[x].scored;
		
	}
		cout << endl << "Player's Name" << "\t\tPlayer's Number" << "\t\tPoints Scored" << endl << endl;
	for (int y=0; y<=11; y++){
		cout << players[y].name;
		cout << "\t\t\t\t" << players[y].number;
		cout << "\t\t\t" << players[y].scored;
		cout << endl;
	}
	highestScored = players[0].scored;
	string highestName = players[0].name;
	int highestNumber = players[0].number;
	
	for (int w = 0; w<=11; w++){
		if (players[w].scored > highestScored){
			highestScored = players[w].scored;
			highestName = players[w].scored;
			highestNumber = players[w].scored;
		}
	}
	cout << endl << "Player's name with highest score : " << highestName;
	cout << endl << "Player's number with highest score : " << highestNumber;
	cout << endl << "Total points earned by the team : " << totalScored;
	
	return 0;
}
