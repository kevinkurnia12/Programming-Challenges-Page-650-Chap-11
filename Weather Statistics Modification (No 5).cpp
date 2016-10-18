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

enum months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

months mon;

int main(){
	dataWeather monthly[12];
	float totalTemperature;
	int totalRainfall = 0;
	int highest, lowest;
	string month[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	for (int mon = JANUARY; mon < DECEMBER; mon = static_cast<months>(mon+1)){
		cout << (mon+1) << endl;
		cout << "Total Rainfall : ";
		cin >> monthly[mon].rainfall;
	
		cout << "High Temperature : ";
		cin >> monthly[mon].hTemperature;
		
		cout << "Low Temperature : ";
		cin >> monthly[mon].lTemperature;
		cout << endl;
	
		totalRainfall = totalRainfall + monthly[mon].rainfall;
		totalTemperature = monthly[mon].hTemperature + monthly[mon].lTemperature;
		monthly[mon].averageTemperature = totalTemperature / 2;
		
		cout << "The average monthly temperature  : " << monthly[mon].averageTemperature << endl << endl;
	}
 	highest = -101;
 	for (int i=JANUARY; i<DECEMBER; i++){
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
