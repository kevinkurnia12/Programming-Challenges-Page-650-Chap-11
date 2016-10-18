// Programming Challenges page 651 No 4 
// Weather Statistics

#include <iostream>
#include <string>

using namespace std;

struct dataWeather{
	int rainfall;
	int hTemperature;
	int lTemperature;
	float averageTemperature;
};

int main(){
	dataWeather monthly[12];
	float totalTemperature;
	int totalRainfall = 0;
	int highest, lowest;
	string month[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	for (int x=0; x<12; x++){
		cout << month[x] << endl;
		cout << "Total Rainfall : ";
		cin >> monthly[x].rainfall;
	
		cout << "High Temperature : ";
		cin >> monthly[x].hTemperature;
		
		cout << "Low Temperature : ";
		cin >> monthly[x].lTemperature;
		cout << endl;
	
		totalRainfall = totalRainfall + monthly[x].rainfall;
		totalTemperature = monthly[x].hTemperature + monthly[x].lTemperature;
		monthly[x].averageTemperature = totalTemperature / 2;
		
		cout << "The average monthly temperatures : " << monthly[x].averageTemperature << endl << endl;
	}
 	highest = -101;
 	for (int i=0; i<12; i++){
  	if (monthly[i].hTemperature > highest){
   	highest = monthly[i].hTemperature;
  	}
 	}
	lowest = 141;
 	for (int i=0; i<12; i++){
  	if (monthly[i].lTemperature < lowest){
   	lowest = monthly[i].lTemperature;
	}
	}
	
	cout << endl << "The highest temperature for the year : " << highest;
	cout << endl << "The lowest temperature for the year  : " << lowest;
	cout << endl << "Total Rainfall for the year : " << totalRainfall;
	
	return 0;
}
