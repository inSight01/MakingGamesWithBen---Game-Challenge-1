#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main() {

	// Border for top and bottom headers

	string border = "||-----------------------------------------------------------------------||\n";
	string spacer = "|| \n";

	// If new to game this will be true

	bool   newGame = true;

	// If 'true' than the game will loop continuously

	bool   playing = true;

	// This will store user input from menu selections

	int    menuSelection = 0;
	string menuString    = "";

	// This will be set to 'true' if user inputs an incorrect
	// selection number

	bool   menuError = false;

	// This variable will be our error sign

	string error = "ERROR: ";

	// This variable wil be used when displaying a message

	string message = "";

	// These variables will be used if characters names are too
	// short or too long

	string nameErrorMessage = "Names must be between 1 and 10 characters long. ";

	// These variables will store players statistics

	int    wonCredits       = 0;
	int    lostCredits      = 0;
	int    spentCredits     = 0;
	int    currentCredits   = 100000;
	int    conquestWins     = 0;
	int    conquestDefeats  = 0;
	int    friendlyWins     = 0;
	int    friendlyDefeats  = 0;
	int    regionsDestroyed = 0;
	int    numHeroes        = 0;
	int    deadHeroes       = 0;
	int    enemiesKilled    = 0;
	int    populationAlive  = 5000;
	int    populationDead   = 0;

	// These variables will be used during battles to hold total health points

	float    heroTotalHealth         = 0.0f;
	float    heroCurrentHealth       = 0.0f;
	float    monsterTotalHealth      = 0.0f;
	float    monsterCurrentHealth    = 0.0f;

	// Variables for Hero 00

	string heroName00          = "Hero 01";
	int    heroTotalHealth00   = 0;
	int    heroCurrentHealth00 = 0;
	int    heroAttack00        = 0;
	int    heroStatus00        = false;
	bool   heroActive00        = false;

	// Variables for Hero 01

	string heroName01          = "Hero 02";
	int    heroTotalHealth01   = 0;
	int    heroCurrentHealth01 = 0;
	int    heroAttack01        = 0;
	int    heroStatus01        = false;
	bool   heroActive01        = false;

	// Variables for Hero 02

	string heroName02          = "Hero 03";
	int    heroTotalHealth02   = 0;
	int    heroCurrentHealth02 = 0;
	int    heroAttack02        = 0;
	int    heroStatus02        = false;
	bool   heroActive02        = false;

	// Variables for Hero 03

	string heroName03          = "Hero 04";
	int    heroTotalHealth03   = 0;
	int    heroCurrentHealth03 = 0;
	int    heroAttack03        = 0;
	int    heroStatus03        = false;
	bool   heroActive03        = false;

	// Variables for Hero 04

	string heroName04          = "Hero 05";
	int    heroTotalHealth04   = 0;
	int    heroCurrentHealth04 = 0;
	int    heroAttack04        = 0;
	int    heroStatus04        = false;
	bool   heroActive04        = false;

	// Regions

	bool   r1Active  = true;
	bool   r1Locked  = false;
	bool   r2Active  = false;
	bool   r2Locked  = false;
	bool   r3Active  = false;
	bool   r3Locked  = false;
	bool   r4Active  = false;
	bool   r4Locked  = false;
	bool   r5Active  = false;
	bool   r5Locked  = false;
	
	// Region 1
	
	// Base 1

	int    r1b1Units           = 0;
	bool   r1b1Counted         = false;
	bool   r1b1Active          = true;
	bool   r1b1Defeated        = false;
	string r1b1Name00          = "Monster 1";
	int    r1b1TotalHealth00   = 50;
	int    r1b1CurrentHealth00 = r1b1TotalHealth00;
	int    r1b1Attack00        = 10;
	bool   r1b1Status00        = true;
	bool   r1b1Active00        = true;
	string r1b1Name01          = "Monster 2";
	int    r1b1TotalHealth01   = 50;
	int    r1b1CurrentHealth01 = r1b1TotalHealth01;
	int    r1b1Attack01        = 10;
	bool   r1b1Status01        = false;
	bool   r1b1Active01        = false;
	string r1b1Name02          = "Monster 3";
	int    r1b1TotalHealth02   = 50;
	int    r1b1CurrentHealth02 = r1b1TotalHealth02;
	int    r1b1Attack02        = 10;
	bool   r1b1Status02        = false;
	bool   r1b1Active02        = false;
	string r1b1Name03          = "Monster 4";
	int    r1b1TotalHealth03   = 50;
	int    r1b1CurrentHealth03 = r1b1TotalHealth03;
	int    r1b1Attack03        = 10;
	bool   r1b1Status03        = false;
	bool   r1b1Active03        = false;
	string r1b1Name04          = "Monster 5";
	int    r1b1TotalHealth04   = 50;
	int    r1b1CurrentHealth04 = r1b1TotalHealth04;
	int    r1b1Attack04        = 10;
	bool   r1b1Status04        = false;
	bool   r1b1Active04        = false;

	// Base 2

	int    r1b2Units           = 0;
	bool   r1b2Counted         = false;
	bool   r1b2Active          = false;
	bool   r1b2Defeated        = false;
	string r1b2Name00          = "Monster 1";
	int    r1b2TotalHealth00   = 50;
	int    r1b2CurrentHealth00 = r1b2TotalHealth00;
	int    r1b2Attack00        = 10;
	bool   r1b2Status00        = true;
	bool   r1b2Active00        = true;
	string r1b2Name01          = "Monster 2";
	int    r1b2TotalHealth01   = 50;
	int    r1b2CurrentHealth01 = r1b2TotalHealth01;
	int    r1b2Attack01        = 10;
	bool   r1b2Status01        = true;
	bool   r1b2Active01        = true;
	string r1b2Name02          = "Monster 3";
	int    r1b2TotalHealth02   = 50;
	int    r1b2CurrentHealth02 = r1b2TotalHealth02;
	int    r1b2Attack02        = 10;
	bool   r1b2Status02        = false;
	bool   r1b2Active02        = false;
	string r1b2Name03          = "Monster 4";
	int    r1b2TotalHealth03   = 50;
	int    r1b2CurrentHealth03 = r1b2TotalHealth03;
	int    r1b2Attack03        = 10;
	bool   r1b2Status03        = false;
	bool   r1b2Active03        = false;
	string r1b2Name04          = "Monster 5";
	int    r1b2TotalHealth04   = 50;
	int    r1b2CurrentHealth04 = r1b2TotalHealth04;
	int    r1b2Attack04        = 10;
	bool   r1b2Status04        = false;
	bool   r1b2Active04        = false;

	// Base 3

	int    r1b3Units           = 0;
	bool   r1b3Counted         = false;
	bool   r1b3Active          = false;
	bool   r1b3Defeated        = false;
	string r1b3Name00          = "Monster 1";
	int    r1b3TotalHealth00   = 50;
	int    r1b3CurrentHealth00 = r1b3TotalHealth00;
	int    r1b3Attack00        = 10;
	bool   r1b3Status00        = true;
	bool   r1b3Active00        = true;
	string r1b3Name01          = "Monster 2";
	int    r1b3TotalHealth01   = 50;
	int    r1b3CurrentHealth01 = r1b3TotalHealth01;
	int    r1b3Attack01        = 10;
	bool   r1b3Status01        = true;
	bool   r1b3Active01        = true;
	string r1b3Name02          = "Monster 3";
	int    r1b3TotalHealth02   = 50;
	int    r1b3CurrentHealth02 = r1b3TotalHealth02;
	int    r1b3Attack02        = 10;
	bool   r1b3Status02        = true;
	bool   r1b3Active02        = true;
	string r1b3Name03          = "Monster 4";
	int    r1b3TotalHealth03   = 50;
	int    r1b3CurrentHealth03 = r1b3TotalHealth03;
	int    r1b3Attack03        = 10;
	bool   r1b3Status03        = false;
	bool   r1b3Active03        = false;
	string r1b3Name04          = "Monster 5";
	int    r1b3TotalHealth04   = 50;
	int    r1b3CurrentHealth04 = r1b3TotalHealth04;
	int    r1b3Attack04        = 10;
	bool   r1b3Status04        = false;
	bool   r1b3Active04        = false;

	// Base 4

	int    r1b4Units           = 0;
	bool   r1b4Counted         = false;
	bool   r1b4Active          = false;
	bool   r1b4Defeated        = false;
	string r1b4Name00          = "Monster 1";
	int    r1b4TotalHealth00   = 100;
	int    r1b4CurrentHealth00 = r1b4TotalHealth00;
	int    r1b4Attack00        = 10;
	bool   r1b4Status00        = true;
	bool   r1b4Active00        = true;
	string r1b4Name01          = "Monster 2";
	int    r1b4TotalHealth01   = 150;
	int    r1b4CurrentHealth01 = r1b4TotalHealth01;
	int    r1b4Attack01        = 20;
	bool   r1b4Status01        = true;
	bool   r1b4Active01        = true;
	string r1b4Name02          = "Monster 3";
	int    r1b4TotalHealth02   = 100;
	int    r1b4CurrentHealth02 = r1b4TotalHealth02;
	int    r1b4Attack02        = 10;
	bool   r1b4Status02        = true;
	bool   r1b4Active02        = true;
	string r1b4Name03          = "Monster 4";
	int    r1b4TotalHealth03   = 50;
	int    r1b4CurrentHealth03 = r1b4TotalHealth03;
	int    r1b4Attack03        = 10;
	bool   r1b4Status03        = false;
	bool   r1b4Active03        = false;
	string r1b4Name04          = "Monster 5";
	int    r1b4TotalHealth04   = 50;
	int    r1b4CurrentHealth04 = r1b4TotalHealth04;
	int    r1b4Attack04        = 10;
	bool   r1b4Status04        = false;
	bool   r1b4Active04        = false;

	// Base 5

	int    r1b5Units           = 0;
	bool   r1b5Counted         = false;
	bool   r1b5Active          = false;
	bool   r1b5Defeated        = false;
	string r1b5Name00          = "Monster 1";
	int    r1b5TotalHealth00   = 200;
	int    r1b5CurrentHealth00 = r1b5TotalHealth00;
	int    r1b5Attack00        = 40;
	bool   r1b5Status00        = true;
	bool   r1b5Active00        = true;
	string r1b5Name01          = "Monster 2";
	int    r1b5TotalHealth01   = 50;
	int    r1b5CurrentHealth01 = r1b5TotalHealth01;
	int    r1b5Attack01        = 10;
	bool   r1b5Status01        = false;
	bool   r1b5Active01        = false;
	string r1b5Name02          = "Monster 3";
	int    r1b5TotalHealth02   = 50;
	int    r1b5CurrentHealth02 = r1b5TotalHealth02;
	int    r1b5Attack02        = 10;
	bool   r1b5Status02        = false;
	bool   r1b5Active02        = false;
	string r1b5Name03          = "Monster 4";
	int    r1b5TotalHealth03   = 50;
	int    r1b5CurrentHealth03 = r1b5TotalHealth03;
	int    r1b5Attack03        = 10;
	bool   r1b5Status03        = false;
	bool   r1b5Active03        = false;
	string r1b5Name04          = "Monster 5";
	int    r1b5TotalHealth04   = 50;
	int    r1b5CurrentHealth04 = r1b5TotalHealth04;
	int    r1b5Attack04        = 10;
	bool   r1b5Status04        = false;
	bool   r1b5Active04        = false;

	// Base 6

	int    r1b6Units           = 0;
	bool   r1b6Counted         = false;
	bool   r1b6Active          = false;
	bool   r1b6Defeated        = false;
	string r1b6Name00          = "Monster 1";
	int    r1b6TotalHealth00   = 50;
	int    r1b6CurrentHealth00 = r1b6TotalHealth00;
	int    r1b6Attack00        = 10;
	bool   r1b6Status00        = true;
	bool   r1b6Active00        = true;
	string r1b6Name01          = "Monster 2";
	int    r1b6TotalHealth01   = 50;
	int    r1b6CurrentHealth01 = r1b6TotalHealth01;
	int    r1b6Attack01        = 10;
	bool   r1b6Status01        = true;
	bool   r1b6Active01        = true;
	string r1b6Name02          = "Monster 3";
	int    r1b6TotalHealth02   = 50;
	int    r1b6CurrentHealth02 = r1b6TotalHealth02;
	int    r1b6Attack02        = 10;
	bool   r1b6Status02        = true;
	bool   r1b6Active02        = true;
	string r1b6Name03          = "Monster 4";
	int    r1b6TotalHealth03   = 50;
	int    r1b6CurrentHealth03 = r1b6TotalHealth03;
	int    r1b6Attack03        = 10;
	bool   r1b6Status03        = true;
	bool   r1b6Active03        = true;
	string r1b6Name04          = "Monster 5";
	int    r1b6TotalHealth04   = 50;
	int    r1b6CurrentHealth04 = r1b6TotalHealth04;
	int    r1b6Attack04        = 10;
	bool   r1b6Status04        = true;
	bool   r1b6Active04        = true;

	// Base 7

	int    r1b7Units           = 0;
	bool   r1b7Counted         = false;
	bool   r1b7Active          = false;
	bool   r1b7Defeated        = false;
	string r1b7Name00          = "Monster 1";
	int    r1b7TotalHealth00   = 200;
	int    r1b7CurrentHealth00 = r1b7TotalHealth00;
	int    r1b7Attack00        = 10;
	bool   r1b7Status00        = true;
	bool   r1b7Active00        = true;
	string r1b7Name01          = "Monster 2";
	int    r1b7TotalHealth01   = 200;
	int    r1b7CurrentHealth01 = r1b7TotalHealth01;
	int    r1b7Attack01        = 10;
	bool   r1b7Status01        = true;
	bool   r1b7Active01        = true;
	string r1b7Name02          = "Monster 3";
	int    r1b7TotalHealth02   = 200;
	int    r1b7CurrentHealth02 = r1b7TotalHealth02;
	int    r1b7Attack02        = 10;
	bool   r1b7Status02        = true;
	bool   r1b7Active02        = true;
	string r1b7Name03          = "Monster 4";
	int    r1b7TotalHealth03   = 50;
	int    r1b7CurrentHealth03 = r1b7TotalHealth03;
	int    r1b7Attack03        = 10;
	bool   r1b7Status03        = false;
	bool   r1b7Active03        = false;
	string r1b7Name04          = "Monster 5";
	int    r1b7TotalHealth04   = 50;
	int    r1b7CurrentHealth04 = r1b7TotalHealth04;
	int    r1b7Attack04        = 10;
	bool   r1b7Status04        = false;
	bool   r1b7Active04        = false;

	// Base 8

	int    r1b8Units           = 0;
	bool   r1b8Counted         = false;
	bool   r1b8Active          = false;
	bool   r1b8Defeated        = false;
	string r1b8Name00          = "Monster 1";
	int    r1b8TotalHealth00   = 50;
	int    r1b8CurrentHealth00 = r1b8TotalHealth00;
	int    r1b8Attack00        = 20;
	bool   r1b8Status00        = true;
	bool   r1b8Active00        = true;
	string r1b8Name01          = "Monster 2";
	int    r1b8TotalHealth01   = 50;
	int    r1b8CurrentHealth01 = r1b8TotalHealth01;
	int    r1b8Attack01        = 20;
	bool   r1b8Status01        = true;
	bool   r1b8Active01        = true;
	string r1b8Name02          = "Monster 3";
	int    r1b8TotalHealth02   = 50;
	int    r1b8CurrentHealth02 = r1b8TotalHealth02;
	int    r1b8Attack02        = 20;
	bool   r1b8Status02        = true;
	bool   r1b8Active02        = true;
	string r1b8Name03          = "Monster 4";
	int    r1b8TotalHealth03   = 50;
	int    r1b8CurrentHealth03 = r1b8TotalHealth03;
	int    r1b8Attack03        = 20;
	bool   r1b8Status03        = true;
	bool   r1b8Active03        = true;
	string r1b8Name04          = "Monster 5";
	int    r1b8TotalHealth04   = 50;
	int    r1b8CurrentHealth04 = r1b8TotalHealth04;
	int    r1b8Attack04        = 20;
	bool   r1b8Status04        = true;
	bool   r1b8Active04        = true;

	// Base 9 - Boss

	int    r1b9Units           = 0;
	bool   r1b9Counted         = false;
	bool   r1b9Active          = false;
	bool   r1b9Defeated        = false;
	string r1b9Name00          = "Boss 1";
	int    r1b9TotalHealth00   = 200;
	int    r1b9CurrentHealth00 = r1b9TotalHealth00;
	int    r1b9Attack00        = 40;
	bool   r1b9Status00        = true;
	bool   r1b9Active00        = true;
	string r1b9Name01          = "Monster 2";
	int    r1b9TotalHealth01   = 100;
	int    r1b9CurrentHealth01 = r1b9TotalHealth01;
	int    r1b9Attack01        = 20;
	bool   r1b9Status01        = true;
	bool   r1b9Active01        = true;
	string r1b9Name02          = "Monster 3";
	int    r1b9TotalHealth02   = 100;
	int    r1b9CurrentHealth02 = r1b9TotalHealth02;
	int    r1b9Attack02        = 20;
	bool   r1b9Status02        = true;
	bool   r1b9Active02        = true;
	string r1b9Name03          = "Monster 4";
	int    r1b9TotalHealth03   = 150;
	int    r1b9CurrentHealth03 = r1b9TotalHealth03;
	int    r1b9Attack03        = 30;
	bool   r1b9Status03        = true;
	bool   r1b9Active03        = true;
	string r1b9Name04          = "Monster 5";
	int    r1b9TotalHealth04   = 150;
	int    r1b9CurrentHealth04 = r1b9TotalHealth04;
	int    r1b9Attack04        = 30;
	bool   r1b9Status04        = true;
	bool   r1b9Active04        = true;

	// Region 2

	// Base 1

	int    r2b1Units           = 0;
	bool   r2b1Counted         = false;
	bool   r2b1Active          = true;
	bool   r2b1Defeated        = false;
	string r2b1Name00          = "Monster 1";
	int    r2b1TotalHealth00   = 50;
	int    r2b1CurrentHealth00 = r2b1TotalHealth00;
	int    r2b1Attack00        = 10;
	bool   r2b1Status00        = true;
	bool   r2b1Active00        = true;
	string r2b1Name01          = "Monster 2";
	int    r2b1TotalHealth01   = 50;
	int    r2b1CurrentHealth01 = r2b1TotalHealth01;
	int    r2b1Attack01        = 10;
	bool   r2b1Status01        = false;
	bool   r2b1Active01        = false;
	string r2b1Name02          = "Monster 3";
	int    r2b1TotalHealth02   = 50;
	int    r2b1CurrentHealth02 = r2b1TotalHealth02;
	int    r2b1Attack02        = 10;
	bool   r2b1Status02        = false;
	bool   r2b1Active02        = false;
	string r2b1Name03          = "Monster 4";
	int    r2b1TotalHealth03   = 50;
	int    r2b1CurrentHealth03 = r2b1TotalHealth03;
	int    r2b1Attack03        = 10;
	bool   r2b1Status03        = false;
	bool   r2b1Active03        = false;
	string r2b1Name04          = "Monster 5";
	int    r2b1TotalHealth04   = 50;
	int    r2b1CurrentHealth04 = r2b1TotalHealth04;
	int    r2b1Attack04        = 10;
	bool   r2b1Status04        = false;
	bool   r2b1Active04        = false;

	// Base 2

	int    r2b2Units           = 0;
	bool   r2b2Counted         = false;
	bool   r2b2Active          = false;
	bool   r2b2Defeated        = false;
	string r2b2Name00          = "Monster 1";
	int    r2b2TotalHealth00   = 50;
	int    r2b2CurrentHealth00 = r2b2TotalHealth00;
	int    r2b2Attack00        = 10;
	bool   r2b2Status00        = true;
	bool   r2b2Active00        = true;
	string r2b2Name01          = "Monster 2";
	int    r2b2TotalHealth01   = 50;
	int    r2b2CurrentHealth01 = r2b2TotalHealth01;
	int    r2b2Attack01        = 10;
	bool   r2b2Status01        = true;
	bool   r2b2Active01        = true;
	string r2b2Name02          = "Monster 3";
	int    r2b2TotalHealth02   = 50;
	int    r2b2CurrentHealth02 = r2b2TotalHealth02;
	int    r2b2Attack02        = 10;
	bool   r2b2Status02        = false;
	bool   r2b2Active02        = false;
	string r2b2Name03          = "Monster 4";
	int    r2b2TotalHealth03   = 50;
	int    r2b2CurrentHealth03 = r2b2TotalHealth03;
	int    r2b2Attack03        = 10;
	bool   r2b2Status03        = false;
	bool   r2b2Active03        = false;
	string r2b2Name04          = "Monster 5";
	int    r2b2TotalHealth04   = 50;
	int    r2b2CurrentHealth04 = r2b2TotalHealth04;
	int    r2b2Attack04        = 10;
	bool   r2b2Status04        = false;
	bool   r2b2Active04        = false;

	// Base 3

	int    r2b3Units           = 0;
	bool   r2b3Counted         = false;
	bool   r2b3Active          = false;
	bool   r2b3Defeated        = false;
	string r2b3Name00          = "Monster 1";
	int    r2b3TotalHealth00   = 50;
	int    r2b3CurrentHealth00 = r2b3TotalHealth00;
	int    r2b3Attack00        = 10;
	bool   r2b3Status00        = true;
	bool   r2b3Active00        = true;
	string r2b3Name01          = "Monster 2";
	int    r2b3TotalHealth01   = 50;
	int    r2b3CurrentHealth01 = r2b3TotalHealth01;
	int    r2b3Attack01        = 10;
	bool   r2b3Status01        = true;
	bool   r2b3Active01        = true;
	string r2b3Name02          = "Monster 3";
	int    r2b3TotalHealth02   = 50;
	int    r2b3CurrentHealth02 = r2b3TotalHealth02;
	int    r2b3Attack02        = 10;
	bool   r2b3Status02        = true;
	bool   r2b3Active02        = true;
	string r2b3Name03          = "Monster 4";
	int    r2b3TotalHealth03   = 50;
	int    r2b3CurrentHealth03 = r2b3TotalHealth03;
	int    r2b3Attack03        = 10;
	bool   r2b3Status03        = false;
	bool   r2b3Active03        = false;
	string r2b3Name04          = "Monster 5";
	int    r2b3TotalHealth04   = 50;
	int    r2b3CurrentHealth04 = r2b3TotalHealth04;
	int    r2b3Attack04        = 10;
	bool   r2b3Status04        = false;
	bool   r2b3Active04        = false;

	// Base 4

	int    r2b4Units           = 0;
	bool   r2b4Counted         = false;
	bool   r2b4Active          = false;
	bool   r2b4Defeated        = false;
	string r2b4Name00          = "Monster 1";
	int    r2b4TotalHealth00   = 100;
	int    r2b4CurrentHealth00 = r2b4TotalHealth00;
	int    r2b4Attack00        = 10;
	bool   r2b4Status00        = true;
	bool   r2b4Active00        = true;
	string r2b4Name01          = "Monster 2";
	int    r2b4TotalHealth01   = 150;
	int    r2b4CurrentHealth01 = r2b4TotalHealth01;
	int    r2b4Attack01        = 20;
	bool   r2b4Status01        = true;
	bool   r2b4Active01        = true;
	string r2b4Name02          = "Monster 3";
	int    r2b4TotalHealth02   = 100;
	int    r2b4CurrentHealth02 = r2b4TotalHealth02;
	int    r2b4Attack02        = 10;
	bool   r2b4Status02        = true;
	bool   r2b4Active02        = true;
	string r2b4Name03          = "Monster 4";
	int    r2b4TotalHealth03   = 50;
	int    r2b4CurrentHealth03 = r2b4TotalHealth03;
	int    r2b4Attack03        = 10;
	bool   r2b4Status03        = false;
	bool   r2b4Active03        = false;
	string r2b4Name04          = "Monster 5";
	int    r2b4TotalHealth04   = 50;
	int    r2b4CurrentHealth04 = r2b4TotalHealth04;
	int    r2b4Attack04        = 10;
	bool   r2b4Status04        = false;
	bool   r2b4Active04        = false;

	// Base 5

	int    r2b5Units           = 0;
	bool   r2b5Counted         = false;
	bool   r2b5Active          = false;
	bool   r2b5Defeated        = false;
	string r2b5Name00          = "Monster 1";
	int    r2b5TotalHealth00   = 200;
	int    r2b5CurrentHealth00 = r1b5TotalHealth00;
	int    r2b5Attack00        = 40;
	bool   r2b5Status00        = true;
	bool   r2b5Active00        = true;
	string r2b5Name01          = "Monster 2";
	int    r2b5TotalHealth01   = 50;
	int    r2b5CurrentHealth01 = r2b5TotalHealth01;
	int    r2b5Attack01        = 10;
	bool   r2b5Status01        = false;
	bool   r2b5Active01        = false;
	string r2b5Name02          = "Monster 3";
	int    r2b5TotalHealth02   = 50;
	int    r2b5CurrentHealth02 = r2b5TotalHealth02;
	int    r2b5Attack02        = 10;
	bool   r2b5Status02        = false;
	bool   r2b5Active02        = false;
	string r2b5Name03          = "Monster 4";
	int    r2b5TotalHealth03   = 50;
	int    r2b5CurrentHealth03 = r2b5TotalHealth03;
	int    r2b5Attack03        = 10;
	bool   r2b5Status03        = false;
	bool   r2b5Active03        = false;
	string r2b5Name04          = "Monster 5";
	int    r2b5TotalHealth04   = 50;
	int    r2b5CurrentHealth04 = r2b5TotalHealth04;
	int    r2b5Attack04        = 10;
	bool   r2b5Status04        = false;
	bool   r2b5Active04        = false;

	// Base 6

	int    r2b6Units           = 0;
	bool   r2b6Counted         = false;
	bool   r2b6Active          = false;
	bool   r2b6Defeated        = false;
	string r2b6Name00          = "Monster 1";
	int    r2b6TotalHealth00   = 50;
	int    r2b6CurrentHealth00 = r2b6TotalHealth00;
	int    r2b6Attack00        = 10;
	bool   r2b6Status00        = true;
	bool   r2b6Active00        = true;
	string r2b6Name01          = "Monster 2";
	int    r2b6TotalHealth01   = 50;
	int    r2b6CurrentHealth01 = r2b6TotalHealth01;
	int    r2b6Attack01        = 10;
	bool   r2b6Status01        = true;
	bool   r2b6Active01        = true;
	string r2b6Name02          = "Monster 3";
	int    r2b6TotalHealth02   = 50;
	int    r2b6CurrentHealth02 = r2b6TotalHealth02;
	int    r2b6Attack02        = 10;
	bool   r2b6Status02        = true;
	bool   r2b6Active02        = true;
	string r2b6Name03          = "Monster 4";
	int    r2b6TotalHealth03   = 50;
	int    r2b6CurrentHealth03 = r2b6TotalHealth03;
	int    r2b6Attack03        = 10;
	bool   r2b6Status03        = true;
	bool   r2b6Active03        = true;
	string r2b6Name04          = "Monster 5";
	int    r2b6TotalHealth04   = 50;
	int    r2b6CurrentHealth04 = r2b6TotalHealth04;
	int    r2b6Attack04        = 10;
	bool   r2b6Status04        = true;
	bool   r2b6Active04        = true;

	// Base 7

	int    r2b7Units           = 0;
	bool   r2b7Counted         = false;
	bool   r2b7Active          = false;
	bool   r2b7Defeated        = false;
	string r2b7Name00          = "Monster 1";
	int    r2b7TotalHealth00   = 200;
	int    r2b7CurrentHealth00 = r2b7TotalHealth00;
	int    r2b7Attack00        = 10;
	bool   r2b7Status00        = true;
	bool   r2b7Active00        = true;
	string r2b7Name01          = "Monster 2";
	int    r2b7TotalHealth01   = 200;
	int    r2b7CurrentHealth01 = r2b7TotalHealth01;
	int    r2b7Attack01        = 10;
	bool   r2b7Status01        = true;
	bool   r2b7Active01        = true;
	string r2b7Name02          = "Monster 3";
	int    r2b7TotalHealth02   = 200;
	int    r2b7CurrentHealth02 = r2b7TotalHealth02;
	int    r2b7Attack02        = 10;
	bool   r2b7Status02        = true;
	bool   r2b7Active02        = true;
	string r2b7Name03          = "Monster 4";
	int    r2b7TotalHealth03   = 50;
	int    r2b7CurrentHealth03 = r2b7TotalHealth03;
	int    r2b7Attack03        = 10;
	bool   r2b7Status03        = false;
	bool   r2b7Active03        = false;
	string r2b7Name04          = "Monster 5";
	int    r2b7TotalHealth04   = 50;
	int    r2b7CurrentHealth04 = r2b7TotalHealth04;
	int    r2b7Attack04        = 10;
	bool   r2b7Status04        = false;
	bool   r2b7Active04        = false;

	// Base 8

	int    r2b8Units           = 0;
	bool   r2b8Counted         = false;
	bool   r2b8Active          = false;
	bool   r2b8Defeated        = false;
	string r2b8Name00          = "Monster 1";
	int    r2b8TotalHealth00   = 50;
	int    r2b8CurrentHealth00 = r2b8TotalHealth00;
	int    r2b8Attack00        = 20;
	bool   r2b8Status00        = true;
	bool   r2b8Active00        = true;
	string r2b8Name01          = "Monster 2";
	int    r2b8TotalHealth01   = 50;
	int    r2b8CurrentHealth01 = r2b8TotalHealth01;
	int    r2b8Attack01        = 20;
	bool   r2b8Status01        = true;
	bool   r2b8Active01        = true;
	string r2b8Name02          = "Monster 3";
	int    r2b8TotalHealth02   = 50;
	int    r2b8CurrentHealth02 = r2b8TotalHealth02;
	int    r2b8Attack02        = 20;
	bool   r2b8Status02        = true;
	bool   r2b8Active02        = true;
	string r2b8Name03          = "Monster 4";
	int    r2b8TotalHealth03   = 50;
	int    r2b8CurrentHealth03 = r2b8TotalHealth03;
	int    r2b8Attack03        = 20;
	bool   r2b8Status03        = true;
	bool   r2b8Active03        = true;
	string r2b8Name04          = "Monster 5";
	int    r2b8TotalHealth04   = 50;
	int    r2b8CurrentHealth04 = r2b8TotalHealth04;
	int    r2b8Attack04        = 20;
	bool   r2b8Status04        = true;
	bool   r2b8Active04        = true;

	// Base 9 - Boss

	int    r2b9Units           = 0;
	bool   r2b9Counted         = false;
	bool   r2b9Active          = false;
	bool   r2b9Defeated        = false;
	string r2b9Name00          = "Boss 1";
	int    r2b9TotalHealth00   = 200;
	int    r2b9CurrentHealth00 = r2b9TotalHealth00;
	int    r2b9Attack00        = 40;
	bool   r2b9Status00        = true;
	bool   r2b9Active00        = true;
	string r2b9Name01          = "Monster 2";
	int    r2b9TotalHealth01   = 100;
	int    r2b9CurrentHealth01 = r2b9TotalHealth01;
	int    r2b9Attack01        = 20;
	bool   r2b9Status01        = true;
	bool   r2b9Active01        = true;
	string r2b9Name02          = "Monster 3";
	int    r2b9TotalHealth02   = 100;
	int    r2b9CurrentHealth02 = r2b9TotalHealth02;
	int    r2b9Attack02        = 20;
	bool   r2b9Status02        = true;
	bool   r2b9Active02        = true;
	string r2b9Name03          = "Monster 4";
	int    r2b9TotalHealth03   = 150;
	int    r2b9CurrentHealth03 = r2b9TotalHealth03;
	int    r2b9Attack03        = 30;
	bool   r2b9Status03        = true;
	bool   r2b9Active03        = true;
	string r2b9Name04          = "Monster 5";
	int    r2b9TotalHealth04   = 150;
	int    r2b9CurrentHealth04 = r2b9TotalHealth04;
	int    r2b9Attack04        = 30;
	bool   r2b9Status04        = true;
	bool   r2b9Active04        = true;

	// Region 3

	// Base 1

	int    r3b1Units           = 0;
	bool   r3b1Counted         = false;
	bool   r3b1Active          = true;
	bool   r3b1Defeated        = false;
	string r3b1Name00          = "Monster 1";
	int    r3b1TotalHealth00   = 50;
	int    r3b1CurrentHealth00 = r3b1TotalHealth00;
	int    r3b1Attack00        = 10;
	bool   r3b1Status00        = true;
	bool   r3b1Active00        = true;
	string r3b1Name01          = "Monster 2";
	int    r3b1TotalHealth01   = 50;
	int    r3b1CurrentHealth01 = r3b1TotalHealth01;
	int    r3b1Attack01        = 10;
	bool   r3b1Status01        = false;
	bool   r3b1Active01        = false;
	string r3b1Name02          = "Monster 3";
	int    r3b1TotalHealth02   = 50;
	int    r3b1CurrentHealth02 = r3b1TotalHealth02;
	int    r3b1Attack02        = 10;
	bool   r3b1Status02        = false;
	bool   r3b1Active02        = false;
	string r3b1Name03          = "Monster 4";
	int    r3b1TotalHealth03   = 50;
	int    r3b1CurrentHealth03 = r3b1TotalHealth03;
	int    r3b1Attack03        = 10;
	bool   r3b1Status03        = false;
	bool   r3b1Active03        = false;
	string r3b1Name04          = "Monster 5";
	int    r3b1TotalHealth04   = 50;
	int    r3b1CurrentHealth04 = r3b1TotalHealth04;
	int    r3b1Attack04        = 10;
	bool   r3b1Status04        = false;
	bool   r3b1Active04        = false;

	// Base 2

	int    r3b2Units           = 0;
	bool   r3b2Counted         = false;
	bool   r3b2Active          = false;
	bool   r3b2Defeated        = false;
	string r3b2Name00          = "Monster 1";
	int    r3b2TotalHealth00   = 50;
	int    r3b2CurrentHealth00 = r3b2TotalHealth00;
	int    r3b2Attack00        = 10;
	bool   r3b2Status00        = true;
	bool   r3b2Active00        = true;
	string r3b2Name01          = "Monster 2";
	int    r3b2TotalHealth01   = 50;
	int    r3b2CurrentHealth01 = r3b2TotalHealth01;
	int    r3b2Attack01        = 10;
	bool   r3b2Status01        = true;
	bool   r3b2Active01        = true;
	string r3b2Name02          = "Monster 3";
	int    r3b2TotalHealth02   = 50;
	int    r3b2CurrentHealth02 = r3b2TotalHealth02;
	int    r3b2Attack02        = 10;
	bool   r3b2Status02        = false;
	bool   r3b2Active02        = false;
	string r3b2Name03          = "Monster 4";
	int    r3b2TotalHealth03   = 50;
	int    r3b2CurrentHealth03 = r3b2TotalHealth03;
	int    r3b2Attack03        = 10;
	bool   r3b2Status03        = false;
	bool   r3b2Active03        = false;
	string r3b2Name04          = "Monster 5";
	int    r3b2TotalHealth04   = 50;
	int    r3b2CurrentHealth04 = r3b2TotalHealth04;
	int    r3b2Attack04        = 10;
	bool   r3b2Status04        = false;
	bool   r3b2Active04        = false;

	// Base 3

	int    r3b3Units           = 0;
	bool   r3b3Counted         = false;
	bool   r3b3Active          = false;
	bool   r3b3Defeated        = false;
	string r3b3Name00          = "Monster 1";
	int    r3b3TotalHealth00   = 50;
	int    r3b3CurrentHealth00 = r3b3TotalHealth00;
	int    r3b3Attack00        = 10;
	bool   r3b3Status00        = true;
	bool   r3b3Active00        = true;
	string r3b3Name01          = "Monster 2";
	int    r3b3TotalHealth01   = 50;
	int    r3b3CurrentHealth01 = r3b3TotalHealth01;
	int    r3b3Attack01        = 10;
	bool   r3b3Status01        = true;
	bool   r3b3Active01        = true;
	string r3b3Name02          = "Monster 3";
	int    r3b3TotalHealth02   = 50;
	int    r3b3CurrentHealth02 = r3b3TotalHealth02;
	int    r3b3Attack02        = 10;
	bool   r3b3Status02        = true;
	bool   r3b3Active02        = true;
	string r3b3Name03          = "Monster 4";
	int    r3b3TotalHealth03   = 50;
	int    r3b3CurrentHealth03 = r3b3TotalHealth03;
	int    r3b3Attack03        = 10;
	bool   r3b3Status03        = false;
	bool   r3b3Active03        = false;
	string r3b3Name04          = "Monster 5";
	int    r3b3TotalHealth04   = 50;
	int    r3b3CurrentHealth04 = r3b3TotalHealth04;
	int    r3b3Attack04        = 10;
	bool   r3b3Status04        = false;
	bool   r3b3Active04        = false;

	// Base 4

	int    r3b4Units           = 0;
	bool   r3b4Counted         = false;
	bool   r3b4Active          = false;
	bool   r3b4Defeated        = false;
	string r3b4Name00          = "Monster 1";
	int    r3b4TotalHealth00   = 100;
	int    r3b4CurrentHealth00 = r3b4TotalHealth00;
	int    r3b4Attack00        = 10;
	bool   r3b4Status00        = true;
	bool   r3b4Active00        = true;
	string r3b4Name01          = "Monster 2";
	int    r3b4TotalHealth01   = 150;
	int    r3b4CurrentHealth01 = r3b4TotalHealth01;
	int    r3b4Attack01        = 20;
	bool   r3b4Status01        = true;
	bool   r3b4Active01        = true;
	string r3b4Name02          = "Monster 3";
	int    r3b4TotalHealth02   = 100;
	int    r3b4CurrentHealth02 = r3b4TotalHealth02;
	int    r3b4Attack02        = 10;
	bool   r3b4Status02        = true;
	bool   r3b4Active02        = true;
	string r3b4Name03          = "Monster 4";
	int    r3b4TotalHealth03   = 50;
	int    r3b4CurrentHealth03 = r3b4TotalHealth03;
	int    r3b4Attack03        = 10;
	bool   r3b4Status03        = false;
	bool   r3b4Active03        = false;
	string r3b4Name04          = "Monster 5";
	int    r3b4TotalHealth04   = 50;
	int    r3b4CurrentHealth04 = r3b4TotalHealth04;
	int    r3b4Attack04        = 10;
	bool   r3b4Status04        = false;
	bool   r3b4Active04        = false;

	// Base 5

	int    r3b5Units           = 0;
	bool   r3b5Counted         = false;
	bool   r3b5Active          = false;
	bool   r3b5Defeated        = false;
	string r3b5Name00          = "Monster 1";
	int    r3b5TotalHealth00   = 200;
	int    r3b5CurrentHealth00 = r3b5TotalHealth00;
	int    r3b5Attack00        = 40;
	bool   r3b5Status00        = true;
	bool   r3b5Active00        = true;
	string r3b5Name01          = "Monster 2";
	int    r3b5TotalHealth01   = 50;
	int    r3b5CurrentHealth01 = r3b5TotalHealth01;
	int    r3b5Attack01        = 10;
	bool   r3b5Status01        = false;
	bool   r3b5Active01        = false;
	string r3b5Name02          = "Monster 3";
	int    r3b5TotalHealth02   = 50;
	int    r3b5CurrentHealth02 = r3b5TotalHealth02;
	int    r3b5Attack02        = 10;
	bool   r3b5Status02        = false;
	bool   r3b5Active02        = false;
	string r3b5Name03          = "Monster 4";
	int    r3b5TotalHealth03   = 50;
	int    r3b5CurrentHealth03 = r3b5TotalHealth03;
	int    r3b5Attack03        = 10;
	bool   r3b5Status03        = false;
	bool   r3b5Active03        = false;
	string r3b5Name04          = "Monster 5";
	int    r3b5TotalHealth04   = 50;
	int    r3b5CurrentHealth04 = r3b5TotalHealth04;
	int    r3b5Attack04        = 10;
	bool   r3b5Status04        = false;
	bool   r3b5Active04        = false;

	// Base 6

	int    r3b6Units           = 0;
	bool   r3b6Counted         = false;
	bool   r3b6Active          = false;
	bool   r3b6Defeated        = false;
	string r3b6Name00          = "Monster 1";
	int    r3b6TotalHealth00   = 50;
	int    r3b6CurrentHealth00 = r3b6TotalHealth00;
	int    r3b6Attack00        = 10;
	bool   r3b6Status00        = true;
	bool   r3b6Active00        = true;
	string r3b6Name01          = "Monster 2";
	int    r3b6TotalHealth01   = 50;
	int    r3b6CurrentHealth01 = r3b6TotalHealth01;
	int    r3b6Attack01        = 10;
	bool   r3b6Status01        = true;
	bool   r3b6Active01        = true;
	string r3b6Name02          = "Monster 3";
	int    r3b6TotalHealth02   = 50;
	int    r3b6CurrentHealth02 = r3b6TotalHealth02;
	int    r3b6Attack02        = 10;
	bool   r3b6Status02        = true;
	bool   r3b6Active02        = true;
	string r3b6Name03          = "Monster 4";
	int    r3b6TotalHealth03   = 50;
	int    r3b6CurrentHealth03 = r3b6TotalHealth03;
	int    r3b6Attack03        = 10;
	bool   r3b6Status03        = true;
	bool   r3b6Active03        = true;
	string r3b6Name04          = "Monster 5";
	int    r3b6TotalHealth04   = 50;
	int    r3b6CurrentHealth04 = r3b6TotalHealth04;
	int    r3b6Attack04        = 10;
	bool   r3b6Status04        = true;
	bool   r3b6Active04        = true;

	// Base 7

	int    r3b7Units           = 0;
	bool   r3b7Counted         = false;
	bool   r3b7Active          = false;
	bool   r3b7Defeated        = false;
	string r3b7Name00          = "Monster 1";
	int    r3b7TotalHealth00   = 200;
	int    r3b7CurrentHealth00 = r3b7TotalHealth00;
	int    r3b7Attack00        = 10;
	bool   r3b7Status00        = true;
	bool   r3b7Active00        = true;
	string r3b7Name01          = "Monster 2";
	int    r3b7TotalHealth01   = 200;
	int    r3b7CurrentHealth01 = r3b7TotalHealth01;
	int    r3b7Attack01        = 10;
	bool   r3b7Status01        = true;
	bool   r3b7Active01        = true;
	string r3b7Name02          = "Monster 3";
	int    r3b7TotalHealth02   = 200;
	int    r3b7CurrentHealth02 = r3b7TotalHealth02;
	int    r3b7Attack02        = 10;
	bool   r3b7Status02        = true;
	bool   r3b7Active02        = true;
	string r3b7Name03          = "Monster 4";
	int    r3b7TotalHealth03   = 50;
	int    r3b7CurrentHealth03 = r3b7TotalHealth03;
	int    r3b7Attack03        = 10;
	bool   r3b7Status03        = false;
	bool   r3b7Active03        = false;
	string r3b7Name04          = "Monster 5";
	int    r3b7TotalHealth04   = 50;
	int    r3b7CurrentHealth04 = r3b7TotalHealth04;
	int    r3b7Attack04        = 10;
	bool   r3b7Status04        = false;
	bool   r3b7Active04        = false;

	// Base 8

	int    r3b8Units           = 0;
	bool   r3b8Counted         = false;
	bool   r3b8Active          = false;
	bool   r3b8Defeated        = false;
	string r3b8Name00          = "Monster 1";
	int    r3b8TotalHealth00   = 50;
	int    r3b8CurrentHealth00 = r3b8TotalHealth00;
	int    r3b8Attack00        = 20;
	bool   r3b8Status00        = true;
	bool   r3b8Active00        = true;
	string r3b8Name01          = "Monster 2";
	int    r3b8TotalHealth01   = 50;
	int    r3b8CurrentHealth01 = r3b8TotalHealth01;
	int    r3b8Attack01        = 20;
	bool   r3b8Status01        = true;
	bool   r3b8Active01        = true;
	string r3b8Name02          = "Monster 3";
	int    r3b8TotalHealth02   = 50;
	int    r3b8CurrentHealth02 = r3b8TotalHealth02;
	int    r3b8Attack02        = 20;
	bool   r3b8Status02        = true;
	bool   r3b8Active02        = true;
	string r3b8Name03          = "Monster 4";
	int    r3b8TotalHealth03   = 50;
	int    r3b8CurrentHealth03 = r3b8TotalHealth03;
	int    r3b8Attack03        = 20;
	bool   r3b8Status03        = true;
	bool   r3b8Active03        = true;
	string r3b8Name04          = "Monster 5";
	int    r3b8TotalHealth04   = 50;
	int    r3b8CurrentHealth04 = r3b8TotalHealth04;
	int    r3b8Attack04        = 20;
	bool   r3b8Status04        = true;
	bool   r3b8Active04        = true;

	// Base 9 - Boss

	int    r3b9Units           = 0;
	bool   r3b9Counted         = false;
	bool   r3b9Active          = false;
	bool   r3b9Defeated        = false;
	string r3b9Name00          = "Boss 1";
	int    r3b9TotalHealth00   = 200;
	int    r3b9CurrentHealth00 = r3b9TotalHealth00;
	int    r3b9Attack00        = 40;
	bool   r3b9Status00        = true;
	bool   r3b9Active00        = true;
	string r3b9Name01          = "Monster 2";
	int    r3b9TotalHealth01   = 100;
	int    r3b9CurrentHealth01 = r3b9TotalHealth01;
	int    r3b9Attack01        = 20;
	bool   r3b9Status01        = true;
	bool   r3b9Active01        = true;
	string r3b9Name02          = "Monster 3";
	int    r3b9TotalHealth02   = 100;
	int    r3b9CurrentHealth02 = r3b9TotalHealth02;
	int    r3b9Attack02        = 20;
	bool   r3b9Status02        = true;
	bool   r3b9Active02        = true;
	string r3b9Name03          = "Monster 4";
	int    r3b9TotalHealth03   = 150;
	int    r3b9CurrentHealth03 = r3b9TotalHealth03;
	int    r3b9Attack03        = 30;
	bool   r3b9Status03        = true;
	bool   r3b9Active03        = true;
	string r3b9Name04          = "Monster 5";
	int    r3b9TotalHealth04   = 150;
	int    r3b9CurrentHealth04 = r3b9TotalHealth04;
	int    r3b9Attack04        = 30;
	bool   r3b9Status04        = true;
	bool   r3b9Active04        = true;

	// Region 4

	// Base 1

	int    r4b1Units           = 0;
	bool   r4b1Counted         = false;
	bool   r4b1Active          = true;
	bool   r4b1Defeated        = false;
	string r4b1Name00          = "Monster 1";
	int    r4b1TotalHealth00   = 50;
	int    r4b1CurrentHealth00 = r4b1TotalHealth00;
	int    r4b1Attack00        = 10;
	bool   r4b1Status00        = true;
	bool   r4b1Active00        = true;
	string r4b1Name01          = "Monster 2";
	int    r4b1TotalHealth01   = 50;
	int    r4b1CurrentHealth01 = r4b1TotalHealth01;
	int    r4b1Attack01        = 10;
	bool   r4b1Status01        = false;
	bool   r4b1Active01        = false;
	string r4b1Name02          = "Monster 3";
	int    r4b1TotalHealth02   = 50;
	int    r4b1CurrentHealth02 = r4b1TotalHealth02;
	int    r4b1Attack02        = 10;
	bool   r4b1Status02        = false;
	bool   r4b1Active02        = false;
	string r4b1Name03          = "Monster 4";
	int    r4b1TotalHealth03   = 50;
	int    r4b1CurrentHealth03 = r4b1TotalHealth03;
	int    r4b1Attack03        = 10;
	bool   r4b1Status03        = false;
	bool   r4b1Active03        = false;
	string r4b1Name04          = "Monster 5";
	int    r4b1TotalHealth04   = 50;
	int    r4b1CurrentHealth04 = r4b1TotalHealth04;
	int    r4b1Attack04        = 10;
	bool   r4b1Status04        = false;
	bool   r4b1Active04        = false;

	// Base 2

	int    r4b2Units           = 0;
	bool   r4b2Counted         = false;
	bool   r4b2Active          = false;
	bool   r4b2Defeated        = false;
	string r4b2Name00          = "Monster 1";
	int    r4b2TotalHealth00   = 50;
	int    r4b2CurrentHealth00 = r4b2TotalHealth00;
	int    r4b2Attack00        = 10;
	bool   r4b2Status00        = true;
	bool   r4b2Active00        = true;
	string r4b2Name01          = "Monster 2";
	int    r4b2TotalHealth01   = 50;
	int    r4b2CurrentHealth01 = r4b2TotalHealth01;
	int    r4b2Attack01        = 10;
	bool   r4b2Status01        = true;
	bool   r4b2Active01        = true;
	string r4b2Name02          = "Monster 3";
	int    r4b2TotalHealth02   = 50;
	int    r4b2CurrentHealth02 = r4b2TotalHealth02;
	int    r4b2Attack02        = 10;
	bool   r4b2Status02        = false;
	bool   r4b2Active02        = false;
	string r4b2Name03          = "Monster 4";
	int    r4b2TotalHealth03   = 50;
	int    r4b2CurrentHealth03 = r4b2TotalHealth03;
	int    r4b2Attack03        = 10;
	bool   r4b2Status03        = false;
	bool   r4b2Active03        = false;
	string r4b2Name04          = "Monster 5";
	int    r4b2TotalHealth04   = 50;
	int    r4b2CurrentHealth04 = r4b2TotalHealth04;
	int    r4b2Attack04        = 10;
	bool   r4b2Status04        = false;
	bool   r4b2Active04        = false;

	// Base 3

	int    r4b3Units           = 0;
	bool   r4b3Counted         = false;
	bool   r4b3Active          = false;
	bool   r4b3Defeated        = false;
	string r4b3Name00          = "Monster 1";
	int    r4b3TotalHealth00   = 50;
	int    r4b3CurrentHealth00 = r1b1TotalHealth00;
	int    r4b3Attack00        = 10;
	bool   r4b3Status00        = true;
	bool   r4b3Active00        = true;
	string r4b3Name01          = "Monster 2";
	int    r4b3TotalHealth01   = 50;
	int    r4b3CurrentHealth01 = r4b3TotalHealth01;
	int    r4b3Attack01        = 10;
	bool   r4b3Status01        = true;
	bool   r4b3Active01        = true;
	string r4b3Name02          = "Monster 3";
	int    r4b3TotalHealth02   = 50;
	int    r4b3CurrentHealth02 = r4b3TotalHealth02;
	int    r4b3Attack02        = 10;
	bool   r4b3Status02        = true;
	bool   r4b3Active02        = true;
	string r4b3Name03          = "Monster 4";
	int    r4b3TotalHealth03   = 50;
	int    r4b3CurrentHealth03 = r4b3TotalHealth03;
	int    r4b3Attack03        = 10;
	bool   r4b3Status03        = false;
	bool   r4b3Active03        = false;
	string r4b3Name04          = "Monster 5";
	int    r4b3TotalHealth04   = 50;
	int    r4b3CurrentHealth04 = r4b3TotalHealth04;
	int    r4b3Attack04        = 10;
	bool   r4b3Status04        = false;
	bool   r4b3Active04        = false;

	// Base 4

	int    r4b4Units           = 0;
	bool   r4b4Counted         = false;
	bool   r4b4Active          = false;
	bool   r4b4Defeated        = false;
	string r4b4Name00          = "Monster 1";
	int    r4b4TotalHealth00   = 100;
	int    r4b4CurrentHealth00 = r4b4TotalHealth00;
	int    r4b4Attack00        = 10;
	bool   r4b4Status00        = true;
	bool   r4b4Active00        = true;
	string r4b4Name01          = "Monster 2";
	int    r4b4TotalHealth01   = 150;
	int    r4b4CurrentHealth01 = r4b4TotalHealth01;
	int    r4b4Attack01        = 20;
	bool   r4b4Status01        = true;
	bool   r4b4Active01        = true;
	string r4b4Name02          = "Monster 3";
	int    r4b4TotalHealth02   = 100;
	int    r4b4CurrentHealth02 = r4b4TotalHealth02;
	int    r4b4Attack02        = 10;
	bool   r4b4Status02        = true;
	bool   r4b4Active02        = true;
	string r4b4Name03          = "Monster 4";
	int    r4b4TotalHealth03   = 50;
	int    r4b4CurrentHealth03 = r4b4TotalHealth03;
	int    r4b4Attack03        = 10;
	bool   r4b4Status03        = false;
	bool   r4b4Active03        = false;
	string r4b4Name04          = "Monster 5";
	int    r4b4TotalHealth04   = 50;
	int    r4b4CurrentHealth04 = r4b4TotalHealth04;
	int    r4b4Attack04        = 10;
	bool   r4b4Status04        = false;
	bool   r4b4Active04        = false;

	// Base 5

	int    r4b5Units           = 0;
	bool   r4b5Counted         = false;
	bool   r4b5Active          = false;
	bool   r4b5Defeated        = false;
	string r4b5Name00          = "Monster 1";
	int    r4b5TotalHealth00   = 200;
	int    r4b5CurrentHealth00 = r4b5TotalHealth00;
	int    r4b5Attack00        = 40;
	bool   r4b5Status00        = true;
	bool   r4b5Active00        = true;
	string r4b5Name01          = "Monster 2";
	int    r4b5TotalHealth01   = 50;
	int    r4b5CurrentHealth01 = r4b5TotalHealth01;
	int    r4b5Attack01        = 10;
	bool   r4b5Status01        = false;
	bool   r4b5Active01        = false;
	string r4b5Name02          = "Monster 3";
	int    r4b5TotalHealth02   = 50;
	int    r4b5CurrentHealth02 = r4b5TotalHealth02;
	int    r4b5Attack02        = 10;
	bool   r4b5Status02        = false;
	bool   r4b5Active02        = false;
	string r4b5Name03          = "Monster 4";
	int    r4b5TotalHealth03   = 50;
	int    r4b5CurrentHealth03 = r4b5TotalHealth03;
	int    r4b5Attack03        = 10;
	bool   r4b5Status03        = false;
	bool   r4b5Active03        = false;
	string r4b5Name04          = "Monster 5";
	int    r4b5TotalHealth04   = 50;
	int    r4b5CurrentHealth04 = r4b5TotalHealth04;
	int    r4b5Attack04        = 10;
	bool   r4b5Status04        = false;
	bool   r4b5Active04        = false;

	// Base 6

	int    r4b6Units           = 0;
	bool   r4b6Counted         = false;
	bool   r4b6Active          = false;
	bool   r4b6Defeated        = false;
	string r4b6Name00          = "Monster 1";
	int    r4b6TotalHealth00   = 50;
	int    r4b6CurrentHealth00 = r4b6TotalHealth00;
	int    r4b6Attack00        = 10;
	bool   r4b6Status00        = true;
	bool   r4b6Active00        = true;
	string r4b6Name01          = "Monster 2";
	int    r4b6TotalHealth01   = 50;
	int    r4b6CurrentHealth01 = r4b6TotalHealth01;
	int    r4b6Attack01        = 10;
	bool   r4b6Status01        = true;
	bool   r4b6Active01        = true;
	string r4b6Name02          = "Monster 3";
	int    r4b6TotalHealth02   = 50;
	int    r4b6CurrentHealth02 = r4b6TotalHealth02;
	int    r4b6Attack02        = 10;
	bool   r4b6Status02        = true;
	bool   r4b6Active02        = true;
	string r4b6Name03          = "Monster 4";
	int    r4b6TotalHealth03   = 50;
	int    r4b6CurrentHealth03 = r4b6TotalHealth03;
	int    r4b6Attack03        = 10;
	bool   r4b6Status03        = true;
	bool   r4b6Active03        = true;
	string r4b6Name04          = "Monster 5";
	int    r4b6TotalHealth04   = 50;
	int    r4b6CurrentHealth04 = r4b6TotalHealth04;
	int    r4b6Attack04        = 10;
	bool   r4b6Status04        = true;
	bool   r4b6Active04        = true;

	// Base 7

	int    r4b7Units           = 0;
	bool   r4b7Counted         = false;
	bool   r4b7Active          = false;
	bool   r4b7Defeated        = false;
	string r4b7Name00          = "Monster 1";
	int    r4b7TotalHealth00   = 200;
	int    r4b7CurrentHealth00 = r4b7TotalHealth00;
	int    r4b7Attack00        = 10;
	bool   r4b7Status00        = true;
	bool   r4b7Active00        = true;
	string r4b7Name01          = "Monster 2";
	int    r4b7TotalHealth01   = 200;
	int    r4b7CurrentHealth01 = r4b7TotalHealth01;
	int    r4b7Attack01        = 10;
	bool   r4b7Status01        = true;
	bool   r4b7Active01        = true;
	string r4b7Name02          = "Monster 3";
	int    r4b7TotalHealth02   = 200;
	int    r4b7CurrentHealth02 = r4b7TotalHealth02;
	int    r4b7Attack02        = 10;
	bool   r4b7Status02        = true;
	bool   r4b7Active02        = true;
	string r4b7Name03          = "Monster 4";
	int    r4b7TotalHealth03   = 50;
	int    r4b7CurrentHealth03 = r4b7TotalHealth03;
	int    r4b7Attack03        = 10;
	bool   r4b7Status03        = false;
	bool   r4b7Active03        = false;
	string r4b7Name04          = "Monster 5";
	int    r4b7TotalHealth04   = 50;
	int    r4b7CurrentHealth04 = r4b7TotalHealth04;
	int    r4b7Attack04        = 10;
	bool   r4b7Status04        = false;
	bool   r4b7Active04        = false;

	// Base 8

	int    r4b8Units           = 0;
	bool   r4b8Counted         = false;
	bool   r4b8Active          = false;
	bool   r4b8Defeated        = false;
	string r4b8Name00          = "Monster 1";
	int    r4b8TotalHealth00   = 50;
	int    r4b8CurrentHealth00 = r4b8TotalHealth00;
	int    r4b8Attack00        = 20;
	bool   r4b8Status00        = true;
	bool   r4b8Active00        = true;
	string r4b8Name01          = "Monster 2";
	int    r4b8TotalHealth01   = 50;
	int    r4b8CurrentHealth01 = r4b8TotalHealth01;
	int    r4b8Attack01        = 20;
	bool   r4b8Status01        = true;
	bool   r4b8Active01        = true;
	string r4b8Name02          = "Monster 3";
	int    r4b8TotalHealth02   = 50;
	int    r4b8CurrentHealth02 = r4b8TotalHealth02;
	int    r4b8Attack02        = 20;
	bool   r4b8Status02        = true;
	bool   r4b8Active02        = true;
	string r4b8Name03          = "Monster 4";
	int    r4b8TotalHealth03   = 50;
	int    r4b8CurrentHealth03 = r4b8TotalHealth03;
	int    r4b8Attack03        = 20;
	bool   r4b8Status03        = true;
	bool   r4b8Active03        = true;
	string r4b8Name04          = "Monster 5";
	int    r4b8TotalHealth04   = 50;
	int    r4b8CurrentHealth04 = r4b8TotalHealth04;
	int    r4b8Attack04        = 20;
	bool   r4b8Status04        = true;
	bool   r4b8Active04        = true;

	// Base 9 - Boss

	int    r4b9Units           = 0;
	bool   r4b9Counted         = false;
	bool   r4b9Active          = false;
	bool   r4b9Defeated        = false;
	string r4b9Name00          = "Boss 1";
	int    r4b9TotalHealth00   = 200;
	int    r4b9CurrentHealth00 = r4b9TotalHealth00;
	int    r4b9Attack00        = 40;
	bool   r4b9Status00        = true;
	bool   r4b9Active00        = true;
	string r4b9Name01          = "Monster 2";
	int    r4b9TotalHealth01   = 100;
	int    r4b9CurrentHealth01 = r4b9TotalHealth01;
	int    r4b9Attack01        = 20;
	bool   r4b9Status01        = true;
	bool   r4b9Active01        = true;
	string r4b9Name02          = "Monster 3";
	int    r4b9TotalHealth02   = 100;
	int    r4b9CurrentHealth02 = r4b9TotalHealth02;
	int    r4b9Attack02        = 20;
	bool   r4b9Status02        = true;
	bool   r4b9Active02        = true;
	string r4b9Name03          = "Monster 4";
	int    r4b9TotalHealth03   = 150;
	int    r4b9CurrentHealth03 = r4b9TotalHealth03;
	int    r4b9Attack03        = 30;
	bool   r4b9Status03        = true;
	bool   r4b9Active03        = true;
	string r4b9Name04          = "Monster 5";
	int    r4b9TotalHealth04   = 150;
	int    r4b9CurrentHealth04 = r4b9TotalHealth04;
	int    r4b9Attack04        = 30;
	bool   r4b9Status04        = true;
	bool   r4b9Active04        = true;

	// Region 5

	// Base 1

	int    r5b1Units           = 0;
	bool   r5b1Counted         = false;
	bool   r5b1Active          = true;
	bool   r5b1Defeated        = false;
	string r5b1Name00          = "Monster 1";
	int    r5b1TotalHealth00   = 50;
	int    r5b1CurrentHealth00 = r5b1TotalHealth00;
	int    r5b1Attack00        = 10;
	bool   r5b1Status00        = true;
	bool   r5b1Active00        = true;
	string r5b1Name01          = "Monster 2";
	int    r5b1TotalHealth01   = 50;
	int    r5b1CurrentHealth01 = r5b1TotalHealth01;
	int    r5b1Attack01        = 10;
	bool   r5b1Status01        = false;
	bool   r5b1Active01        = false;
	string r5b1Name02          = "Monster 3";
	int    r5b1TotalHealth02   = 50;
	int    r5b1CurrentHealth02 = r5b1TotalHealth02;
	int    r5b1Attack02        = 10;
	bool   r5b1Status02        = false;
	bool   r5b1Active02        = false;
	string r5b1Name03          = "Monster 4";
	int    r5b1TotalHealth03   = 50;
	int    r5b1CurrentHealth03 = r5b1TotalHealth03;
	int    r5b1Attack03        = 10;
	bool   r5b1Status03        = false;
	bool   r5b1Active03        = false;
	string r5b1Name04          = "Monster 5";
	int    r5b1TotalHealth04   = 50;
	int    r5b1CurrentHealth04 = r5b1TotalHealth04;
	int    r5b1Attack04        = 10;
	bool   r5b1Status04        = false;
	bool   r5b1Active04        = false;

	// Base 2

	int    r5b2Units           = 0;
	bool   r5b2Counted         = false;
	bool   r5b2Active          = false;
	bool   r5b2Defeated        = false;
	string r5b2Name00          = "Monster 1";
	int    r5b2TotalHealth00   = 50;
	int    r5b2CurrentHealth00 = r5b2TotalHealth00;
	int    r5b2Attack00        = 10;
	bool   r5b2Status00        = true;
	bool   r5b2Active00        = true;
	string r5b2Name01          = "Monster 2";
	int    r5b2TotalHealth01   = 50;
	int    r5b2CurrentHealth01 = r5b2TotalHealth01;
	int    r5b2Attack01        = 10;
	bool   r5b2Status01        = true;
	bool   r5b2Active01        = true;
	string r5b2Name02          = "Monster 3";
	int    r5b2TotalHealth02   = 50;
	int    r5b2CurrentHealth02 = r5b2TotalHealth02;
	int    r5b2Attack02        = 10;
	bool   r5b2Status02        = false;
	bool   r5b2Active02        = false;
	string r5b2Name03          = "Monster 4";
	int    r5b2TotalHealth03   = 50;
	int    r5b2CurrentHealth03 = r5b2TotalHealth03;
	int    r5b2Attack03        = 10;
	bool   r5b2Status03        = false;
	bool   r5b2Active03        = false;
	string r5b2Name04          = "Monster 5";
	int    r5b2TotalHealth04   = 50;
	int    r5b2CurrentHealth04 = r5b2TotalHealth04;
	int    r5b2Attack04        = 10;
	bool   r5b2Status04        = false;
	bool   r5b2Active04        = false;

	// Base 3

	int    r5b3Units           = 0;
	bool   r5b3Counted         = false;
	bool   r5b3Active          = false;
	bool   r5b3Defeated        = false;
	string r5b3Name00          = "Monster 1";
	int    r5b3TotalHealth00   = 50;
	int    r5b3CurrentHealth00 = r5b3TotalHealth00;
	int    r5b3Attack00        = 10;
	bool   r5b3Status00        = true;
	bool   r5b3Active00        = true;
	string r5b3Name01          = "Monster 2";
	int    r5b3TotalHealth01   = 50;
	int    r5b3CurrentHealth01 = r5b3TotalHealth01;
	int    r5b3Attack01        = 10;
	bool   r5b3Status01        = true;
	bool   r5b3Active01        = true;
	string r5b3Name02          = "Monster 3";
	int    r5b3TotalHealth02   = 50;
	int    r5b3CurrentHealth02 = r5b3TotalHealth02;
	int    r5b3Attack02        = 10;
	bool   r5b3Status02        = true;
	bool   r5b3Active02        = true;
	string r5b3Name03          = "Monster 4";
	int    r5b3TotalHealth03   = 50;
	int    r5b3CurrentHealth03 = r5b3TotalHealth03;
	int    r5b3Attack03        = 10;
	bool   r5b3Status03        = false;
	bool   r5b3Active03        = false;
	string r5b3Name04          = "Monster 5";
	int    r5b3TotalHealth04   = 50;
	int    r5b3CurrentHealth04 = r5b3TotalHealth04;
	int    r5b3Attack04        = 10;
	bool   r5b3Status04        = false;
	bool   r5b3Active04        = false;

	// Base 4

	int    r5b4Units           = 0;
	bool   r5b4Counted         = false;
	bool   r5b4Active          = false;
	bool   r5b4Defeated        = false;
	string r5b4Name00          = "Monster 1";
	int    r5b4TotalHealth00   = 100;
	int    r5b4CurrentHealth00 = r5b4TotalHealth00;
	int    r5b4Attack00        = 10;
	bool   r5b4Status00        = true;
	bool   r5b4Active00        = true;
	string r5b4Name01          = "Monster 2";
	int    r5b4TotalHealth01   = 150;
	int    r5b4CurrentHealth01 = r5b4TotalHealth01;
	int    r5b4Attack01        = 20;
	bool   r5b4Status01        = true;
	bool   r5b4Active01        = true;
	string r5b4Name02          = "Monster 3";
	int    r5b4TotalHealth02   = 100;
	int    rb4CurrentHealth02  = r5b4TotalHealth02;
	int    r5b4Attack02        = 10;
	bool   r5b4Status02        = true;
	bool   r5b4Active02        = true;
	string r5b4Name03          = "Monster 4";
	int    r5b4TotalHealth03   = 50;
	int    r5b4CurrentHealth03 = r5b4TotalHealth03;
	int    r5b4Attack03        = 10;
	bool   r5b4Status03        = false;
	bool   r5b4Active03        = false;
	string r5b4Name04          = "Monster 5";
	int    r5b4TotalHealth04   = 50;
	int    r5b4CurrentHealth04 = r5b4TotalHealth04;
	int    r5b4Attack04        = 10;
	bool   r5b4Status04        = false;
	bool   r5b4Active04        = false;

	// Base 5

	int    r5b5Units           = 0;
	bool   r5b5Counted         = false;
	bool   r5b5Active          = false;
	bool   r5b5Defeated        = false;
	string r5b5Name00          = "Monster 1";
	int    r5b5TotalHealth00   = 200;
	int    r5b5CurrentHealth00 = r5b5TotalHealth00;
	int    r5b5Attack00        = 40;
	bool   r5b5Status00        = true;
	bool   r5b5Active00        = true;
	string r5b5Name01          = "Monster 2";
	int    r5b5TotalHealth01   = 50;
	int    r5b5CurrentHealth01 = r5b5TotalHealth01;
	int    r5b5Attack01        = 10;
	bool   r5b5Status01        = false;
	bool   r5b5Active01        = false;
	string r5b5Name02          = "Monster 3";
	int    r5b5TotalHealth02   = 50;
	int    r5b5CurrentHealth02 = r5b5TotalHealth02;
	int    r5b5Attack02        = 10;
	bool   r5b5Status02        = false;
	bool   r5b5Active02        = false;
	string r5b5Name03          = "Monster 4";
	int    r5b5TotalHealth03   = 50;
	int    r5b5CurrentHealth03 = r5b5TotalHealth03;
	int    r5b5Attack03        = 10;
	bool   r5b5Status03        = false;
	bool   r5b5Active03        = false;
	string r5b5Name04          = "Monster 5";
	int    r5b5TotalHealth04   = 50;
	int    r5b5CurrentHealth04 = r5b5TotalHealth04;
	int    r5b5Attack04        = 10;
	bool   r5b5Status04        = false;
	bool   r5b5Active04        = false;

	// Base 6

	int    r5b6Units           = 0;
	bool   r5b6Counted         = false;
	bool   r5b6Active          = false;
	bool   r5b6Defeated        = false;
	string r5b6Name00          = "Monster 1";
	int    r5b6TotalHealth00   = 50;
	int    r5b6CurrentHealth00 = r5b6TotalHealth00;
	int    r5b6Attack00        = 10;
	bool   r5b6Status00        = true;
	bool   r5b6Active00        = true;
	string r5b6Name01          = "Monster 2";
	int    r5b6TotalHealth01   = 50;
	int    r5b6CurrentHealth01 = r5b6TotalHealth01;
	int    r5b6Attack01        = 10;
	bool   r5b6Status01        = true;
	bool   r5b6Active01        = true;
	string r5b6Name02          = "Monster 3";
	int    r5b6TotalHealth02   = 50;
	int    r5b6CurrentHealth02 = r5b6TotalHealth02;
	int    r5b6Attack02        = 10;
	bool   r5b6Status02        = true;
	bool   r5b6Active02        = true;
	string r5b6Name03          = "Monster 4";
	int    r5b6TotalHealth03   = 50;
	int    r5b6CurrentHealth03 = r5b6TotalHealth03;
	int    r5b6Attack03        = 10;
	bool   r5b6Status03        = true;
	bool   r5b6Active03        = true;
	string r5b6Name04          = "Monster 5";
	int    r5b6TotalHealth04   = 50;
	int    r5b6CurrentHealth04 = r5b6TotalHealth04;
	int    r5b6Attack04        = 10;
	bool   r5b6Status04        = true;
	bool   r5b6Active04        = true;

	// Base 7

	int    r5b7Units           = 0;
	bool   r5b7Counted         = false;
	bool   r5b7Active          = false;
	bool   r5b7Defeated        = false;
	string r5b7Name00          = "Monster 1";
	int    r5b7TotalHealth00   = 200;
	int    r5b7CurrentHealth00 = r5b7TotalHealth00;
	int    r5b7Attack00        = 10;
	bool   r5b7Status00        = true;
	bool   r5b7Active00        = true;
	string r5b7Name01          = "Monster 2";
	int    r5b7TotalHealth01   = 200;
	int    r5b7CurrentHealth01 = r5b7TotalHealth01;
	int    r5b7Attack01        = 10;
	bool   r5b7Status01        = true;
	bool   r5b7Active01        = true;
	string r5b7Name02          = "Monster 3";
	int    r5b7TotalHealth02   = 200;
	int    r5b7CurrentHealth02 = r5b7TotalHealth02;
	int    r5b7Attack02        = 10;
	bool   r5b7Status02        = true;
	bool   r5b7Active02        = true;
	string r5b7Name03          = "Monster 4";
	int    r5b7TotalHealth03   = 50;
	int    r5b7CurrentHealth03 = r5b7TotalHealth03;
	int    r5b7Attack03        = 10;
	bool   r5b7Status03        = false;
	bool   r5b7Active03        = false;
	string r5b7Name04          = "Monster 5";
	int    r5b7TotalHealth04   = 50;
	int    r5b7CurrentHealth04 = r5b7TotalHealth04;
	int    r5b7Attack04        = 10;
	bool   r5b7Status04        = false;
	bool   r5b7Active04        = false;

	// Base 8

	int    r5b8Units           = 0;
	bool   r5b8Counted         = false;
	bool   r5b8Active          = false;
	bool   r5b8Defeated        = false;
	string r5b8Name00          = "Monster 1";
	int    r5b8TotalHealth00   = 50;
	int    r5b8CurrentHealth00 = r5b8TotalHealth00;
	int    r5b8Attack00        = 20;
	bool   r5b8Status00        = true;
	bool   r5b8Active00        = true;
	string r5b8Name01          = "Monster 2";
	int    r5b8TotalHealth01   = 50;
	int    r5b8CurrentHealth01 = r5b8TotalHealth01;
	int    r5b8Attack01        = 20;
	bool   r5b8Status01        = true;
	bool   r5b8Active01        = true;
	string r5b8Name02          = "Monster 3";
	int    r5b8TotalHealth02   = 50;
	int    r5b8CurrentHealth02 = r5b8TotalHealth02;
	int    r5b8Attack02        = 20;
	bool   r5b8Status02        = true;
	bool   r5b8Active02        = true;
	string r5b8Name03          = "Monster 4";
	int    r5b8TotalHealth03   = 50;
	int    r5b8CurrentHealth03 = r5b8TotalHealth03;
	int    r5b8Attack03        = 20;
	bool   r5b8Status03        = true;
	bool   r5b8Active03        = true;
	string r5b8Name04          = "Monster 5";
	int    r5b8TotalHealth04   = 50;
	int    r5b8CurrentHealth04 = r5b8TotalHealth04;
	int    r5b8Attack04        = 20;
	bool   r5b8Status04        = true;
	bool   r5b8Active04        = true;

	// Base 9 - Boss

	int    r5b9Units           = 0;
	bool   r5b9Counted         = false;
	bool   r5b9Active          = false;
	bool   r5b9Defeated        = false;
	string r5b9Name00          = "Final Boss";
	int    r5b9TotalHealth00   = 1000;
	int    r5b9CurrentHealth00 = r5b9TotalHealth00;
	int    r5b9Attack00        = 100;
	bool   r5b9Status00        = true;
	bool   r5b9Active00        = true;
	string r5b9Name01          = "Monster 2";
	int    r5b9TotalHealth01   = 1000;
	int    r5b9CurrentHealth01 = r5b9TotalHealth01;
	int    r5b9Attack01        = 80;
	bool   r5b9Status01        = true;
	bool   r5b9Active01        = true;
	string r5b9Name02          = "Monster 3";
	int    r5b9TotalHealth02   = 800;
	int    r5b9CurrentHealth02 = r5b9TotalHealth02;
	int    r5b9Attack02        = 100;
	bool   r5b9Status02        = true;
	bool   r5b9Active02        = true;
	string r5b9Name03          = "Monster 4";
	int    r5b9TotalHealth03   = 900;
	int    r5b9CurrentHealth03 = r5b9TotalHealth03;
	int    r5b9Attack03        = 90;
	bool   r5b9Status03        = true;
	bool   r5b9Active03        = true;
	string r5b9Name04          = "Monster 5";
	int    r5b9TotalHealth04   = 850;
	int    r5b9CurrentHealth04 = r5b9TotalHealth04;
	int    r5b9Attack04        = 90;
	bool   r5b9Status04        = true;
	bool   r5b9Active04        = true;

	while(playing) {

		// Reset setting (just in case it hasn't already been done)

		menuSelection = 0;
		menuError     = false;

		// Create random generator

		default_random_engine randomGenerator(time(NULL));

		if(newGame) {
			cout << border;
			cout << "||------------------------- Heroes VS Monsters --------------------------||\n";
			cout << border;

			cout << spacer;

			cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

			cout << spacer;

			cout << "|| This appears to be the first time you are playing this game. In order\n";
			cout << "|| to start we need a hero. Unfortunately we don't have one. So you will\n";
			cout << "|| have to do. Because you are human and our virtual world cannot harm\n";
			cout << "|| you that means you are invincible. But that doesn't mean you can't be\n";
			cout << "|| defeated in battle. It just means you cannot die.\n";

			cout << spacer;

			cout << "|| We need to know your name. Unfortunately, we can only process names\n";
			cout << "|| between 1 and 10 characters long. Also, no spaces or else we go crazy.\n";

			cout << spacer;

			cout << "|| What would you like us to call you? ";
			cin >> menuString;

			if(menuString.length() < 1 || menuString.length() > 10) {
				menuError = true;
			}

			while(menuError) {
				cout << spacer;
				cout << "|| " << error << nameErrorMessage << "\n";
				cout << "|| " << error << "[Name: " << menuString << "] - [Characters: " << menuString.length() << "].\n";
				cout << spacer;
				cout << "|| What would you like us to call you? ";
				cin >> menuString;

				if(menuString.length() >= 1 && menuString.length() <= 10) {
					menuError = false;
				}
			}

			heroName00          = menuString;
			heroTotalHealth00   = 50;
			heroCurrentHealth00 = heroTotalHealth00;
			heroAttack00        = 10;
			heroStatus00        = true;
			heroActive00        = true;
			numHeroes           = 1;
			newGame             = false;
		}

		// Main Menu Screen
		cout << border;
		cout << "||------------------------- Heroes VS Monsters --------------------------||\n";
		cout << border;

		cout << spacer;

		cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

		cout << spacer;

		cout << "|| Welcome to Heroes VS Monsters. A simple 1D Combat Simulator where\n";
		cout << "|| you use your hero(es) to do battle with monsters. Win battles and\n";
		cout << "|| earn credits to recruit and/or upgrade your hero(es) so that you\n";
		cout << "|| can protect your species from total annhialation. But be careful,\n";
		cout << "|| any recruited hero that dies in battle are dead for good and you will\n";
		cout << "|| need to recruit a new one.\n";

		cout << spacer;

		cout << "|| This game meets the challenge requirements of 'Game Challenge 1' by\n";
		cout << "|| MakingGamesWithBen (look him up on youtube).\n";

		cout << spacer;

		cout << "|| [1] Play Game\n";
		cout << "|| [2] View Heroes\n";
		cout << "|| [3] Recruit Hero\n";
		cout << "|| [4] Statistics\n";
		cout << "|| [5] About Game\n";

		cout << spacer;

		cout << "|| [6] Exit Game\n";

		cout << spacer;

		cout << "|| Please enter a number: ";
		cin >> menuSelection;

		if(menuSelection < 1 || menuSelection > 6) {
			menuError = true;
		}

		while(menuError) {
			cout << spacer;
			cout << "|| " << error << "Number must be between 1 and 6.\n";
			cout << spacer;
			cout << "|| Please enter a number: ";
			cin >> menuSelection;

			if(menuSelection >= 1 && menuSelection <= 6) {
				menuError = false;
			}
		}

		if(menuSelection == 1) {
			// Play Game
			cout << border;
			cout << "||----------------------------- Play Game -------------------------------||\n";
			cout << border;
			cout << spacer;

			cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

			cout << spacer;

			cout << "|| Here you can choose to do battle with the monsters in Conquest or go\n";
			cout << "|| up against friendly rivals in a chance to win some money. If any\n";
			cout << "|| heroes die in Conquest they are dead for good and you will need to\n";
			cout << "|| recruit more heros. However, if any heroes are defeated in friendly\n";
			cout << "|| battle than it's all good. You just lose some money.\n";

			cout << spacer;

			cout << "|| Good luck.\n";

			cout << spacer;

			cout << "|| [1] Conquest\n";
			cout << "|| [2] Friendly Battle\n";

			cout << spacer;

			cout << "|| [3] Return\n";

			cout << spacer;

			cout << "|| Please enter a number: ";
			cin >> menuSelection;

			if(menuSelection < 1 || menuSelection > 3) {
				menuError = true;
			}

			while(menuError) {
				cout << spacer;
				cout << "|| " << error << "Number must be between 1 and 3.\n";
				cout << spacer;
				cout << "|| Please enter a number: ";
				cin >> menuSelection;

				if(menuSelection >= 1 && menuSelection <= 3) {
					menuError = false;
				}
			}

			if(menuSelection == 1) {
				// Conquest
				while(playing) {
					cout << border;
					cout << "||----------------------------- Conquest --------------------------------||\n";
					cout << border;
					cout << spacer;

					cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

					cout << spacer;

					cout << "|| The monsters have established 5 regions that surround our own small\n";
					cout << "|| region. Each region has 8 base camps and a boss at the end.\n";
					cout << spacer;
					cout << "|| Our intelligent members have studied them and dubbed each region with\n";
					cout << "|| numbers ranging from weakest to strongest. You are to take them out\n";
					cout << "|| in that order to give you the best fighting chance.\n";

					cout << spacer;

					cout << "|| [1] Region 1 - [";
					if(r1Active && !r1Locked) {
						cout << "Active";
					} else {
						cout << "Locked";
					}
					cout << "]\n";

					cout << "|| [2] Region 2 - [";
					if(r1Active && !r1Locked) {
						cout << "Active";
					} else {
						cout << "Locked";
					}
					cout << "]\n";

					cout << "|| [3] Region 3 - [";
					if(r1Active && !r1Locked) {
						cout << "Active";
					} else {
						cout << "Locked";
					}
					cout << "]\n";

					cout << "|| [4] Region 4 - [";
					if(r1Active && !r1Locked) {
						cout << "Active";
					} else {
						cout << "Locked";
					}
					cout << "]\n";

					cout << "|| [5] Region 5 - [";
					if(r1Active && !r1Locked) {
						cout << "Active";
					} else {
						cout << "Locked";
					}
					cout << "]\n";

					cout << spacer;

					cout << "|| [6] Return\n";

					cout << spacer;

					cout << "|| Please enter a number: ";
					cin >> menuSelection;

					if(menuSelection < 1 || menuSelection > 6) {
						menuError = true;
					}

					while(menuError) {
						cout << spacer;
						cout << "|| " << error << "Number must be between 1 and 6.\n";
						cout << spacer;
						cout << "|| Please enter a number: ";
						cin >> menuSelection;

						if(menuSelection >= 1 && menuSelection <= 6) {
							menuError = false;
						}
					}

					if(menuSelection == 1) {
						// Region 1
						
						while(playing) {
							// Reset some values

							if(heroTotalHealth > 0) {
								heroTotalHealth = 0;
							}

							if(monsterTotalHealth > 0) {
								monsterTotalHealth = 0;
							}

							cout << border;
							cout << "||----------------------------- Region 1 --------------------------------||\n";
							cout << border;
							cout << spacer;

							cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

							cout << spacer;

							cout << "|| This region is the weakest of the lot. Given you yourself are in a\n";
							cout << "|| weakened form we have decided that you will take this region out\n";
							cout << "|| first so that you may improve and better yourself for future battles.\n";

							cout << spacer;

							cout << "|| [1] Base 1 - [";
							if(r1b1Active && !r1b1Defeated) {
								cout << "Active";
							} else if(r1b1Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [2] Base 2 - [";
							if(r1b2Active && !r1b2Defeated) {
								cout << "Active";
							} else if(r1b2Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [3] Base 3 - [";
							if(r1b3Active && !r1b3Defeated) {
								cout << "Active";
							} else if(r1b3Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [4] Base 4 - [";
							if(r1b4Active && !r1b4Defeated) {
								cout << "Active";
							} else if(r1b4Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [5] Base 5 - [";
							if(r1b5Active && !r1b5Defeated) {
								cout << "Active";
							} else if(r1b5Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [6] Base 6 - [";
							if(r1b6Active && !r1b6Defeated) {
								cout << "Active";
							} else if(r1b6Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [7] Base 7 - [";
							if(r1b7Active && !r1b7Defeated) {
								cout << "Active";
							} else if(r1b7Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [8] Base 8 - [";
							if(r1b8Active && !r1b8Defeated) {
								cout << "Active";
							} else if(r1b8Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << "|| [9] BOSS ! - [";
							if(r1b9Active && !r1b9Defeated) {
								cout << "Active";
							} else if(r1b9Defeated) {
								cout << "Defeated";
							} else {
								cout << "Locked";
							}
							cout << "]\n";

							cout << spacer;

							cout << "|| [10] Return\n";

							cout << spacer;

							cout << "|| Please enter a number: ";
							cin >> menuSelection;

							if(menuSelection < 1 || menuSelection > 10) {
								menuError = true;
							}

							while(menuError) {
								cout << spacer;
								cout << "|| " << error << "Number must be between 1 and 10.\n";
								cout << spacer;
								cout << "|| Please enter a number: ";
								cin >> menuSelection;

								if(menuSelection >= 1 && menuSelection <= 10) {
									menuError = false;
								}
							}

							if(menuSelection == 1 && r1b1Active) {

								// Base 1

								cout << border;
								cout << "||------------------------------ Base 1 ---------------------------------||\n";
								cout << border;
								cout << spacer;

								cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

								cout << spacer;

								// Create a for loop to loop through each hero and display it
								// to the player

								for(int i = 0; i < numHeroes; i++) {

									// This variable will be used to store the heros health and attack bars

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||--- Heroes ---||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = heroTotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
											cout << "00" << heroTotalHealth00;
										} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
											cout << "0" << heroTotalHealth00;
										} else {
											cout << heroTotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = heroAttack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack00 < 100 && heroAttack00 >= 10) {
											cout << "00" << heroAttack00;
										} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
											cout << "0" << heroAttack00;
										} else {
											cout << heroAttack00;
										}

										cout << " -||\n";
									} else if(i == 1) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = heroTotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
											cout << "00" << heroTotalHealth01;
										} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
											cout << "0" << heroTotalHealth01;
										} else {
											cout << heroTotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = heroAttack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack01 < 100 && heroAttack01 >= 10) {
											cout << "00" << heroAttack01;
										} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
											cout << "0" << heroAttack01;
										} else {
											cout << heroAttack01;
										}

										cout << " -||\n";
									} else if(i == 2) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = heroTotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
											cout << "00" << heroTotalHealth02;
										} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
											cout << "0" << heroTotalHealth02;
										} else {
											cout << heroTotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = heroAttack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack02 < 100 && heroAttack02 >= 10) {
											cout << "00" << heroAttack02;
										} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
											cout << "0" << heroAttack02;
										} else {
											cout << heroAttack02;
										}

										cout << " -||\n";
									} else if(i == 3) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = heroTotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
											cout << "00" << heroTotalHealth03;
										} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
											cout << "0" << heroTotalHealth03;
										} else {
											cout << heroTotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = heroAttack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack03 < 100 && heroAttack03 >= 10) {
											cout << "00" << heroAttack03;
										} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
											cout << "0" << heroAttack03;
										} else {
											cout << heroAttack03;
										}

										cout << " -||\n";
									} else if(i == 4) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = heroTotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
											cout << "00" << heroTotalHealth04;
										} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
											cout << "0" << heroTotalHealth04;
										} else {
											cout << heroTotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = heroAttack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack04 < 100 && heroAttack04 >= 10) {
											cout << "00" << heroAttack04;
										} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
											cout << "0" << heroAttack04;
										} else {
											cout << heroAttack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								// Display monsters to player

								if(!r1b1Counted) {
									if(r1b1Active00) r1b1Units++;
									if(r1b1Active01) r1b1Units++;
									if(r1b1Active02) r1b1Units++;
									if(r1b1Active03) r1b1Units++;
									if(r1b1Active04) r1b1Units++;
									
									r1b1Counted = true;
								}

								for(int i = 0; i < r1b1Units; i++) {

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||-- Monsters --||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(r1b1Name00.length() == 1) {
											cout << "----- " << r1b1Name00 << " ------";
										} else if(r1b1Name00.length() == 2) {
											cout << "----- " << r1b1Name00 << " -----";
										} else if(r1b1Name00.length() == 3) {
											cout << "---- " << r1b1Name00 << " -----";
										} else if(r1b1Name00.length() == 4) {
											cout << "---- " << r1b1Name00 << " ----";
										} else if(r1b1Name00.length() == 5) {
											cout << "--- " << r1b1Name00 << " ----";
										} else if(r1b1Name00.length() == 6) {
											cout << "--- " << r1b1Name00 << " ---";
										} else if(r1b1Name00.length() == 7) {
											cout << "-- " << r1b1Name00 << " ---";
										} else if(r1b1Name00.length() == 8) {
											cout << "-- " << r1b1Name00 << " --";
										} else if(r1b1Name00.length() == 9) {
											cout << "- " << r1b1Name00 << " --";
										} else if(r1b1Name00.length() == 10) {
											cout << "- " << r1b1Name00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = r1b1TotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1TotalHealth00 < 100 && r1b1TotalHealth00 >= 10) {
											cout << "00" << r1b1TotalHealth00;
										} else if(r1b1TotalHealth00 < 1000 && r1b1TotalHealth00 >= 100) {
											cout << "0" << r1b1TotalHealth00;
										} else {
											cout << r1b1TotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b1Name00.length() == 1) {
											cout << "----- " << r1b1Name00 << " ------";
										} else if(r1b1Name00.length() == 2) {
											cout << "----- " << r1b1Name00 << " -----";
										} else if(r1b1Name00.length() == 3) {
											cout << "---- " << r1b1Name00 << " -----";
										} else if(r1b1Name00.length() == 4) {
											cout << "---- " << r1b1Name00 << " ----";
										} else if(r1b1Name00.length() == 5) {
											cout << "--- " << r1b1Name00 << " ----";
										} else if(r1b1Name00.length() == 6) {
											cout << "--- " << r1b1Name00 << " ---";
										} else if(r1b1Name00.length() == 7) {
											cout << "-- " << r1b1Name00 << " ---";
										} else if(r1b1Name00.length() == 8) {
											cout << "-- " << r1b1Name00 << " --";
										} else if(r1b1Name00.length() == 9) {
											cout << "- " << r1b1Name00 << " --";
										} else if(r1b1Name00.length() == 10) {
											cout << "- " << r1b1Name00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = r1b1Attack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1Attack00 < 100 && r1b1Attack00 >= 10) {
											cout << "00" << r1b1Attack00;
										} else if(r1b1Attack00 < 1000 && r1b1Attack00 >= 100) {
											cout << "0" << r1b1Attack00;
										} else {
											cout << r1b1Attack00;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 1) {
										cout << "||";

										if(r1b1Name01.length() == 1) {
											cout << "----- " << r1b1Name01 << " ------";
										} else if(r1b1Name01.length() == 2) {
											cout << "----- " << r1b1Name01 << " -----";
										} else if(r1b1Name01.length() == 3) {
											cout << "---- " << r1b1Name01 << " -----";
										} else if(r1b1Name01.length() == 4) {
											cout << "---- " << r1b1Name01 << " ----";
										} else if(r1b1Name01.length() == 5) {
											cout << "--- " << r1b1Name01 << " ----";
										} else if(r1b1Name01.length() == 6) {
											cout << "--- " << r1b1Name01 << " ---";
										} else if(r1b1Name01.length() == 7) {
											cout << "-- " << r1b1Name01 << " ---";
										} else if(r1b1Name01.length() == 8) {
											cout << "-- " << r1b1Name01 << " --";
										} else if(r1b1Name01.length() == 9) {
											cout << "- " << r1b1Name01 << " --";
										} else if(r1b1Name01.length() == 10) {
											cout << "- " << r1b1Name01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = r1b1TotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1TotalHealth01 < 100 && r1b1TotalHealth01 >= 10) {
											cout << "00" << r1b1TotalHealth01;
										} else if(r1b1TotalHealth01 < 1000 && r1b1TotalHealth01 >= 100) {
											cout << "0" << r1b1TotalHealth01;
										} else {
											cout << r1b1TotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b1Name01.length() == 1) {
											cout << "----- " << r1b1Name01 << " ------";
										} else if(r1b1Name01.length() == 2) {
											cout << "----- " << r1b1Name01 << " -----";
										} else if(r1b1Name01.length() == 3) {
											cout << "---- " << r1b1Name01 << " -----";
										} else if(r1b1Name01.length() == 4) {
											cout << "---- " << r1b1Name01 << " ----";
										} else if(r1b1Name01.length() == 5) {
											cout << "--- " << r1b1Name01 << " ----";
										} else if(r1b1Name01.length() == 6) {
											cout << "--- " << r1b1Name01 << " ---";
										} else if(r1b1Name01.length() == 7) {
											cout << "-- " << r1b1Name01 << " ---";
										} else if(r1b1Name01.length() == 8) {
											cout << "-- " << r1b1Name01 << " --";
										} else if(r1b1Name01.length() == 9) {
											cout << "- " << r1b1Name01 << " --";
										} else if(r1b1Name01.length() == 10) {
											cout << "- " << r1b1Name01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = r1b1Attack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1Attack01 < 100 && r1b1Attack01 >= 10) {
											cout << "00" << r1b1Attack01;
										} else if(r1b1Attack01 < 1000 && r1b1Attack01 >= 100) {
											cout << "0" << r1b1Attack01;
										} else {
											cout << r1b1Attack01;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 2) {
										cout << "||";

										if(r1b1Name02.length() == 1) {
											cout << "----- " << r1b1Name02 << " ------";
										} else if(r1b1Name02.length() == 2) {
											cout << "----- " << r1b1Name02 << " -----";
										} else if(r1b1Name02.length() == 3) {
											cout << "---- " << r1b1Name02 << " -----";
										} else if(r1b1Name02.length() == 4) {
											cout << "---- " << r1b1Name02 << " ----";
										} else if(r1b1Name02.length() == 5) {
											cout << "--- " << r1b1Name02 << " ----";
										} else if(r1b1Name02.length() == 6) {
											cout << "--- " << r1b1Name02 << " ---";
										} else if(r1b1Name02.length() == 7) {
											cout << "-- " << r1b1Name02 << " ---";
										} else if(r1b1Name02.length() == 8) {
											cout << "-- " << r1b1Name02 << " --";
										} else if(r1b1Name02.length() == 9) {
											cout << "- " << r1b1Name02 << " --";
										} else if(r1b1Name02.length() == 10) {
											cout << "- " << r1b1Name02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = r1b1TotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1TotalHealth02 < 100 && r1b1TotalHealth02 >= 10) {
											cout << "00" << r1b1TotalHealth02;
										} else if(r1b1TotalHealth02 < 1000 && r1b1TotalHealth02 >= 100) {
											cout << "0" << r1b1TotalHealth02;
										} else {
											cout << r1b1TotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b1Name02.length() == 1) {
											cout << "----- " << r1b1Name02 << " ------";
										} else if(r1b1Name02.length() == 2) {
											cout << "----- " << r1b1Name02 << " -----";
										} else if(r1b1Name02.length() == 3) {
											cout << "---- " << r1b1Name02 << " -----";
										} else if(r1b1Name02.length() == 4) {
											cout << "---- " << r1b1Name02 << " ----";
										} else if(r1b1Name02.length() == 5) {
											cout << "--- " << r1b1Name02 << " ----";
										} else if(r1b1Name02.length() == 6) {
											cout << "--- " << r1b1Name02 << " ---";
										} else if(r1b1Name02.length() == 7) {
											cout << "-- " << r1b1Name02 << " ---";
										} else if(r1b1Name02.length() == 8) {
											cout << "-- " << r1b1Name02 << " --";
										} else if(r1b1Name02.length() == 9) {
											cout << "- " << r1b1Name02 << " --";
										} else if(r1b1Name02.length() == 10) {
											cout << "- " << r1b1Name02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = r1b1Attack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1Attack02 < 100 && r1b1Attack02 >= 10) {
											cout << "00" << r1b1Attack02;
										} else if(r1b1Attack02 < 1000 && r1b1Attack02 >= 100) {
											cout << "0" << r1b1Attack02;
										} else {
											cout << r1b1Attack02;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 3) {
										cout << "||";

										if(r1b1Name03.length() == 1) {
											cout << "----- " << r1b1Name03 << " ------";
										} else if(r1b1Name03.length() == 2) {
											cout << "----- " << r1b1Name03 << " -----";
										} else if(r1b1Name03.length() == 3) {
											cout << "---- " << r1b1Name03 << " -----";
										} else if(r1b1Name03.length() == 4) {
											cout << "---- " << r1b1Name03 << " ----";
										} else if(r1b1Name03.length() == 5) {
											cout << "--- " << r1b1Name03 << " ----";
										} else if(r1b1Name03.length() == 6) {
											cout << "--- " << r1b1Name03 << " ---";
										} else if(r1b1Name03.length() == 7) {
											cout << "-- " << r1b1Name03 << " ---";
										} else if(r1b1Name03.length() == 8) {
											cout << "-- " << r1b1Name03 << " --";
										} else if(r1b1Name03.length() == 9) {
											cout << "- " << r1b1Name03 << " --";
										} else if(r1b1Name03.length() == 10) {
											cout << "- " << r1b1Name03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = r1b1TotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1TotalHealth03 < 100 && r1b1TotalHealth03 >= 10) {
											cout << "00" << r1b1TotalHealth03;
										} else if(r1b1TotalHealth03 < 1000 && r1b1TotalHealth03 >= 100) {
											cout << "0" << r1b1TotalHealth03;
										} else {
											cout << r1b1TotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b1Name03.length() == 1) {
											cout << "----- " << r1b1Name03 << " ------";
										} else if(r1b1Name03.length() == 2) {
											cout << "----- " << r1b1Name03 << " -----";
										} else if(r1b1Name03.length() == 3) {
											cout << "---- " << r1b1Name03 << " -----";
										} else if(r1b1Name03.length() == 4) {
											cout << "---- " << r1b1Name03 << " ----";
										} else if(r1b1Name03.length() == 5) {
											cout << "--- " << r1b1Name03 << " ----";
										} else if(r1b1Name03.length() == 6) {
											cout << "--- " << r1b1Name03 << " ---";
										} else if(r1b1Name03.length() == 7) {
											cout << "-- " << r1b1Name03 << " ---";
										} else if(r1b1Name03.length() == 8) {
											cout << "-- " << r1b1Name03 << " --";
										} else if(r1b1Name03.length() == 9) {
											cout << "- " << r1b1Name03 << " --";
										} else if(r1b1Name03.length() == 10) {
											cout << "- " << r1b1Name03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = r1b1Attack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1Attack03 < 100 && r1b1Attack03 >= 10) {
											cout << "00" << r1b1Attack03;
										} else if(r1b1Attack03 < 1000 && r1b1Attack03 >= 100) {
											cout << "0" << r1b1Attack03;
										} else {
											cout << r1b1Attack03;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 4) {
										cout << "||";

										if(r1b1Name04.length() == 1) {
											cout << "----- " << r1b1Name04 << " ------";
										} else if(r1b1Name04.length() == 2) {
											cout << "----- " << r1b1Name04 << " -----";
										} else if(r1b1Name04.length() == 3) {
											cout << "---- " << r1b1Name04 << " -----";
										} else if(r1b1Name04.length() == 4) {
											cout << "---- " << r1b1Name04 << " ----";
										} else if(r1b1Name04.length() == 5) {
											cout << "--- " << r1b1Name04 << " ----";
										} else if(r1b1Name04.length() == 6) {
											cout << "--- " << r1b1Name04 << " ---";
										} else if(r1b1Name04.length() == 7) {
											cout << "-- " << r1b1Name04 << " ---";
										} else if(r1b1Name04.length() == 8) {
											cout << "-- " << r1b1Name04 << " --";
										} else if(r1b1Name04.length() == 9) {
											cout << "- " << r1b1Name04 << " --";
										} else if(r1b1Name04.length() == 10) {
											cout << "- " << r1b1Name04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount  = r1b1TotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1TotalHealth04 < 100 && r1b1TotalHealth04 >= 10) {
											cout << "00" << r1b1TotalHealth04;
										} else if(r1b1TotalHealth04 < 1000 && r1b1TotalHealth04 >= 100) {
											cout << "0" << r1b1TotalHealth04;
										} else {
											cout << r1b1TotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b1Name04.length() == 1) {
											cout << "----- " << r1b1Name04 << " ------";
										} else if(r1b1Name04.length() == 2) {
											cout << "----- " << r1b1Name04 << " -----";
										} else if(r1b1Name04.length() == 3) {
											cout << "---- " << r1b1Name04 << " -----";
										} else if(r1b1Name04.length() == 4) {
											cout << "---- " << r1b1Name04 << " ----";
										} else if(r1b1Name04.length() == 5) {
											cout << "--- " << r1b1Name04 << " ----";
										} else if(r1b1Name04.length() == 6) {
											cout << "--- " << r1b1Name04 << " ---";
										} else if(r1b1Name04.length() == 7) {
											cout << "-- " << r1b1Name04 << " ---";
										} else if(r1b1Name04.length() == 8) {
											cout << "-- " << r1b1Name04 << " --";
										} else if(r1b1Name04.length() == 9) {
											cout << "- " << r1b1Name04 << " --";
										} else if(r1b1Name04.length() == 10) {
											cout << "- " << r1b1Name04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount  = r1b1Attack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1Attack04 < 100 && r1b1Attack04 >= 10) {
											cout << "00" << r1b1Attack04;
										} else if(r1b1Attack04 < 1000 && r1b1Attack04 >= 100) {
											cout << "0" << r1b1Attack04;
										} else {
											cout << r1b1Attack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								cout << "|| [1] Battle\n";

								cout << spacer;

								cout << "|| [2] Return\n";

								cout << spacer;

								cout << "|| Please enter a number: ";
								cin >> menuSelection;

								if(menuSelection < 1 || menuSelection > 2) {
									menuError = true;
								}

								while(menuError) {
									cout << spacer;
									cout << "|| " << error << "Number must be between 1 and 2.\n";
									cout << spacer;
									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection >= 1 && menuSelection <= 2) {
										menuError = false;
									}
								}

								if(menuSelection == 1 && r1b1Active) {
									// Battle time

									// Acquire total health points for heroes and monsters
									
									// Heroes

									if(heroActive00) heroTotalHealth += heroTotalHealth00;
									if(heroActive01) heroTotalHealth += heroTotalHealth01;
									if(heroActive02) heroTotalHealth += heroTotalHealth02;
									if(heroActive03) heroTotalHealth += heroTotalHealth03;
									if(heroActive04) heroTotalHealth += heroTotalHealth04;
									heroCurrentHealth = heroTotalHealth;

									// Monsters

									if(r1b1Active00) monsterTotalHealth += r1b1TotalHealth00;
									if(r1b1Active01) monsterTotalHealth += r1b1TotalHealth01;
									if(r1b1Active02) monsterTotalHealth += r1b1TotalHealth02;
									if(r1b1Active03) monsterTotalHealth += r1b1TotalHealth03;
									if(r1b1Active04) monsterTotalHealth += r1b1TotalHealth04;
									monsterCurrentHealth = monsterTotalHealth;

									// Used for choosing random units from either side

									uniform_int_distribution<int> theHero(1, numHeroes);
									uniform_int_distribution<int> theMonster(1, r1b1Units);

									// Loop battle until we have a winner

									while(playing) {
										uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b1Units));

										// Store names of two units that will be attacking

										string heroName      = "";
										int    heroAttack    = 0;
										string monsterName   = "";
										int    monsterAttack = 0;
										int    heroUnit      = 0;
										int    monsterUnit   = 0;

										// Obtain hero details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											heroUnit = theHero(randomGenerator);
											
											if(heroUnit == 1 && heroStatus00) {
												heroName   = heroName00;
												heroAttack = heroAttack00;
												playing    = false;
											} else if(heroUnit == 2 && heroStatus01) {
												heroName   = heroName01;
												heroAttack = heroAttack01;
												playing    = false;
											} else if(heroUnit == 3 && heroStatus02) {
												heroName   = heroName02;
												heroAttack = heroAttack02;
												playing    = false;
											} else if(heroUnit == 4 && heroStatus03) {
												heroName   = heroName03;
												heroAttack = heroAttack03;
												playing    = false;
											} else if(heroUnit == 5 && heroStatus04) {
												heroName   = heroName04;
												heroAttack = heroAttack04;
												playing    = false;
											}
										}

										playing = true;

										// Obtain monster details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											monsterUnit = theMonster(randomGenerator);

											if(monsterUnit == 1 && r1b1Status00) {
												monsterName   = r1b1Name00;
												monsterAttack = r1b1Attack00;
												playing       = false;
											} else if(monsterUnit == 2 && r1b1Status01) {
												monsterName   = r1b1Name01;
												monsterAttack = r1b1Attack01;
												playing       = false;
											} else if(monsterUnit == 3 && r1b1Status02) {
												monsterName   = r1b1Name02;
												monsterAttack = r1b1Attack02;
												playing       = false;
											} else if(monsterUnit == 4 && r1b1Status03) {
												monsterName   = r1b1Name03;
												monsterAttack = r1b1Attack03;
												playing       = false;
											} else if(monsterUnit == 5 && r1b1Status04) {
												monsterName   = r1b1Name04;
												monsterAttack = r1b1Attack04;
												playing       = false;
											}
										}

										playing = true;

										// Time to choose who's attacking

										// 'int variable' will hold the total amount of units (heroes + monsters).
										// Whichever side has the most units will have a greater chance of being
										// selected to attack.

										int variable      = totalUnits(randomGenerator);
										int attackingSide = 0;

										if(variable > 0 && variable <= numHeroes) {
											attackingSide = 0;
										} else if(variable > numHeroes || variable <= (numHeroes + r1b1Units)) {
											attackingSide = 1;
										}

										if(attackingSide == 0) {
											// Heroes attacking

											if(monsterUnit == 1) {
												if(heroAttack >= r1b1CurrentHealth00) {
													heroAttack = r1b1CurrentHealth00;
												}

												r1b1CurrentHealth00  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth00 <= 0) {
													r1b1TotalHealth00 = 0;
													r1b1Attack00      = 0;
													r1b1Status00      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 2) {
												if(heroAttack >= r1b1CurrentHealth01) {
													heroAttack = r1b1CurrentHealth01;
												}

												r1b1CurrentHealth01  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth01 <= 0) {
													r1b1TotalHealth01 = 0;
													r1b1Attack01      = 0;
													r1b1Status01      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 3) {
												if(heroAttack >= r1b1CurrentHealth02) {
													heroAttack = r1b1CurrentHealth02;
												}

												r1b1CurrentHealth02  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth02 <= 0) {
													r1b1TotalHealth02 = 0;
													r1b1Attack02      = 0;
													r1b1Status02      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 4) {
												if(heroAttack >= r1b1CurrentHealth03) {
													heroAttack = r1b1CurrentHealth03;
												}

												r1b1CurrentHealth03  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth03 <= 0) {
													r1b1TotalHealth03 = 0;
													r1b1Attack03      = 0;
													r1b1Status03      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 5) {
												if(heroAttack >= r1b1CurrentHealth04) {
													heroAttack = r1b1CurrentHealth04;
												}

												r1b1CurrentHealth04  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth04 <= 0) {
													r1b1TotalHealth04 = 0;
													r1b1Attack04      = 0;
													r1b1Status04      = false;
													r1b1Units--;
												}
											}
										} else if(attackingSide == 1) {
											// Monsters attacking

											if(heroUnit == 1) {
												if(monsterAttack >= heroCurrentHealth00) {
													monsterAttack = heroCurrentHealth00;
												}

												heroCurrentHealth00 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth00 <= 0) {
													heroStatus00 = false;
													numHeroes--;
												}
											} else if(heroUnit == 2) {
												if(monsterAttack >= heroCurrentHealth01) {
													monsterAttack = heroCurrentHealth01;
												}

												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth01 <= 0) {
													heroTotalHealth01 = 0;
													heroAttack01      = 0;
													heroStatus01      = false;
													numHeroes--;
												}
											} else if(heroUnit == 3) {
												if(monsterAttack >= heroCurrentHealth02) {
													monsterAttack = heroCurrentHealth02;
												}

												heroCurrentHealth02 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth02 <= 0) {
													heroTotalHealth02 = 0;
													heroAttack02      = 0;
													heroStatus02      = false;
													numHeroes--;
												}
											} else if(heroUnit == 4) {
												if(monsterAttack >= heroCurrentHealth03) {
													monsterAttack = heroCurrentHealth03;
												}

												heroCurrentHealth03 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth03 <= 0) {
													heroTotalHealth03 = 0;
													heroAttack03      = 0;
													heroStatus03      = false;
													numHeroes--;
												}
											} else if(heroUnit == 5) {
												if(monsterAttack >= heroCurrentHealth04) {
													monsterAttack = heroCurrentHealth04;
												}

												heroCurrentHealth04 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth04 <= 0) {
													heroTotalHealth04 = 0;
													heroAttack04      = 0;
													heroStatus04      = false;
													numHeroes--;
												}
											}
										}

										// Display battle results to user

										float hashCount = 0;
										float equalCount = 0;

										cout << "||-------------------------------- HEALTH -------------------------------||\n";
										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||-- Heroes --||- ";
										
										hashCount  = (heroCurrentHealth / heroTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}
										
										cout << " -||- ";
										
										if(heroCurrentHealth >= 10000) {
											cout << "9999";
										} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
											cout << heroCurrentHealth;
										} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
											cout << "0" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
											cout << "00" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
											cout << "000" << heroCurrentHealth;
										} else {
											cout << "0000";
										}
											
										cout << " -||\n";

										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||- Monsters -||- ";

										hashCount  = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";
										
										if(monsterCurrentHealth >= 10000) {
											cout << "9999";
										} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
											cout << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
											cout << "0" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
											cout << "00" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
											cout << "000" << monsterCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";
										cout << "||-----------------------------------------------------------------------||\n";

										cout << spacer;

										cout << spacer;


										if(attackingSide == 0) {
											cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
										} else if(attackingSide == 1) {
											cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
										}

										cout << spacer;

										cout << "||-------------- Heroes -------------||\n";
										cout << "||-----------------------------------||\n";

										if(heroActive00) { 
											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
												cout << "0" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
												cout << "00" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
												cout << "000" << heroCurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus00) {
												cout << "- ALIVE -";
											} else if(!heroStatus00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}
										
										if(heroActive01) {
											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
												cout << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
												cout << "0" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
												cout << "00" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
												cout << "000" << heroCurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus01) {
												cout << "- ALIVE -";
											} else if(!heroStatus01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive02) {
											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
												cout << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
												cout << "0" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
												cout << "00" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
												cout << "000" << heroCurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus02) {
												cout << "- ALIVE -";
											} else if(!heroStatus02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive03) {
											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
												cout << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
												cout << "0" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
												cout << "00" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
												cout << "000" << heroCurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus03) {
												cout << "- ALIVE -";
											} else if(!heroStatus03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive04) {
											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
												cout << "0" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
												cout << "00" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
												cout << "000" << heroCurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus04) {
												cout << "- ALIVE -";
											} else if(!heroStatus04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										cout << "||------------- Monsters ------------||\n";
										cout << "||-----------------------------------||\n";
										
										if(r1b1Active00) {
											cout << "||";

											if(r1b1Name00.length() == 1) {
												cout << "----- " << r1b1Name00 << " ------";
											} else if(r1b1Name00.length() == 2) {
												cout << "----- " << r1b1Name00 << " -----";
											} else if(r1b1Name00.length() == 3) {
												cout << "---- " << r1b1Name00 << " -----";
											} else if(r1b1Name00.length() == 4) {
												cout << "---- " << r1b1Name00 << " ----";
											} else if(r1b1Name00.length() == 5) {
												cout << "--- " << r1b1Name00 << " ----";
											} else if(r1b1Name00.length() == 6) {
												cout << "--- " << r1b1Name00 << " ---";
											} else if(r1b1Name00.length() == 7) {
												cout << "-- " << r1b1Name00 << " ---";
											} else if(r1b1Name00.length() == 8) {
												cout << "-- " << r1b1Name00 << " --";
											} else if(r1b1Name00.length() == 9) {
												cout << "- " << r1b1Name00 << " --";
											} else if(r1b1Name00.length() == 10) {
												cout << "- " << r1b1Name00 << " -";
											}

											cout << "||- ";

											if(r1b1CurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(r1b1CurrentHealth00 >= 1000 && r1b1CurrentHealth00 < 10000) {
												cout << r1b1CurrentHealth00;
											} else if(r1b1CurrentHealth00 >= 100 && r1b1CurrentHealth00 < 1000) {
												cout << "0" << r1b1CurrentHealth00;
											} else if(r1b1CurrentHealth00 >= 10 && r1b1CurrentHealth00 < 100) {
												cout << "00" << r1b1CurrentHealth00;
											} else if(r1b1CurrentHealth00 >= 1 && r1b1CurrentHealth00 < 10) {
												cout << "000" << r1b1CurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b1Status00) {
												cout << "- ALIVE -";
											} else if(!r1b1Status00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}
										
										if(r1b1Active01) {
											cout << "||";

											if(r1b1Name01.length() == 1) {
												cout << "----- " << r1b1Name01 << " ------";
											} else if(r1b1Name01.length() == 2) {
												cout << "----- " << r1b1Name01 << " -----";
											} else if(r1b1Name01.length() == 3) {
												cout << "---- " << r1b1Name01 << " -----";
											} else if(r1b1Name01.length() == 4) {
												cout << "---- " << r1b1Name01 << " ----";
											} else if(r1b1Name01.length() == 5) {
												cout << "--- " << r1b1Name01 << " ----";
											} else if(r1b1Name01.length() == 6) {
												cout << "--- " << r1b1Name01 << " ---";
											} else if(r1b1Name01.length() == 7) {
												cout << "-- " << r1b1Name01 << " ---";
											} else if(r1b1Name01.length() == 8) {
												cout << "-- " << r1b1Name01 << " --";
											} else if(r1b1Name01.length() == 9) {
												cout << "- " << r1b1Name01 << " --";
											} else if(r1b1Name01.length() == 10) {
												cout << "- " << r1b1Name01 << " -";
											}

											cout << "||- ";

											if(r1b1CurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(r1b1CurrentHealth01 >= 1000 && r1b1CurrentHealth01 < 10000) {
												cout << r1b1CurrentHealth01;
											} else if(r1b1CurrentHealth01 >= 100 && r1b1CurrentHealth01 < 1000) {
												cout << "0" << r1b1CurrentHealth01;
											} else if(r1b1CurrentHealth01 >= 10 && r1b1CurrentHealth01 < 100) {
												cout << "00" << r1b1CurrentHealth01;
											} else if(r1b1CurrentHealth01 >= 1 && r1b1CurrentHealth01 < 10) {
												cout << "000" << r1b1CurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b1Status01) {
												cout << "- ALIVE -";
											} else if(!r1b1Status01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b1Active02) {
											cout << "||";

											if(r1b1Name02.length() == 1) {
												cout << "----- " << r1b1Name02 << " ------";
											} else if(r1b1Name02.length() == 2) {
												cout << "----- " << r1b1Name02 << " -----";
											} else if(r1b1Name02.length() == 3) {
												cout << "---- " << r1b1Name02 << " -----";
											} else if(r1b1Name02.length() == 4) {
												cout << "---- " << r1b1Name02 << " ----";
											} else if(r1b1Name02.length() == 5) {
												cout << "--- " << r1b1Name02 << " ----";
											} else if(r1b1Name02.length() == 6) {
												cout << "--- " << r1b1Name02 << " ---";
											} else if(r1b1Name02.length() == 7) {
												cout << "-- " << r1b1Name02 << " ---";
											} else if(r1b1Name02.length() == 8) {
												cout << "-- " << r1b1Name02 << " --";
											} else if(r1b1Name02.length() == 9) {
												cout << "- " << r1b1Name02 << " --";
											} else if(r1b1Name02.length() == 10) {
												cout << "- " << r1b1Name02 << " -";
											}

											cout << "||- ";

											if(r1b1CurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(r1b1CurrentHealth02 >= 1000 && r1b1CurrentHealth02 < 10000) {
												cout << r1b1CurrentHealth02;
											} else if(r1b1CurrentHealth02 >= 100 && r1b1CurrentHealth02 < 1000) {
												cout << "0" << r1b1CurrentHealth02;
											} else if(r1b1CurrentHealth02 >= 10 && r1b1CurrentHealth02 < 100) {
												cout << "00" << r1b1CurrentHealth02;
											} else if(r1b1CurrentHealth02 >= 1 && r1b1CurrentHealth02 < 10) {
												cout << "000" << r1b1CurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b1Status02) {
												cout << "- ALIVE -";
											} else if(!r1b1Status02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b1Active03) {
											cout << "||";

											if(r1b1Name03.length() == 1) {
												cout << "----- " << r1b1Name03 << " ------";
											} else if(r1b1Name03.length() == 2) {
												cout << "----- " << r1b1Name03 << " -----";
											} else if(r1b1Name03.length() == 3) {
												cout << "---- " << r1b1Name03 << " -----";
											} else if(r1b1Name03.length() == 4) {
												cout << "---- " << r1b1Name03 << " ----";
											} else if(r1b1Name03.length() == 5) {
												cout << "--- " << r1b1Name03 << " ----";
											} else if(r1b1Name03.length() == 6) {
												cout << "--- " << r1b1Name03 << " ---";
											} else if(r1b1Name03.length() == 7) {
												cout << "-- " << r1b1Name03 << " ---";
											} else if(r1b1Name03.length() == 8) {
												cout << "-- " << r1b1Name03 << " --";
											} else if(r1b1Name03.length() == 9) {
												cout << "- " << r1b1Name03 << " --";
											} else if(r1b1Name03.length() == 10) {
												cout << "- " << r1b1Name03 << " -";
											}

											cout << "||- ";

											if(r1b1CurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(r1b1CurrentHealth03 >= 1000 && r1b1CurrentHealth03 < 10000) {
												cout << r1b1CurrentHealth03;
											} else if(r1b1CurrentHealth03 >= 100 && r1b1CurrentHealth03 < 1000) {
												cout << "0" << r1b1CurrentHealth03;
											} else if(r1b1CurrentHealth03 >= 10 && r1b1CurrentHealth03 < 100) {
												cout << "00" << r1b1CurrentHealth03;
											} else if(r1b1CurrentHealth03 >= 1 && r1b1CurrentHealth03 < 10) {
												cout << "000" << r1b1CurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b1Status03) {
												cout << "- ALIVE -";
											} else if(!r1b1Status03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b1Active04) {
											cout << "||";

											if(r1b1Name04.length() == 1) {
												cout << "----- " << r1b1Name04 << " ------";
											} else if(r1b1Name04.length() == 2) {
												cout << "----- " << r1b1Name04 << " -----";
											} else if(r1b1Name04.length() == 3) {
												cout << "---- " << r1b1Name04 << " -----";
											} else if(r1b1Name04.length() == 4) {
												cout << "---- " << r1b1Name04 << " ----";
											} else if(r1b1Name04.length() == 5) {
												cout << "--- " << r1b1Name04 << " ----";
											} else if(r1b1Name04.length() == 6) {
												cout << "--- " << r1b1Name04 << " ---";
											} else if(r1b1Name04.length() == 7) {
												cout << "-- " << r1b1Name04 << " ---";
											} else if(r1b1Name04.length() == 8) {
												cout << "-- " << r1b1Name04 << " --";
											} else if(r1b1Name04.length() == 9) {
												cout << "- " << r1b1Name04 << " --";
											} else if(r1b1Name04.length() == 10) {
												cout << "- " << r1b1Name04 << " -";
											}

											cout << "||- ";

											if(r1b1CurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(r1b1CurrentHealth04 >= 1000 && r1b1CurrentHealth04 < 10000) {
												cout << r1b1CurrentHealth04;
											} else if(r1b1CurrentHealth04 >= 100 && r1b1CurrentHealth04 < 1000) {
												cout << "0" << r1b1CurrentHealth04;
											} else if(r1b1CurrentHealth04 >= 10 && r1b1CurrentHealth04 < 100) {
												cout << "00" << r1b1CurrentHealth04;
											} else if(r1b1CurrentHealth04 >= 1 && r1b1CurrentHealth04 < 10) {
												cout << "000" << r1b1CurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b1Status04) {
												cout << "- ALIVE -";
											} else if(!r1b1Status04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										// Crappy timer to slow loop

										int num1 = 0;
										int num2 = 0;

										while(playing) {
											num1++;

											if(num1 >= 100000) {
												num2++;
												num1 = 0;
											}

											if(num2 >= 10000) {
												num1    = 0;
												num2    = 0;
												playing = false;
											}
										}

										playing = true;
										
										if(numHeroes <= 0 || r1b1Units <= 0) {
											playing = false;
										}
									}

									playing = true;

									// Update logic

									bool win       = false;
									int losses     = 0;
									int kills      = 0;
									int population = 0;
									int currency   = 0;

									if(numHeroes <= 0 && r1b1Units > 0) {
										win = false;
										conquestDefeats++;

										uniform_int_distribution<int> killed(5, (r1b1Units * 10));

										population = killed(randomGenerator);

										populationAlive -= population;
										populationDead += population;

										currency    = (r1b1CurrentHealth00 + r1b1CurrentHealth01 + r1b1CurrentHealth02 + r1b1CurrentHealth03 + r1b1CurrentHealth04) * r1b1Units;

										lostCredits += currency;

										if((currentCredits - currency) <= 0) {
											currentCredits = 0;
										} else {
											currentCredits -= currency;
										}

									} else if(numHeroes > 0 && r1b1Units <= 0) {
										win = true;

										r1b1Active = false;
										r1b2Active = true;

										conquestWins++;

										currency        = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

										wonCredits      += currency;
										currentCredits  += wonCredits;
									}

									if(!heroStatus00 && heroActive00) {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00        = true;
										numHeroes++;
									} else {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
									}

									if(!heroStatus01 && heroActive01) {
										heroTotalHealth01   = 0;
										heroCurrentHealth01 = heroTotalHealth01;
										heroAttack01        = 0;
										heroActive01        = false;
										losses++;
									} else {
										heroCurrentHealth01 = heroTotalHealth01;
										heroStatus01        = true;
									}

									if(!heroStatus02 && heroActive02) {
										heroTotalHealth02   = 0;
										heroCurrentHealth02 = heroTotalHealth02;
										heroAttack02        = 0;
										heroActive02        = false;
										losses++;
									} else {
										heroCurrentHealth02 = heroTotalHealth02;
										heroStatus02        = true;
									}

									if(!heroStatus03 && heroActive03) {
										heroTotalHealth03   = 0;
										heroCurrentHealth03 = heroTotalHealth;
										heroAttack03        = 0;
										heroActive03        = false;
										losses++;
									} else {
										heroCurrentHealth03 = heroTotalHealth03;
										heroStatus03        = true;
									}

									if(!heroStatus04 && heroActive04) {
										heroTotalHealth04   = 0;
										heroCurrentHealth04 = heroTotalHealth04;
										heroAttack04        = 0;
										heroActive04        = false;
										losses++;
									} else {
										heroCurrentHealth04 = heroTotalHealth04;
										heroStatus04        = true;
									}

									if(!r1b1Status00 && r1b1Active00) {
										r1b1TotalHealth00   = 0;
										r1b1CurrentHealth00 = r1b1TotalHealth00;
										r1b1Attack00        = 0;
										r1b1Active          = false;
										kills++;
									} else {
										r1b1CurrentHealth00 = r1b1TotalHealth00;
										r1b1Status00        = true;
									}

									if(!r1b1Status01 && r1b1Active01) {
										r1b1TotalHealth01   = 0;
										r1b1CurrentHealth01 = r1b1TotalHealth01;
										r1b1Attack01        = 0;
										r1b1Active          = false;
										kills++;
									} else {
										r1b1CurrentHealth01 = r1b1TotalHealth01;
										r1b1Status01        = true;
									}

									if(!r1b1Status02 && r1b1Active02) {
										r1b1TotalHealth02   = 0;
										r1b1CurrentHealth02 = r1b1TotalHealth02;
										r1b1Attack02        = 0;
										r1b1Active          = false;
										kills++;
									} else {
										r1b1CurrentHealth02 = r1b1TotalHealth02;
										r1b1Status02        = true;
									}

									if(!r1b1Status03 && r1b1Active03) {
										r1b1TotalHealth03   = 0;
										r1b1CurrentHealth03 = r1b1TotalHealth03;
										r1b1Attack03        = 0;
										r1b1Active          = false;
										kills++;
									} else {
										r1b1CurrentHealth03 = r1b1TotalHealth03;
										r1b1Status03        = true;
									}

									if(!r1b1Status04 && r1b1Active04) {
										r1b1TotalHealth04   = 0;
										r1b1CurrentHealth04 = r1b1TotalHealth04;
										r1b1Attack04        = 0;
										r1b1Active          = false;
										kills++;
									} else {
										r1b1CurrentHealth04 = r1b1TotalHealth04;
										r1b1Status00        = true;
									}

									deadHeroes    += losses;
									enemiesKilled += kills;
									
									// Display end results to user

									cout << border;
									cout << "||-------------------------- Battle Results -----------------------------||\n";
									cout << border;

									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									if(win) {
										cout << "||- After a long and exhausting battle you come out victorious. You\n";
										cout << "||- have successfully destroyed the base and all monsters within it.\n";
										cout << "||- It's now time to take whatever loot is available and continue \n";
										cout << "||- onto the next base.\n";

										cout << spacer;

										cout << "||- Credits won:       " << currency << "\n";
									} else if(!win) {
										cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
										cout << "||- at the hands of the monsters. ";
										
										if(numHeroes > 1) {
											cout << "You and your recruited heroes\n";
											cout << "||- fought bravely but proved no match for the base.\n";
										} else {
											cout << "You fought bravely on your own but\n";
											cout << "||- proved no match for the base.\n";
										}
										cout << spacer;

										cout << "||- Defeated there is little that stands in the way of the monsters as\n";
										cout << "||- they lay slaughter to the population.\n";

										cout << spacer;

										cout << "||- Credits lost:      " << currency << "\n";
									}

									cout << spacer;

									cout << "||- Heroes killed:     " << losses << "\n";
									cout << "||- Enemies killed:    " << kills << "\n";
									cout << "||- Population killed: " << population << "\n";

									cout << spacer;

									cout << "|| [1] Continue\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection != 1) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be 1.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection == 1) {
											menuError = false;
										}
									}

								}
							} else if(menuSelection == 2 && r1b2Active) {
								// Base 2

								cout << border;
								cout << "||------------------------------ Base 2 ---------------------------------||\n";
								cout << border;
								cout << spacer;

								cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

								cout << spacer;

								// Create a for loop to loop through each hero and display it
								// to the player

								for(int i = 0; i < numHeroes; i++) {

									// This variable will be used to store the heros health and attack bars

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||--- Heroes ---||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
											cout << "00" << heroTotalHealth00;
										} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
											cout << "0" << heroTotalHealth00;
										} else {
											cout << heroTotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack00 < 100 && heroAttack00 >= 10) {
											cout << "00" << heroAttack00;
										} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
											cout << "0" << heroAttack00;
										} else {
											cout << heroAttack00;
										}

										cout << " -||\n";
									} else if(i == 1) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
											cout << "00" << heroTotalHealth01;
										} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
											cout << "0" << heroTotalHealth01;
										} else {
											cout << heroTotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack01 < 100 && heroAttack01 >= 10) {
											cout << "00" << heroAttack01;
										} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
											cout << "0" << heroAttack01;
										} else {
											cout << heroAttack01;
										}

										cout << " -||\n";
									} else if(i == 2) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
											cout << "00" << heroTotalHealth02;
										} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
											cout << "0" << heroTotalHealth02;
										} else {
											cout << heroTotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack02 < 100 && heroAttack02 >= 10) {
											cout << "00" << heroAttack02;
										} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
											cout << "0" << heroAttack02;
										} else {
											cout << heroAttack02;
										}

										cout << " -||\n";
									} else if(i == 3) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
											cout << "00" << heroTotalHealth03;
										} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
											cout << "0" << heroTotalHealth03;
										} else {
											cout << heroTotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack03 < 100 && heroAttack03 >= 10) {
											cout << "00" << heroAttack03;
										} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
											cout << "0" << heroAttack03;
										} else {
											cout << heroAttack03;
										}

										cout << " -||\n";
									} else if(i == 4) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
											cout << "00" << heroTotalHealth04;
										} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
											cout << "0" << heroTotalHealth04;
										} else {
											cout << heroTotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack04 < 100 && heroAttack04 >= 10) {
											cout << "00" << heroAttack04;
										} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
											cout << "0" << heroAttack04;
										} else {
											cout << heroAttack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								// Display monsters to player

								if(!r1b2Counted) {
									if(r1b2Active00) r1b2Units++;
									if(r1b2Active01) r1b2Units++;
									if(r1b2Active02) r1b2Units++;
									if(r1b2Active03) r1b2Units++;
									if(r1b2Active04) r1b2Units++;

									r1b2Counted = true;
								}

								for(int i = 0; i < r1b2Units; i++) {

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||-- Monsters --||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(r1b2Name00.length() == 1) {
											cout << "----- " << r1b2Name00 << " ------";
										} else if(r1b2Name00.length() == 2) {
											cout << "----- " << r1b2Name00 << " -----";
										} else if(r1b2Name00.length() == 3) {
											cout << "---- " << r1b2Name00 << " -----";
										} else if(r1b2Name00.length() == 4) {
											cout << "---- " << r1b2Name00 << " ----";
										} else if(r1b2Name00.length() == 5) {
											cout << "--- " << r1b2Name00 << " ----";
										} else if(r1b2Name00.length() == 6) {
											cout << "--- " << r1b2Name00 << " ---";
										} else if(r1b2Name00.length() == 7) {
											cout << "-- " << r1b2Name00 << " ---";
										} else if(r1b2Name00.length() == 8) {
											cout << "-- " << r1b2Name00 << " --";
										} else if(r1b2Name00.length() == 9) {
											cout << "- " << r1b2Name00 << " --";
										} else if(r1b2Name00.length() == 10) {
											cout << "- " << r1b2Name00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b2TotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2TotalHealth00 < 100 && r1b2TotalHealth00 >= 10) {
											cout << "00" << r1b2TotalHealth00;
										} else if(r1b2TotalHealth00 < 1000 && r1b2TotalHealth00 >= 100) {
											cout << "0" << r1b2TotalHealth00;
										} else {
											cout << r1b2TotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b2Name00.length() == 1) {
											cout << "----- " << r1b2Name00 << " ------";
										} else if(r1b2Name00.length() == 2) {
											cout << "----- " << r1b2Name00 << " -----";
										} else if(r1b2Name00.length() == 3) {
											cout << "---- " << r1b2Name00 << " -----";
										} else if(r1b2Name00.length() == 4) {
											cout << "---- " << r1b2Name00 << " ----";
										} else if(r1b2Name00.length() == 5) {
											cout << "--- " << r1b2Name00 << " ----";
										} else if(r1b2Name00.length() == 6) {
											cout << "--- " << r1b2Name00 << " ---";
										} else if(r1b2Name00.length() == 7) {
											cout << "-- " << r1b2Name00 << " ---";
										} else if(r1b2Name00.length() == 8) {
											cout << "-- " << r1b2Name00 << " --";
										} else if(r1b2Name00.length() == 9) {
											cout << "- " << r1b2Name00 << " --";
										} else if(r1b2Name00.length() == 10) {
											cout << "- " << r1b2Name00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b2Attack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2Attack00 < 100 && r1b2Attack00 >= 10) {
											cout << "00" << r1b2Attack00;
										} else if(r1b2Attack00 < 1000 && r1b2Attack00 >= 100) {
											cout << "0" << r1b2Attack00;
										} else {
											cout << r1b2Attack00;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 1) {
										cout << "||";

										if(r1b2Name01.length() == 1) {
											cout << "----- " << r1b2Name01 << " ------";
										} else if(r1b2Name01.length() == 2) {
											cout << "----- " << r1b2Name01 << " -----";
										} else if(r1b2Name01.length() == 3) {
											cout << "---- " << r1b2Name01 << " -----";
										} else if(r1b2Name01.length() == 4) {
											cout << "---- " << r1b2Name01 << " ----";
										} else if(r1b2Name01.length() == 5) {
											cout << "--- " << r1b2Name01 << " ----";
										} else if(r1b2Name01.length() == 6) {
											cout << "--- " << r1b2Name01 << " ---";
										} else if(r1b2Name01.length() == 7) {
											cout << "-- " << r1b2Name01 << " ---";
										} else if(r1b2Name01.length() == 8) {
											cout << "-- " << r1b2Name01 << " --";
										} else if(r1b2Name01.length() == 9) {
											cout << "- " << r1b2Name01 << " --";
										} else if(r1b2Name01.length() == 10) {
											cout << "- " << r1b2Name01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b2TotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2TotalHealth01 < 100 && r1b2TotalHealth01 >= 10) {
											cout << "00" << r1b2TotalHealth01;
										} else if(r1b2TotalHealth01 < 1000 && r1b2TotalHealth01 >= 100) {
											cout << "0" << r1b2TotalHealth01;
										} else {
											cout << r1b2TotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b2Name01.length() == 1) {
											cout << "----- " << r1b2Name01 << " ------";
										} else if(r1b2Name01.length() == 2) {
											cout << "----- " << r1b2Name01 << " -----";
										} else if(r1b2Name01.length() == 3) {
											cout << "---- " << r1b2Name01 << " -----";
										} else if(r1b2Name01.length() == 4) {
											cout << "---- " << r1b2Name01 << " ----";
										} else if(r1b2Name01.length() == 5) {
											cout << "--- " << r1b2Name01 << " ----";
										} else if(r1b2Name01.length() == 6) {
											cout << "--- " << r1b2Name01 << " ---";
										} else if(r1b2Name01.length() == 7) {
											cout << "-- " << r1b2Name01 << " ---";
										} else if(r1b2Name01.length() == 8) {
											cout << "-- " << r1b2Name01 << " --";
										} else if(r1b2Name01.length() == 9) {
											cout << "- " << r1b2Name01 << " --";
										} else if(r1b2Name01.length() == 10) {
											cout << "- " << r1b2Name01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b2Attack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2Attack01 < 100 && r1b2Attack01 >= 10) {
											cout << "00" << r1b2Attack01;
										} else if(r1b2Attack01 < 1000 && r1b2Attack01 >= 100) {
											cout << "0" << r1b2Attack01;
										} else {
											cout << r1b2Attack01;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 2) {
										cout << "||";

										if(r1b2Name02.length() == 1) {
											cout << "----- " << r1b2Name02 << " ------";
										} else if(r1b2Name02.length() == 2) {
											cout << "----- " << r1b2Name02 << " -----";
										} else if(r1b2Name02.length() == 3) {
											cout << "---- " << r1b2Name02 << " -----";
										} else if(r1b2Name02.length() == 4) {
											cout << "---- " << r1b2Name02 << " ----";
										} else if(r1b2Name02.length() == 5) {
											cout << "--- " << r1b2Name02 << " ----";
										} else if(r1b2Name02.length() == 6) {
											cout << "--- " << r1b2Name02 << " ---";
										} else if(r1b2Name02.length() == 7) {
											cout << "-- " << r1b2Name02 << " ---";
										} else if(r1b2Name02.length() == 8) {
											cout << "-- " << r1b2Name02 << " --";
										} else if(r1b2Name02.length() == 9) {
											cout << "- " << r1b2Name02 << " --";
										} else if(r1b2Name02.length() == 10) {
											cout << "- " << r1b2Name02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b2TotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2TotalHealth02 < 100 && r1b2TotalHealth02 >= 10) {
											cout << "00" << r1b2TotalHealth02;
										} else if(r1b2TotalHealth02 < 1000 && r1b2TotalHealth02 >= 100) {
											cout << "0" << r1b2TotalHealth02;
										} else {
											cout << r1b2TotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b2Name02.length() == 1) {
											cout << "----- " << r1b2Name02 << " ------";
										} else if(r1b2Name02.length() == 2) {
											cout << "----- " << r1b2Name02 << " -----";
										} else if(r1b2Name02.length() == 3) {
											cout << "---- " << r1b2Name02 << " -----";
										} else if(r1b2Name02.length() == 4) {
											cout << "---- " << r1b2Name02 << " ----";
										} else if(r1b2Name02.length() == 5) {
											cout << "--- " << r1b2Name02 << " ----";
										} else if(r1b2Name02.length() == 6) {
											cout << "--- " << r1b2Name02 << " ---";
										} else if(r1b2Name02.length() == 7) {
											cout << "-- " << r1b2Name02 << " ---";
										} else if(r1b2Name02.length() == 8) {
											cout << "-- " << r1b2Name02 << " --";
										} else if(r1b2Name02.length() == 9) {
											cout << "- " << r1b2Name02 << " --";
										} else if(r1b2Name02.length() == 10) {
											cout << "- " << r1b2Name02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b2Attack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2Attack02 < 100 && r1b2Attack02 >= 10) {
											cout << "00" << r1b2Attack02;
										} else if(r1b2Attack02 < 1000 && r1b2Attack02 >= 100) {
											cout << "0" << r1b2Attack02;
										} else {
											cout << r1b2Attack02;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 3) {
										cout << "||";

										if(r1b2Name03.length() == 1) {
											cout << "----- " << r1b2Name03 << " ------";
										} else if(r1b2Name03.length() == 2) {
											cout << "----- " << r1b2Name03 << " -----";
										} else if(r1b2Name03.length() == 3) {
											cout << "---- " << r1b2Name03 << " -----";
										} else if(r1b2Name03.length() == 4) {
											cout << "---- " << r1b2Name03 << " ----";
										} else if(r1b2Name03.length() == 5) {
											cout << "--- " << r1b2Name03 << " ----";
										} else if(r1b2Name03.length() == 6) {
											cout << "--- " << r1b2Name03 << " ---";
										} else if(r1b2Name03.length() == 7) {
											cout << "-- " << r1b2Name03 << " ---";
										} else if(r1b2Name03.length() == 8) {
											cout << "-- " << r1b2Name03 << " --";
										} else if(r1b2Name03.length() == 9) {
											cout << "- " << r1b2Name03 << " --";
										} else if(r1b2Name03.length() == 10) {
											cout << "- " << r1b2Name03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b2TotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2TotalHealth03 < 100 && r1b2TotalHealth03 >= 10) {
											cout << "00" << r1b2TotalHealth03;
										} else if(r1b2TotalHealth03 < 1000 && r1b2TotalHealth03 >= 100) {
											cout << "0" << r1b2TotalHealth03;
										} else {
											cout << r1b2TotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b2Name03.length() == 1) {
											cout << "----- " << r1b2Name03 << " ------";
										} else if(r1b2Name03.length() == 2) {
											cout << "----- " << r1b2Name03 << " -----";
										} else if(r1b2Name03.length() == 3) {
											cout << "---- " << r1b2Name03 << " -----";
										} else if(r1b2Name03.length() == 4) {
											cout << "---- " << r1b2Name03 << " ----";
										} else if(r1b2Name03.length() == 5) {
											cout << "--- " << r1b2Name03 << " ----";
										} else if(r1b2Name03.length() == 6) {
											cout << "--- " << r1b2Name03 << " ---";
										} else if(r1b2Name03.length() == 7) {
											cout << "-- " << r1b2Name03 << " ---";
										} else if(r1b2Name03.length() == 8) {
											cout << "-- " << r1b2Name03 << " --";
										} else if(r1b2Name03.length() == 9) {
											cout << "- " << r1b2Name03 << " --";
										} else if(r1b2Name03.length() == 10) {
											cout << "- " << r1b2Name03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b2Attack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2Attack03 < 100 && r1b2Attack03 >= 10) {
											cout << "00" << r1b2Attack03;
										} else if(r1b2Attack03 < 1000 && r1b2Attack03 >= 100) {
											cout << "0" << r1b2Attack03;
										} else {
											cout << r1b2Attack03;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 4) {
										cout << "||";

										if(r1b2Name04.length() == 1) {
											cout << "----- " << r1b2Name04 << " ------";
										} else if(r1b2Name04.length() == 2) {
											cout << "----- " << r1b2Name04 << " -----";
										} else if(r1b2Name04.length() == 3) {
											cout << "---- " << r1b2Name04 << " -----";
										} else if(r1b2Name04.length() == 4) {
											cout << "---- " << r1b2Name04 << " ----";
										} else if(r1b2Name04.length() == 5) {
											cout << "--- " << r1b2Name04 << " ----";
										} else if(r1b2Name04.length() == 6) {
											cout << "--- " << r1b2Name04 << " ---";
										} else if(r1b2Name04.length() == 7) {
											cout << "-- " << r1b2Name04 << " ---";
										} else if(r1b2Name04.length() == 8) {
											cout << "-- " << r1b2Name04 << " --";
										} else if(r1b2Name04.length() == 9) {
											cout << "- " << r1b2Name04 << " --";
										} else if(r1b2Name04.length() == 10) {
											cout << "- " << r1b2Name04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b2TotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2TotalHealth04 < 100 && r1b2TotalHealth04 >= 10) {
											cout << "00" << r1b2TotalHealth04;
										} else if(r1b2TotalHealth04 < 1000 && r1b2TotalHealth04 >= 100) {
											cout << "0" << r1b2TotalHealth04;
										} else {
											cout << r1b2TotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b2Name04.length() == 1) {
											cout << "----- " << r1b2Name04 << " ------";
										} else if(r1b2Name04.length() == 2) {
											cout << "----- " << r1b2Name04 << " -----";
										} else if(r1b2Name04.length() == 3) {
											cout << "---- " << r1b2Name04 << " -----";
										} else if(r1b2Name04.length() == 4) {
											cout << "---- " << r1b2Name04 << " ----";
										} else if(r1b2Name04.length() == 5) {
											cout << "--- " << r1b2Name04 << " ----";
										} else if(r1b2Name04.length() == 6) {
											cout << "--- " << r1b2Name04 << " ---";
										} else if(r1b2Name04.length() == 7) {
											cout << "-- " << r1b2Name04 << " ---";
										} else if(r1b2Name04.length() == 8) {
											cout << "-- " << r1b2Name04 << " --";
										} else if(r1b2Name04.length() == 9) {
											cout << "- " << r1b2Name04 << " --";
										} else if(r1b2Name04.length() == 10) {
											cout << "- " << r1b2Name04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b2Attack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b2Attack04 < 100 && r1b2Attack04 >= 10) {
											cout << "00" << r1b2Attack04;
										} else if(r1b2Attack04 < 1000 && r1b2Attack04 >= 100) {
											cout << "0" << r1b2Attack04;
										} else {
											cout << r1b2Attack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								cout << "|| [1] Battle\n";

								cout << spacer;

								cout << "|| [2] Return\n";

								cout << spacer;

								cout << "|| Please enter a number: ";
								cin >> menuSelection;

								if(menuSelection < 1 || menuSelection > 2) {
									menuError = true;
								}

								while(menuError) {
									cout << spacer;
									cout << "|| " << error << "Number must be between 1 and 2.\n";
									cout << spacer;
									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection >= 1 && menuSelection <= 2) {
										menuError = false;
									}
								}

								if(menuSelection == 1) {
									// Battle time

									// Acquire total health points for heroes and monsters

									// Heroes

									if(heroActive00) heroTotalHealth += heroTotalHealth00;
									if(heroActive01) heroTotalHealth += heroTotalHealth01;
									if(heroActive02) heroTotalHealth += heroTotalHealth02;
									if(heroActive03) heroTotalHealth += heroTotalHealth03;
									if(heroActive04) heroTotalHealth += heroTotalHealth04;
									heroCurrentHealth = heroTotalHealth;

									// Monsters

									if(r1b2Active00) monsterTotalHealth += r1b2TotalHealth00;
									if(r1b2Active01) monsterTotalHealth += r1b2TotalHealth01;
									if(r1b2Active02) monsterTotalHealth += r1b2TotalHealth02;
									if(r1b2Active03) monsterTotalHealth += r1b2TotalHealth03;
									if(r1b2Active04) monsterTotalHealth += r1b2TotalHealth04;
									monsterCurrentHealth = monsterTotalHealth;

									// Used for choosing random units from either side

									uniform_int_distribution<int> theHero(1, numHeroes);
									uniform_int_distribution<int> theMonster(1, r1b2Units);

									// Loop battle until we have a winner

									while(playing) {
										uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b2Units));

										// Store names of two units that will be attacking

										string heroName = "";
										int    heroAttack = 0;
										string monsterName = "";
										int    monsterAttack = 0;
										int    heroUnit = 0;
										int    monsterUnit = 0;

										// Obtain hero details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											heroUnit = theHero(randomGenerator);

											if(heroUnit == 1 && heroStatus00) {
												heroName = heroName00;
												heroAttack = heroAttack00;
												playing = false;
											} else if(heroUnit == 2 && heroStatus01) {
												heroName = heroName01;
												heroAttack = heroAttack01;
												playing = false;
											} else if(heroUnit == 3 && heroStatus02) {
												heroName = heroName02;
												heroAttack = heroAttack02;
												playing = false;
											} else if(heroUnit == 4 && heroStatus03) {
												heroName = heroName03;
												heroAttack = heroAttack03;
												playing = false;
											} else if(heroUnit == 5 && heroStatus04) {
												heroName = heroName04;
												heroAttack = heroAttack04;
												playing = false;
											}
										}

										playing = true;

										// Obtain monster details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											monsterUnit = theMonster(randomGenerator);

											if(monsterUnit == 1 && r1b2Status00) {
												monsterName = r1b2Name00;
												monsterAttack = r1b2Attack00;
												playing = false;
											} else if(monsterUnit == 2 && r1b2Status01) {
												monsterName = r1b2Name01;
												monsterAttack = r1b2Attack01;
												playing = false;
											} else if(monsterUnit == 3 && r1b2Status02) {
												monsterName = r1b2Name02;
												monsterAttack = r1b2Attack02;
												playing = false;
											} else if(monsterUnit == 4 && r1b2Status03) {
												monsterName = r1b2Name03;
												monsterAttack = r1b2Attack03;
												playing = false;
											} else if(monsterUnit == 5 && r1b2Status04) {
												monsterName = r1b2Name04;
												monsterAttack = r1b2Attack04;
												playing = false;
											}
										}

										playing = true;

										// Time to choose who's attacking

										// 'int variable' will hold the total amount of units (heroes + monsters).
										// Whichever side has the most units will have a greater chance of being
										// selected to attack.

										int variable = totalUnits(randomGenerator);
										int attackingSide = 0;

										if(variable > 0 && variable <= numHeroes) {
											attackingSide = 0;
										} else if(variable > numHeroes || variable <= (numHeroes + r1b2Units)) {
											attackingSide = 1;
										}

										if(attackingSide == 0) {
											// Heroes attacking

											if(monsterUnit == 1) {
												if(heroAttack >= r1b2CurrentHealth00) {
													heroAttack = r1b2CurrentHealth00;
												}

												r1b2CurrentHealth00 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b2CurrentHealth00 <= 0) {
													r1b2TotalHealth00 = 0;
													r1b2Attack00 = 0;
													r1b2Status00 = false;
													r1b2Units--;
												}
											} else if(monsterUnit == 2) {
												if(heroAttack >= r1b2CurrentHealth01) {
													heroAttack = r1b2CurrentHealth01;
												}

												r1b2CurrentHealth01 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b2CurrentHealth01 <= 0) {
													r1b2TotalHealth01 = 0;
													r1b2Attack01 = 0;
													r1b2Status01 = false;
													r1b2Units--;
												}
											} else if(monsterUnit == 3) {
												if(heroAttack >= r1b2CurrentHealth02) {
													heroAttack = r1b2CurrentHealth02;
												}

												r1b2CurrentHealth02 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b2CurrentHealth02 <= 0) {
													r1b2TotalHealth02 = 0;
													r1b2Attack02 = 0;
													r1b2Status02 = false;
													r1b2Units--;
												}
											} else if(monsterUnit == 4) {
												if(heroAttack >= r1b2CurrentHealth03) {
													heroAttack = r1b2CurrentHealth03;
												}

												r1b2CurrentHealth03 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b2CurrentHealth03 <= 0) {
													r1b2TotalHealth03 = 0;
													r1b2Attack03 = 0;
													r1b2Status03 = false;
													r1b2Units--;
												}
											} else if(monsterUnit == 5) {
												if(heroAttack >= r1b2CurrentHealth04) {
													heroAttack = r1b2CurrentHealth04;
												}

												r1b2CurrentHealth04 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b2CurrentHealth04 <= 0) {
													r1b2TotalHealth04 = 0;
													r1b2Attack04 = 0;
													r1b2Status04 = false;
													r1b2Units--;
												}
											}
										} else if(attackingSide == 1) {
											// Monsters attacking

											if(heroUnit == 1) {
												if(monsterAttack >= heroCurrentHealth00) {
													monsterAttack = heroCurrentHealth00;
												}

												heroCurrentHealth00 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth00 <= 0) {
													heroStatus00 = false;
													numHeroes--;
												}
											} else if(heroUnit == 2) {
												if(monsterAttack >= heroCurrentHealth01) {
													monsterAttack = heroCurrentHealth01;
												}

												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth01 <= 0) {
													heroTotalHealth01 = 0;
													heroAttack01 = 0;
													heroStatus01 = false;
													numHeroes--;
												}
											} else if(heroUnit == 3) {
												if(monsterAttack >= heroCurrentHealth02) {
													monsterAttack = heroCurrentHealth02;
												}

												heroCurrentHealth02 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth02 <= 0) {
													heroTotalHealth02 = 0;
													heroAttack02 = 0;
													heroStatus02 = false;
													numHeroes--;
												}
											} else if(heroUnit == 4) {
												if(monsterAttack >= heroCurrentHealth03) {
													monsterAttack = heroCurrentHealth03;
												}

												heroCurrentHealth03 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth03 <= 0) {
													heroTotalHealth03 = 0;
													heroAttack03 = 0;
													heroStatus03 = false;
													numHeroes--;
												}
											} else if(heroUnit == 5) {
												if(monsterAttack >= heroCurrentHealth04) {
													monsterAttack = heroCurrentHealth04;
												}

												heroCurrentHealth04 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth04 <= 0) {
													heroTotalHealth04 = 0;
													heroAttack04 = 0;
													heroStatus04 = false;
													numHeroes--;
												}
											}
										}

										// Display battle results to user

										float hashCount = 0;
										float equalCount = 0;

										cout << "||-------------------------------- HEALTH -------------------------------||\n";
										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||-- Heroes --||- ";

										hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroCurrentHealth >= 10000) {
											cout << "9999";
										} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
											cout << heroCurrentHealth;
										} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
											cout << "0" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
											cout << "00" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
											cout << "000" << heroCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";

										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||- Monsters -||- ";

										hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(monsterCurrentHealth >= 10000) {
											cout << "9999";
										} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
											cout << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
											cout << "0" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
											cout << "00" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
											cout << "000" << monsterCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";
										cout << "||-----------------------------------------------------------------------||\n";

										cout << spacer;

										cout << spacer;


										if(attackingSide == 0) {
											cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
										} else if(attackingSide == 1) {
											cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
										}

										cout << spacer;

										cout << "||-------------- Heroes -------------||\n";
										cout << "||-----------------------------------||\n";

										if(heroActive00) {
											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
												cout << "0" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
												cout << "00" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
												cout << "000" << heroCurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus00) {
												cout << "- ALIVE -";
											} else if(!heroStatus00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive01) {
											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
												cout << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
												cout << "0" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
												cout << "00" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
												cout << "000" << heroCurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus01) {
												cout << "- ALIVE -";
											} else if(!heroStatus01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive02) {
											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
												cout << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
												cout << "0" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
												cout << "00" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
												cout << "000" << heroCurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus02) {
												cout << "- ALIVE -";
											} else if(!heroStatus02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive03) {
											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
												cout << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
												cout << "0" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
												cout << "00" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
												cout << "000" << heroCurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus03) {
												cout << "- ALIVE -";
											} else if(!heroStatus03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive04) {
											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
												cout << "0" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
												cout << "00" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
												cout << "000" << heroCurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus04) {
												cout << "- ALIVE -";
											} else if(!heroStatus04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										cout << "||------------- Monsters ------------||\n";
										cout << "||-----------------------------------||\n";

										if(r1b2Active00) {
											cout << "||";

											if(r1b2Name00.length() == 1) {
												cout << "----- " << r1b2Name00 << " ------";
											} else if(r1b2Name00.length() == 2) {
												cout << "----- " << r1b2Name00 << " -----";
											} else if(r1b2Name00.length() == 3) {
												cout << "---- " << r1b2Name00 << " -----";
											} else if(r1b2Name00.length() == 4) {
												cout << "---- " << r1b2Name00 << " ----";
											} else if(r1b2Name00.length() == 5) {
												cout << "--- " << r1b2Name00 << " ----";
											} else if(r1b2Name00.length() == 6) {
												cout << "--- " << r1b2Name00 << " ---";
											} else if(r1b2Name00.length() == 7) {
												cout << "-- " << r1b2Name00 << " ---";
											} else if(r1b2Name00.length() == 8) {
												cout << "-- " << r1b2Name00 << " --";
											} else if(r1b2Name00.length() == 9) {
												cout << "- " << r1b2Name00 << " --";
											} else if(r1b2Name00.length() == 10) {
												cout << "- " << r1b2Name00 << " -";
											}

											cout << "||- ";

											if(r1b2CurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(r1b2CurrentHealth00 >= 1000 && r1b2CurrentHealth00 < 10000) {
												cout << r1b2CurrentHealth00;
											} else if(r1b2CurrentHealth00 >= 100 && r1b2CurrentHealth00 < 1000) {
												cout << "0" << r1b2CurrentHealth00;
											} else if(r1b2CurrentHealth00 >= 10 && r1b2CurrentHealth00 < 100) {
												cout << "00" << r1b2CurrentHealth00;
											} else if(r1b2CurrentHealth00 >= 1 && r1b2CurrentHealth00 < 10) {
												cout << "000" << r1b2CurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b2Status00) {
												cout << "- ALIVE -";
											} else if(!r1b2Status00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b2Active01) {
											cout << "||";

											if(r1b2Name01.length() == 1) {
												cout << "----- " << r1b2Name01 << " ------";
											} else if(r1b2Name01.length() == 2) {
												cout << "----- " << r1b2Name01 << " -----";
											} else if(r1b2Name01.length() == 3) {
												cout << "---- " << r1b2Name01 << " -----";
											} else if(r1b2Name01.length() == 4) {
												cout << "---- " << r1b2Name01 << " ----";
											} else if(r1b2Name01.length() == 5) {
												cout << "--- " << r1b2Name01 << " ----";
											} else if(r1b2Name01.length() == 6) {
												cout << "--- " << r1b2Name01 << " ---";
											} else if(r1b2Name01.length() == 7) {
												cout << "-- " << r1b2Name01 << " ---";
											} else if(r1b2Name01.length() == 8) {
												cout << "-- " << r1b2Name01 << " --";
											} else if(r1b2Name01.length() == 9) {
												cout << "- " << r1b2Name01 << " --";
											} else if(r1b2Name01.length() == 10) {
												cout << "- " << r1b2Name01 << " -";
											}

											cout << "||- ";

											if(r1b2CurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(r1b2CurrentHealth01 >= 1000 && r1b2CurrentHealth01 < 10000) {
												cout << r1b2CurrentHealth01;
											} else if(r1b2CurrentHealth01 >= 100 && r1b2CurrentHealth01 < 1000) {
												cout << "0" << r1b2CurrentHealth01;
											} else if(r1b2CurrentHealth01 >= 10 && r1b2CurrentHealth01 < 100) {
												cout << "00" << r1b2CurrentHealth01;
											} else if(r1b2CurrentHealth01 >= 1 && r1b2CurrentHealth01 < 10) {
												cout << "000" << r1b2CurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b2Status01) {
												cout << "- ALIVE -";
											} else if(!r1b2Status01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b2Active02) {
											cout << "||";

											if(r1b2Name02.length() == 1) {
												cout << "----- " << r1b2Name02 << " ------";
											} else if(r1b2Name02.length() == 2) {
												cout << "----- " << r1b2Name02 << " -----";
											} else if(r1b2Name02.length() == 3) {
												cout << "---- " << r1b2Name02 << " -----";
											} else if(r1b2Name02.length() == 4) {
												cout << "---- " << r1b2Name02 << " ----";
											} else if(r1b2Name02.length() == 5) {
												cout << "--- " << r1b2Name02 << " ----";
											} else if(r1b2Name02.length() == 6) {
												cout << "--- " << r1b2Name02 << " ---";
											} else if(r1b2Name02.length() == 7) {
												cout << "-- " << r1b2Name02 << " ---";
											} else if(r1b2Name02.length() == 8) {
												cout << "-- " << r1b2Name02 << " --";
											} else if(r1b2Name02.length() == 9) {
												cout << "- " << r1b2Name02 << " --";
											} else if(r1b2Name02.length() == 10) {
												cout << "- " << r1b2Name02 << " -";
											}

											cout << "||- ";

											if(r1b2CurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(r1b2CurrentHealth02 >= 1000 && r1b2CurrentHealth02 < 10000) {
												cout << r1b2CurrentHealth02;
											} else if(r1b2CurrentHealth02 >= 100 && r1b2CurrentHealth02 < 1000) {
												cout << "0" << r1b2CurrentHealth02;
											} else if(r1b2CurrentHealth02 >= 10 && r1b2CurrentHealth02 < 100) {
												cout << "00" << r1b2CurrentHealth02;
											} else if(r1b2CurrentHealth02 >= 1 && r1b2CurrentHealth02 < 10) {
												cout << "000" << r1b2CurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b2Status02) {
												cout << "- ALIVE -";
											} else if(!r1b2Status02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b2Active03) {
											cout << "||";

											if(r1b2Name03.length() == 1) {
												cout << "----- " << r1b2Name03 << " ------";
											} else if(r1b2Name03.length() == 2) {
												cout << "----- " << r1b2Name03 << " -----";
											} else if(r1b2Name03.length() == 3) {
												cout << "---- " << r1b2Name03 << " -----";
											} else if(r1b2Name03.length() == 4) {
												cout << "---- " << r1b2Name03 << " ----";
											} else if(r1b2Name03.length() == 5) {
												cout << "--- " << r1b2Name03 << " ----";
											} else if(r1b2Name03.length() == 6) {
												cout << "--- " << r1b2Name03 << " ---";
											} else if(r1b2Name03.length() == 7) {
												cout << "-- " << r1b2Name03 << " ---";
											} else if(r1b2Name03.length() == 8) {
												cout << "-- " << r1b2Name03 << " --";
											} else if(r1b2Name03.length() == 9) {
												cout << "- " << r1b2Name03 << " --";
											} else if(r1b2Name03.length() == 10) {
												cout << "- " << r1b2Name03 << " -";
											}

											cout << "||- ";

											if(r1b2CurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(r1b2CurrentHealth03 >= 1000 && r1b2CurrentHealth03 < 10000) {
												cout << r1b2CurrentHealth03;
											} else if(r1b2CurrentHealth03 >= 100 && r1b2CurrentHealth03 < 1000) {
												cout << "0" << r1b2CurrentHealth03;
											} else if(r1b2CurrentHealth03 >= 10 && r1b2CurrentHealth03 < 100) {
												cout << "00" << r1b2CurrentHealth03;
											} else if(r1b2CurrentHealth03 >= 1 && r1b2CurrentHealth03 < 10) {
												cout << "000" << r1b2CurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b2Status03) {
												cout << "- ALIVE -";
											} else if(!r1b2Status03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b2Active04) {
											cout << "||";

											if(r1b2Name04.length() == 1) {
												cout << "----- " << r1b2Name04 << " ------";
											} else if(r1b2Name04.length() == 2) {
												cout << "----- " << r1b2Name04 << " -----";
											} else if(r1b2Name04.length() == 3) {
												cout << "---- " << r1b2Name04 << " -----";
											} else if(r1b2Name04.length() == 4) {
												cout << "---- " << r1b2Name04 << " ----";
											} else if(r1b2Name04.length() == 5) {
												cout << "--- " << r1b2Name04 << " ----";
											} else if(r1b2Name04.length() == 6) {
												cout << "--- " << r1b2Name04 << " ---";
											} else if(r1b2Name04.length() == 7) {
												cout << "-- " << r1b2Name04 << " ---";
											} else if(r1b2Name04.length() == 8) {
												cout << "-- " << r1b2Name04 << " --";
											} else if(r1b2Name04.length() == 9) {
												cout << "- " << r1b2Name04 << " --";
											} else if(r1b2Name04.length() == 10) {
												cout << "- " << r1b2Name04 << " -";
											}

											cout << "||- ";

											if(r1b2CurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(r1b2CurrentHealth04 >= 1000 && r1b2CurrentHealth04 < 10000) {
												cout << r1b2CurrentHealth04;
											} else if(r1b2CurrentHealth04 >= 100 && r1b2CurrentHealth04 < 1000) {
												cout << "0" << r1b2CurrentHealth04;
											} else if(r1b2CurrentHealth04 >= 10 && r1b2CurrentHealth04 < 100) {
												cout << "00" << r1b2CurrentHealth04;
											} else if(r1b2CurrentHealth04 >= 1 && r1b2CurrentHealth04 < 10) {
												cout << "000" << r1b2CurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b2Status04) {
												cout << "- ALIVE -";
											} else if(!r1b2Status04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}
										
										cout << "||-----------------------------------||\n";

										cout << spacer;

										// Crappy timer to slow loop

										int num1 = 0;
										int num2 = 0;

										while(playing) {
											num1++;

											if(num1 >= 100000) {
												num2++;
												num1 = 0;
											}

											if(num2 >= 10000) {
												num1 = 0;
												num2 = 0;
												playing = false;
											}
										}

										playing = true;

										if(numHeroes <= 0 || r1b2Units <= 0) {
											playing = false;
										}
									}

									playing = true;

									// Update logic

									bool win = false;
									int losses = 0;
									int kills = 0;
									int population = 0;
									int currency = 0;

									if(numHeroes <= 0 && r1b2Units > 0) {
										win = false;
										conquestDefeats++;

										uniform_int_distribution<int> killed(5, (r1b2Units * 10));

										population = killed(randomGenerator);

										populationAlive -= population;
										populationDead += population;

										currency = (r1b2CurrentHealth00 + r1b2CurrentHealth01 + r1b2CurrentHealth02 + r1b2CurrentHealth03 + r1b2CurrentHealth04) * r1b2Units;

										lostCredits += currency;

										if((currentCredits - currency) <= 0) {
											currentCredits = 0;
										} else {
											currentCredits -= currency;
										}

									} else if(numHeroes > 0 && r1b2Units <= 0) {
										win = true;

										r1b2Active = false;
										r1b3Active = true;

										conquestWins++;

										currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

										wonCredits += currency;
										currentCredits += wonCredits;
									}

									if(!heroStatus00 && heroActive00) {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
										numHeroes++;
									} else {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
									}

									if(!heroStatus01 && heroActive01) {
										heroTotalHealth01 = 0;
										heroCurrentHealth01 = heroTotalHealth01;
										heroAttack01 = 0;
										heroActive01 = false;
										losses++;
									} else {
										heroCurrentHealth01 = heroTotalHealth01;
										heroStatus01 = true;
									}

									if(!heroStatus02 && heroActive02) {
										heroTotalHealth02 = 0;
										heroCurrentHealth02 = heroTotalHealth02;
										heroAttack02 = 0;
										heroActive02 = false;
										losses++;
									} else {
										heroCurrentHealth02 = heroTotalHealth02;
										heroStatus02 = true;
									}

									if(!heroStatus03 && heroActive03) {
										heroTotalHealth03 = 0;
										heroCurrentHealth03 = heroTotalHealth;
										heroAttack03 = 0;
										heroActive03 = false;
										losses++;
									} else {
										heroCurrentHealth03 = heroTotalHealth03;
										heroStatus03 = true;
									}

									if(!heroStatus04 && heroActive04) {
										heroTotalHealth04 = 0;
										heroCurrentHealth04 = heroTotalHealth04;
										heroAttack04 = 0;
										heroActive04 = false;
										losses++;
									} else {
										heroCurrentHealth04 = heroTotalHealth04;
										heroStatus04 = true;
									}

									if(!r1b2Status00 && r1b2Active00) {
										r1b2TotalHealth00 = 0;
										r1b2CurrentHealth00 = r1b2TotalHealth00;
										r1b2Attack00 = 0;
										r1b2Active = false;
										kills++;
									} else {
										r1b2CurrentHealth00 = r1b2TotalHealth00;
										r1b2Status00 = true;
									}

									if(!r1b2Status01 && r1b2Active01) {
										r1b2TotalHealth01 = 0;
										r1b2CurrentHealth01 = r1b2TotalHealth01;
										r1b2Attack01 = 0;
										r1b2Active = false;
										kills++;
									} else {
										r1b2CurrentHealth01 = r1b2TotalHealth01;
										r1b2Status01 = true;
									}

									if(!r1b2Status02 && r1b2Active02) {
										r1b2TotalHealth02 = 0;
										r1b2CurrentHealth02 = r1b2TotalHealth02;
										r1b2Attack02 = 0;
										r1b2Active = false;
										kills++;
									} else {
										r1b2CurrentHealth02 = r1b2TotalHealth02;
										r1b2Status02 = true;
									}

									if(!r1b2Status03 && r1b2Active03) {
										r1b2TotalHealth03 = 0;
										r1b2CurrentHealth03 = r1b2TotalHealth03;
										r1b2Attack03 = 0;
										r1b2Active = false;
										kills++;
									} else {
										r1b2CurrentHealth03 = r1b2TotalHealth03;
										r1b2Status03 = true;
									}

									if(!r1b2Status04 && r1b2Active04) {
										r1b2TotalHealth04 = 0;
										r1b2CurrentHealth04 = r1b2TotalHealth04;
										r1b2Attack04 = 0;
										r1b2Active = false;
										kills++;
									} else {
										r1b2CurrentHealth04 = r1b2TotalHealth04;
										r1b2Status00 = true;
									}

									deadHeroes += losses;
									enemiesKilled += kills;

									// Display end results to user

									cout << border;
									cout << "||-------------------------- Battle Results -----------------------------||\n";
									cout << border;

									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									if(win) {
										cout << "||- After a long and exhausting battle you come out victorious. You\n";
										cout << "||- have successfully destroyed the base and all monsters within it.\n";
										cout << "||- It's now time to take whatever loot is available and continue \n";
										cout << "||- onto the next base.\n";

										cout << spacer;

										cout << "||- Credits won:       " << currency << "\n";
									} else if(!win) {
										cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
										cout << "||- at the hands of the monsters. ";

										if(numHeroes > 1) {
											cout << "You and your recruited heroes\n";
											cout << "||- fought bravely but proved no match for the base.\n";
										} else {
											cout << "You fought bravely on your own but\n";
											cout << "||- proved no match for the base.\n";
										}
										cout << spacer;

										cout << "||- Defeated there is little that stands in the way of the monsters as\n";
										cout << "||- they lay slaughter to the population.\n";

										cout << spacer;

										cout << "||- Credits lost:      " << currency << "\n";
									}

									cout << spacer;

									cout << "||- Heroes killed:     " << losses << "\n";
									cout << "||- Enemies killed:    " << kills << "\n";
									cout << "||- Population killed: " << population << "\n";

									cout << spacer;

									cout << "|| [1] Continue\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection != 1) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be 1.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection == 1) {
											menuError = false;
										}
									}

								}
							} else if(menuSelection == 3 && r1b3Active) {
								// Base 3

								cout << border;
								cout << "||------------------------------ Base 3 ---------------------------------||\n";
								cout << border;
								cout << spacer;

								cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

								cout << spacer;

								// Create a for loop to loop through each hero and display it
								// to the player

								for(int i = 0; i < numHeroes; i++) {

									// This variable will be used to store the heros health and attack bars

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||--- Heroes ---||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
											cout << "00" << heroTotalHealth00;
										} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
											cout << "0" << heroTotalHealth00;
										} else {
											cout << heroTotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack00 < 100 && heroAttack00 >= 10) {
											cout << "00" << heroAttack00;
										} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
											cout << "0" << heroAttack00;
										} else {
											cout << heroAttack00;
										}

										cout << " -||\n";
									} else if(i == 1) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
											cout << "00" << heroTotalHealth01;
										} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
											cout << "0" << heroTotalHealth01;
										} else {
											cout << heroTotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack01 < 100 && heroAttack01 >= 10) {
											cout << "00" << heroAttack01;
										} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
											cout << "0" << heroAttack01;
										} else {
											cout << heroAttack01;
										}

										cout << " -||\n";
									} else if(i == 2) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
											cout << "00" << heroTotalHealth02;
										} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
											cout << "0" << heroTotalHealth02;
										} else {
											cout << heroTotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack02 < 100 && heroAttack02 >= 10) {
											cout << "00" << heroAttack02;
										} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
											cout << "0" << heroAttack02;
										} else {
											cout << heroAttack02;
										}

										cout << " -||\n";
									} else if(i == 3) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
											cout << "00" << heroTotalHealth03;
										} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
											cout << "0" << heroTotalHealth03;
										} else {
											cout << heroTotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack03 < 100 && heroAttack03 >= 10) {
											cout << "00" << heroAttack03;
										} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
											cout << "0" << heroAttack03;
										} else {
											cout << heroAttack03;
										}

										cout << " -||\n";
									} else if(i == 4) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
											cout << "00" << heroTotalHealth04;
										} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
											cout << "0" << heroTotalHealth04;
										} else {
											cout << heroTotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack04 < 100 && heroAttack04 >= 10) {
											cout << "00" << heroAttack04;
										} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
											cout << "0" << heroAttack04;
										} else {
											cout << heroAttack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								// Display monsters to player

								if(!r1b3Counted) {
									if(r1b3Active00) r1b3Units++;
									if(r1b3Active01) r1b3Units++;
									if(r1b3Active02) r1b3Units++;
									if(r1b3Active03) r1b3Units++;
									if(r1b3Active04) r1b3Units++;

									r1b3Counted = true;
								}

								for(int i = 0; i < r1b3Units; i++) {

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||-- Monsters --||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(r1b3Name00.length() == 1) {
											cout << "----- " << r1b3Name00 << " ------";
										} else if(r1b3Name00.length() == 2) {
											cout << "----- " << r1b3Name00 << " -----";
										} else if(r1b3Name00.length() == 3) {
											cout << "---- " << r1b3Name00 << " -----";
										} else if(r1b3Name00.length() == 4) {
											cout << "---- " << r1b3Name00 << " ----";
										} else if(r1b3Name00.length() == 5) {
											cout << "--- " << r1b3Name00 << " ----";
										} else if(r1b3Name00.length() == 6) {
											cout << "--- " << r1b3Name00 << " ---";
										} else if(r1b3Name00.length() == 7) {
											cout << "-- " << r1b3Name00 << " ---";
										} else if(r1b3Name00.length() == 8) {
											cout << "-- " << r1b3Name00 << " --";
										} else if(r1b3Name00.length() == 9) {
											cout << "- " << r1b3Name00 << " --";
										} else if(r1b3Name00.length() == 10) {
											cout << "- " << r1b3Name00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b3TotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3TotalHealth00 < 100 && r1b3TotalHealth00 >= 10) {
											cout << "00" << r1b3TotalHealth00;
										} else if(r1b3TotalHealth00 < 1000 && r1b3TotalHealth00 >= 100) {
											cout << "0" << r1b3TotalHealth00;
										} else {
											cout << r1b3TotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b3Name00.length() == 1) {
											cout << "----- " << r1b3Name00 << " ------";
										} else if(r1b3Name00.length() == 2) {
											cout << "----- " << r1b3Name00 << " -----";
										} else if(r1b3Name00.length() == 3) {
											cout << "---- " << r1b3Name00 << " -----";
										} else if(r1b3Name00.length() == 4) {
											cout << "---- " << r1b3Name00 << " ----";
										} else if(r1b3Name00.length() == 5) {
											cout << "--- " << r1b3Name00 << " ----";
										} else if(r1b3Name00.length() == 6) {
											cout << "--- " << r1b3Name00 << " ---";
										} else if(r1b3Name00.length() == 7) {
											cout << "-- " << r1b3Name00 << " ---";
										} else if(r1b3Name00.length() == 8) {
											cout << "-- " << r1b3Name00 << " --";
										} else if(r1b3Name00.length() == 9) {
											cout << "- " << r1b3Name00 << " --";
										} else if(r1b3Name00.length() == 10) {
											cout << "- " << r1b3Name00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b3Attack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3Attack00 < 100 && r1b3Attack00 >= 10) {
											cout << "00" << r1b3Attack00;
										} else if(r1b3Attack00 < 1000 && r1b3Attack00 >= 100) {
											cout << "0" << r1b3Attack00;
										} else {
											cout << r1b3Attack00;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 1) {
										cout << "||";

										if(r1b3Name01.length() == 1) {
											cout << "----- " << r1b3Name01 << " ------";
										} else if(r1b3Name01.length() == 2) {
											cout << "----- " << r1b3Name01 << " -----";
										} else if(r1b3Name01.length() == 3) {
											cout << "---- " << r1b3Name01 << " -----";
										} else if(r1b3Name01.length() == 4) {
											cout << "---- " << r1b3Name01 << " ----";
										} else if(r1b3Name01.length() == 5) {
											cout << "--- " << r1b3Name01 << " ----";
										} else if(r1b3Name01.length() == 6) {
											cout << "--- " << r1b3Name01 << " ---";
										} else if(r1b3Name01.length() == 7) {
											cout << "-- " << r1b3Name01 << " ---";
										} else if(r1b3Name01.length() == 8) {
											cout << "-- " << r1b3Name01 << " --";
										} else if(r1b3Name01.length() == 9) {
											cout << "- " << r1b3Name01 << " --";
										} else if(r1b3Name01.length() == 10) {
											cout << "- " << r1b3Name01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b3TotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3TotalHealth01 < 100 && r1b3TotalHealth01 >= 10) {
											cout << "00" << r1b3TotalHealth01;
										} else if(r1b3TotalHealth01 < 1000 && r1b3TotalHealth01 >= 100) {
											cout << "0" << r1b3TotalHealth01;
										} else {
											cout << r1b3TotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b3Name01.length() == 1) {
											cout << "----- " << r1b3Name01 << " ------";
										} else if(r1b3Name01.length() == 2) {
											cout << "----- " << r1b3Name01 << " -----";
										} else if(r1b3Name01.length() == 3) {
											cout << "---- " << r1b3Name01 << " -----";
										} else if(r1b3Name01.length() == 4) {
											cout << "---- " << r1b3Name01 << " ----";
										} else if(r1b3Name01.length() == 5) {
											cout << "--- " << r1b3Name01 << " ----";
										} else if(r1b3Name01.length() == 6) {
											cout << "--- " << r1b3Name01 << " ---";
										} else if(r1b3Name01.length() == 7) {
											cout << "-- " << r1b3Name01 << " ---";
										} else if(r1b3Name01.length() == 8) {
											cout << "-- " << r1b3Name01 << " --";
										} else if(r1b3Name01.length() == 9) {
											cout << "- " << r1b3Name01 << " --";
										} else if(r1b3Name01.length() == 10) {
											cout << "- " << r1b3Name01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b3Attack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3Attack01 < 100 && r1b3Attack01 >= 10) {
											cout << "00" << r1b3Attack01;
										} else if(r1b3Attack01 < 1000 && r1b3Attack01 >= 100) {
											cout << "0" << r1b3Attack01;
										} else {
											cout << r1b3Attack01;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 2) {
										cout << "||";

										if(r1b3Name02.length() == 1) {
											cout << "----- " << r1b3Name02 << " ------";
										} else if(r1b3Name02.length() == 2) {
											cout << "----- " << r1b3Name02 << " -----";
										} else if(r1b3Name02.length() == 3) {
											cout << "---- " << r1b3Name02 << " -----";
										} else if(r1b3Name02.length() == 4) {
											cout << "---- " << r1b3Name02 << " ----";
										} else if(r1b3Name02.length() == 5) {
											cout << "--- " << r1b3Name02 << " ----";
										} else if(r1b3Name02.length() == 6) {
											cout << "--- " << r1b3Name02 << " ---";
										} else if(r1b3Name02.length() == 7) {
											cout << "-- " << r1b3Name02 << " ---";
										} else if(r1b3Name02.length() == 8) {
											cout << "-- " << r1b3Name02 << " --";
										} else if(r1b3Name02.length() == 9) {
											cout << "- " << r1b3Name02 << " --";
										} else if(r1b3Name02.length() == 10) {
											cout << "- " << r1b3Name02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b3TotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3TotalHealth02 < 100 && r1b3TotalHealth02 >= 10) {
											cout << "00" << r1b3TotalHealth02;
										} else if(r1b3TotalHealth02 < 1000 && r1b3TotalHealth02 >= 100) {
											cout << "0" << r1b3TotalHealth02;
										} else {
											cout << r1b3TotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b3Name02.length() == 1) {
											cout << "----- " << r1b3Name02 << " ------";
										} else if(r1b3Name02.length() == 2) {
											cout << "----- " << r1b3Name02 << " -----";
										} else if(r1b3Name02.length() == 3) {
											cout << "---- " << r1b3Name02 << " -----";
										} else if(r1b3Name02.length() == 4) {
											cout << "---- " << r1b3Name02 << " ----";
										} else if(r1b3Name02.length() == 5) {
											cout << "--- " << r1b3Name02 << " ----";
										} else if(r1b3Name02.length() == 6) {
											cout << "--- " << r1b3Name02 << " ---";
										} else if(r1b3Name02.length() == 7) {
											cout << "-- " << r1b3Name02 << " ---";
										} else if(r1b3Name02.length() == 8) {
											cout << "-- " << r1b3Name02 << " --";
										} else if(r1b3Name02.length() == 9) {
											cout << "- " << r1b3Name02 << " --";
										} else if(r1b3Name02.length() == 10) {
											cout << "- " << r1b3Name02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b3Attack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3Attack02 < 100 && r1b3Attack02 >= 10) {
											cout << "00" << r1b3Attack02;
										} else if(r1b3Attack02 < 1000 && r1b3Attack02 >= 100) {
											cout << "0" << r1b3Attack02;
										} else {
											cout << r1b3Attack02;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 3) {
										cout << "||";

										if(r1b3Name03.length() == 1) {
											cout << "----- " << r1b3Name03 << " ------";
										} else if(r1b3Name03.length() == 2) {
											cout << "----- " << r1b3Name03 << " -----";
										} else if(r1b3Name03.length() == 3) {
											cout << "---- " << r1b3Name03 << " -----";
										} else if(r1b3Name03.length() == 4) {
											cout << "---- " << r1b3Name03 << " ----";
										} else if(r1b3Name03.length() == 5) {
											cout << "--- " << r1b3Name03 << " ----";
										} else if(r1b3Name03.length() == 6) {
											cout << "--- " << r1b3Name03 << " ---";
										} else if(r1b3Name03.length() == 7) {
											cout << "-- " << r1b3Name03 << " ---";
										} else if(r1b3Name03.length() == 8) {
											cout << "-- " << r1b3Name03 << " --";
										} else if(r1b3Name03.length() == 9) {
											cout << "- " << r1b3Name03 << " --";
										} else if(r1b3Name03.length() == 10) {
											cout << "- " << r1b3Name03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b3TotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3TotalHealth03 < 100 && r1b3TotalHealth03 >= 10) {
											cout << "00" << r1b3TotalHealth03;
										} else if(r1b3TotalHealth03 < 1000 && r1b3TotalHealth03 >= 100) {
											cout << "0" << r1b3TotalHealth03;
										} else {
											cout << r1b3TotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b3Name03.length() == 1) {
											cout << "----- " << r1b3Name03 << " ------";
										} else if(r1b3Name03.length() == 2) {
											cout << "----- " << r1b3Name03 << " -----";
										} else if(r1b3Name03.length() == 3) {
											cout << "---- " << r1b3Name03 << " -----";
										} else if(r1b3Name03.length() == 4) {
											cout << "---- " << r1b3Name03 << " ----";
										} else if(r1b3Name03.length() == 5) {
											cout << "--- " << r1b3Name03 << " ----";
										} else if(r1b3Name03.length() == 6) {
											cout << "--- " << r1b3Name03 << " ---";
										} else if(r1b3Name03.length() == 7) {
											cout << "-- " << r1b3Name03 << " ---";
										} else if(r1b3Name03.length() == 8) {
											cout << "-- " << r1b3Name03 << " --";
										} else if(r1b3Name03.length() == 9) {
											cout << "- " << r1b3Name03 << " --";
										} else if(r1b3Name03.length() == 10) {
											cout << "- " << r1b3Name03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b3Attack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3Attack03 < 100 && r1b3Attack03 >= 10) {
											cout << "00" << r1b3Attack03;
										} else if(r1b3Attack03 < 1000 && r1b3Attack03 >= 100) {
											cout << "0" << r1b3Attack03;
										} else {
											cout << r1b3Attack03;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 4) {
										cout << "||";

										if(r1b3Name04.length() == 1) {
											cout << "----- " << r1b3Name04 << " ------";
										} else if(r1b3Name04.length() == 2) {
											cout << "----- " << r1b3Name04 << " -----";
										} else if(r1b3Name04.length() == 3) {
											cout << "---- " << r1b3Name04 << " -----";
										} else if(r1b3Name04.length() == 4) {
											cout << "---- " << r1b3Name04 << " ----";
										} else if(r1b3Name04.length() == 5) {
											cout << "--- " << r1b3Name04 << " ----";
										} else if(r1b3Name04.length() == 6) {
											cout << "--- " << r1b3Name04 << " ---";
										} else if(r1b3Name04.length() == 7) {
											cout << "-- " << r1b3Name04 << " ---";
										} else if(r1b3Name04.length() == 8) {
											cout << "-- " << r1b3Name04 << " --";
										} else if(r1b3Name04.length() == 9) {
											cout << "- " << r1b3Name04 << " --";
										} else if(r1b3Name04.length() == 10) {
											cout << "- " << r1b3Name04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b3TotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3TotalHealth04 < 100 && r1b3TotalHealth04 >= 10) {
											cout << "00" << r1b3TotalHealth04;
										} else if(r1b3TotalHealth04 < 1000 && r1b3TotalHealth04 >= 100) {
											cout << "0" << r1b3TotalHealth04;
										} else {
											cout << r1b3TotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b3Name04.length() == 1) {
											cout << "----- " << r1b3Name04 << " ------";
										} else if(r1b3Name04.length() == 2) {
											cout << "----- " << r1b3Name04 << " -----";
										} else if(r1b3Name04.length() == 3) {
											cout << "---- " << r1b3Name04 << " -----";
										} else if(r1b3Name04.length() == 4) {
											cout << "---- " << r1b3Name04 << " ----";
										} else if(r1b3Name04.length() == 5) {
											cout << "--- " << r1b3Name04 << " ----";
										} else if(r1b3Name04.length() == 6) {
											cout << "--- " << r1b3Name04 << " ---";
										} else if(r1b3Name04.length() == 7) {
											cout << "-- " << r1b3Name04 << " ---";
										} else if(r1b3Name04.length() == 8) {
											cout << "-- " << r1b3Name04 << " --";
										} else if(r1b3Name04.length() == 9) {
											cout << "- " << r1b3Name04 << " --";
										} else if(r1b3Name04.length() == 10) {
											cout << "- " << r1b3Name04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b3Attack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b3Attack04 < 100 && r1b3Attack04 >= 10) {
											cout << "00" << r1b3Attack04;
										} else if(r1b3Attack04 < 1000 && r1b3Attack04 >= 100) {
											cout << "0" << r1b3Attack04;
										} else {
											cout << r1b3Attack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								cout << "|| [1] Battle\n";

								cout << spacer;

								cout << "|| [2] Return\n";

								cout << spacer;

								cout << "|| Please enter a number: ";
								cin >> menuSelection;

								if(menuSelection < 1 || menuSelection > 2) {
									menuError = true;
								}

								while(menuError) {
									cout << spacer;
									cout << "|| " << error << "Number must be between 1 and 2.\n";
									cout << spacer;
									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection >= 1 && menuSelection <= 2) {
										menuError = false;
									}
								}

								if(menuSelection == 1) {
									// Battle time

									// Acquire total health points for heroes and monsters

									// Heroes

									if(heroActive00) heroTotalHealth += heroTotalHealth00;
									if(heroActive01) heroTotalHealth += heroTotalHealth01;
									if(heroActive02) heroTotalHealth += heroTotalHealth02;
									if(heroActive03) heroTotalHealth += heroTotalHealth03;
									if(heroActive04) heroTotalHealth += heroTotalHealth04;
									heroCurrentHealth = heroTotalHealth;

									// Monsters

									if(r1b3Active00) monsterTotalHealth += r1b3TotalHealth00;
									if(r1b3Active01) monsterTotalHealth += r1b3TotalHealth01;
									if(r1b3Active02) monsterTotalHealth += r1b3TotalHealth02;
									if(r1b3Active03) monsterTotalHealth += r1b3TotalHealth03;
									if(r1b3Active04) monsterTotalHealth += r1b3TotalHealth04;
									monsterCurrentHealth = monsterTotalHealth;

									// Used for choosing random units from either side

									uniform_int_distribution<int> theHero(1, numHeroes);
									uniform_int_distribution<int> theMonster(1, r1b3Units);

									// Loop battle until we have a winner

									while(playing) {
										uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b3Units));

										// Store names of two units that will be attacking

										string heroName = "";
										int    heroAttack = 0;
										string monsterName = "";
										int    monsterAttack = 0;
										int    heroUnit = 0;
										int    monsterUnit = 0;

										// Obtain hero details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											heroUnit = theHero(randomGenerator);

											if(heroUnit == 1 && heroStatus00) {
												heroName = heroName00;
												heroAttack = heroAttack00;
												playing = false;
											} else if(heroUnit == 2 && heroStatus01) {
												heroName = heroName01;
												heroAttack = heroAttack01;
												playing = false;
											} else if(heroUnit == 3 && heroStatus02) {
												heroName = heroName02;
												heroAttack = heroAttack02;
												playing = false;
											} else if(heroUnit == 4 && heroStatus03) {
												heroName = heroName03;
												heroAttack = heroAttack03;
												playing = false;
											} else if(heroUnit == 5 && heroStatus04) {
												heroName = heroName04;
												heroAttack = heroAttack04;
												playing = false;
											}
										}

										playing = true;

										// Obtain monster details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											monsterUnit = theMonster(randomGenerator);

											if(monsterUnit == 1 && r1b3Status00) {
												monsterName = r1b3Name00;
												monsterAttack = r1b3Attack00;
												playing = false;
											} else if(monsterUnit == 2 && r1b3Status01) {
												monsterName = r1b3Name01;
												monsterAttack = r1b3Attack01;
												playing = false;
											} else if(monsterUnit == 3 && r1b3Status02) {
												monsterName = r1b3Name02;
												monsterAttack = r1b3Attack02;
												playing = false;
											} else if(monsterUnit == 4 && r1b3Status03) {
												monsterName = r1b3Name03;
												monsterAttack = r1b3Attack03;
												playing = false;
											} else if(monsterUnit == 5 && r1b3Status04) {
												monsterName = r1b3Name04;
												monsterAttack = r1b3Attack04;
												playing = false;
											}
										}

										playing = true;

										// Time to choose who's attacking

										// 'int variable' will hold the total amount of units (heroes + monsters).
										// Whichever side has the most units will have a greater chance of being
										// selected to attack.

										int variable = totalUnits(randomGenerator);
										int attackingSide = 0;

										if(variable > 0 && variable <= numHeroes) {
											attackingSide = 0;
										} else if(variable > numHeroes || variable <= (numHeroes + r1b3Units)) {
											attackingSide = 1;
										}

										if(attackingSide == 0) {
											// Heroes attacking

											if(monsterUnit == 1) {
												if(heroAttack >= r1b3CurrentHealth00) {
													heroAttack = r1b3CurrentHealth00;
												}

												r1b3CurrentHealth00 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b3CurrentHealth00 <= 0) {
													r1b3TotalHealth00 = 0;
													r1b3Attack00 = 0;
													r1b3Status00 = false;
													r1b3Units--;
												}
											} else if(monsterUnit == 2) {
												if(heroAttack >= r1b3CurrentHealth01) {
													heroAttack = r1b3CurrentHealth01;
												}

												r1b3CurrentHealth01 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b3CurrentHealth01 <= 0) {
													r1b3TotalHealth01 = 0;
													r1b3Attack01 = 0;
													r1b3Status01 = false;
													r1b3Units--;
												}
											} else if(monsterUnit == 3) {
												if(heroAttack >= r1b3CurrentHealth02) {
													heroAttack = r1b3CurrentHealth02;
												}

												r1b3CurrentHealth02 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b3CurrentHealth02 <= 0) {
													r1b3TotalHealth02 = 0;
													r1b3Attack02 = 0;
													r1b3Status02 = false;
													r1b3Units--;
												}
											} else if(monsterUnit == 4) {
												if(heroAttack >= r1b3CurrentHealth03) {
													heroAttack = r1b3CurrentHealth03;
												}

												r1b3CurrentHealth03 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b3CurrentHealth03 <= 0) {
													r1b3TotalHealth03 = 0;
													r1b3Attack03 = 0;
													r1b3Status03 = false;
													r1b3Units--;
												}
											} else if(monsterUnit == 5) {
												if(heroAttack >= r1b3CurrentHealth04) {
													heroAttack = r1b3CurrentHealth04;
												}

												r1b3CurrentHealth04 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b3CurrentHealth04 <= 0) {
													r1b3TotalHealth04 = 0;
													r1b3Attack04 = 0;
													r1b3Status04 = false;
													r1b3Units--;
												}
											}
										} else if(attackingSide == 1) {
											// Monsters attacking

											if(heroUnit == 1) {
												if(monsterAttack >= heroCurrentHealth00) {
													monsterAttack = heroCurrentHealth00;
												}

												heroCurrentHealth00 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth00 <= 0) {
													heroStatus00 = false;
													numHeroes--;
												}
											} else if(heroUnit == 2) {
												if(monsterAttack >= heroCurrentHealth01) {
													monsterAttack = heroCurrentHealth01;
												}

												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth01 <= 0) {
													heroTotalHealth01 = 0;
													heroAttack01 = 0;
													heroStatus01 = false;
													numHeroes--;
												}
											} else if(heroUnit == 3) {
												if(monsterAttack >= heroCurrentHealth02) {
													monsterAttack = heroCurrentHealth02;
												}

												heroCurrentHealth02 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth02 <= 0) {
													heroTotalHealth02 = 0;
													heroAttack02 = 0;
													heroStatus02 = false;
													numHeroes--;
												}
											} else if(heroUnit == 4) {
												if(monsterAttack >= heroCurrentHealth03) {
													monsterAttack = heroCurrentHealth03;
												}

												heroCurrentHealth03 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth03 <= 0) {
													heroTotalHealth03 = 0;
													heroAttack03 = 0;
													heroStatus03 = false;
													numHeroes--;
												}
											} else if(heroUnit == 5) {
												if(monsterAttack >= heroCurrentHealth04) {
													monsterAttack = heroCurrentHealth04;
												}

												heroCurrentHealth04 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth04 <= 0) {
													heroTotalHealth04 = 0;
													heroAttack04 = 0;
													heroStatus04 = false;
													numHeroes--;
												}
											}
										}

										// Display battle results to user

										float hashCount = 0;
										float equalCount = 0;

										cout << "||-------------------------------- HEALTH -------------------------------||\n";
										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||-- Heroes --||- ";

										hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroCurrentHealth >= 10000) {
											cout << "9999";
										} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
											cout << heroCurrentHealth;
										} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
											cout << "0" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
											cout << "00" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
											cout << "000" << heroCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";

										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||- Monsters -||- ";

										hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(monsterCurrentHealth >= 10000) {
											cout << "9999";
										} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
											cout << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
											cout << "0" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
											cout << "00" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
											cout << "000" << monsterCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";
										cout << "||-----------------------------------------------------------------------||\n";

										cout << spacer;

										cout << spacer;


										if(attackingSide == 0) {
											cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
										} else if(attackingSide == 1) {
											cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
										}

										cout << spacer;

										cout << "||-------------- Heroes -------------||\n";
										cout << "||-----------------------------------||\n";

										if(heroActive00) {
											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
												cout << "0" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
												cout << "00" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
												cout << "000" << heroCurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus00) {
												cout << "- ALIVE -";
											} else if(!heroStatus00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive01) {
											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
												cout << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
												cout << "0" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
												cout << "00" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
												cout << "000" << heroCurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus01) {
												cout << "- ALIVE -";
											} else if(!heroStatus01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive02) {
											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
												cout << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
												cout << "0" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
												cout << "00" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
												cout << "000" << heroCurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus02) {
												cout << "- ALIVE -";
											} else if(!heroStatus02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive03) {
											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
												cout << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
												cout << "0" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
												cout << "00" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
												cout << "000" << heroCurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus03) {
												cout << "- ALIVE -";
											} else if(!heroStatus03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive04) {
											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
												cout << "0" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
												cout << "00" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
												cout << "000" << heroCurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus04) {
												cout << "- ALIVE -";
											} else if(!heroStatus04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										cout << "||------------- Monsters ------------||\n";
										cout << "||-----------------------------------||\n";

										if(r1b3Active00) {
											cout << "||";

											if(r1b3Name00.length() == 1) {
												cout << "----- " << r1b3Name00 << " ------";
											} else if(r1b3Name00.length() == 2) {
												cout << "----- " << r1b3Name00 << " -----";
											} else if(r1b3Name00.length() == 3) {
												cout << "---- " << r1b3Name00 << " -----";
											} else if(r1b3Name00.length() == 4) {
												cout << "---- " << r1b3Name00 << " ----";
											} else if(r1b3Name00.length() == 5) {
												cout << "--- " << r1b3Name00 << " ----";
											} else if(r1b3Name00.length() == 6) {
												cout << "--- " << r1b3Name00 << " ---";
											} else if(r1b3Name00.length() == 7) {
												cout << "-- " << r1b3Name00 << " ---";
											} else if(r1b3Name00.length() == 8) {
												cout << "-- " << r1b3Name00 << " --";
											} else if(r1b3Name00.length() == 9) {
												cout << "- " << r1b3Name00 << " --";
											} else if(r1b3Name00.length() == 10) {
												cout << "- " << r1b3Name00 << " -";
											}

											cout << "||- ";

											if(r1b3CurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(r1b3CurrentHealth00 >= 1000 && r1b3CurrentHealth00 < 10000) {
												cout << r1b3CurrentHealth00;
											} else if(r1b3CurrentHealth00 >= 100 && r1b3CurrentHealth00 < 1000) {
												cout << "0" << r1b3CurrentHealth00;
											} else if(r1b3CurrentHealth00 >= 10 && r1b3CurrentHealth00 < 100) {
												cout << "00" << r1b3CurrentHealth00;
											} else if(r1b3CurrentHealth00 >= 1 && r1b3CurrentHealth00 < 10) {
												cout << "000" << r1b3CurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b3Status00) {
												cout << "- ALIVE -";
											} else if(!r1b3Status00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b3Active01) {
											cout << "||";

											if(r1b3Name01.length() == 1) {
												cout << "----- " << r1b3Name01 << " ------";
											} else if(r1b3Name01.length() == 2) {
												cout << "----- " << r1b3Name01 << " -----";
											} else if(r1b3Name01.length() == 3) {
												cout << "---- " << r1b3Name01 << " -----";
											} else if(r1b3Name01.length() == 4) {
												cout << "---- " << r1b3Name01 << " ----";
											} else if(r1b3Name01.length() == 5) {
												cout << "--- " << r1b3Name01 << " ----";
											} else if(r1b3Name01.length() == 6) {
												cout << "--- " << r1b3Name01 << " ---";
											} else if(r1b3Name01.length() == 7) {
												cout << "-- " << r1b3Name01 << " ---";
											} else if(r1b3Name01.length() == 8) {
												cout << "-- " << r1b3Name01 << " --";
											} else if(r1b3Name01.length() == 9) {
												cout << "- " << r1b3Name01 << " --";
											} else if(r1b3Name01.length() == 10) {
												cout << "- " << r1b3Name01 << " -";
											}

											cout << "||- ";

											if(r1b3CurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(r1b3CurrentHealth01 >= 1000 && r1b3CurrentHealth01 < 10000) {
												cout << r1b3CurrentHealth01;
											} else if(r1b3CurrentHealth01 >= 100 && r1b3CurrentHealth01 < 1000) {
												cout << "0" << r1b3CurrentHealth01;
											} else if(r1b3CurrentHealth01 >= 10 && r1b3CurrentHealth01 < 100) {
												cout << "00" << r1b3CurrentHealth01;
											} else if(r1b3CurrentHealth01 >= 1 && r1b3CurrentHealth01 < 10) {
												cout << "000" << r1b3CurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b3Status01) {
												cout << "- ALIVE -";
											} else if(!r1b3Status01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b3Active02) {
											cout << "||";

											if(r1b3Name02.length() == 1) {
												cout << "----- " << r1b3Name02 << " ------";
											} else if(r1b3Name02.length() == 2) {
												cout << "----- " << r1b3Name02 << " -----";
											} else if(r1b3Name02.length() == 3) {
												cout << "---- " << r1b3Name02 << " -----";
											} else if(r1b3Name02.length() == 4) {
												cout << "---- " << r1b3Name02 << " ----";
											} else if(r1b3Name02.length() == 5) {
												cout << "--- " << r1b3Name02 << " ----";
											} else if(r1b3Name02.length() == 6) {
												cout << "--- " << r1b3Name02 << " ---";
											} else if(r1b3Name02.length() == 7) {
												cout << "-- " << r1b3Name02 << " ---";
											} else if(r1b3Name02.length() == 8) {
												cout << "-- " << r1b3Name02 << " --";
											} else if(r1b3Name02.length() == 9) {
												cout << "- " << r1b3Name02 << " --";
											} else if(r1b3Name02.length() == 10) {
												cout << "- " << r1b3Name02 << " -";
											}

											cout << "||- ";

											if(r1b3CurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(r1b3CurrentHealth02 >= 1000 && r1b3CurrentHealth02 < 10000) {
												cout << r1b3CurrentHealth02;
											} else if(r1b3CurrentHealth02 >= 100 && r1b3CurrentHealth02 < 1000) {
												cout << "0" << r1b3CurrentHealth02;
											} else if(r1b3CurrentHealth02 >= 10 && r1b3CurrentHealth02 < 100) {
												cout << "00" << r1b3CurrentHealth02;
											} else if(r1b3CurrentHealth02 >= 1 && r1b3CurrentHealth02 < 10) {
												cout << "000" << r1b3CurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b3Status02) {
												cout << "- ALIVE -";
											} else if(!r1b3Status02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b3Active03) {
											cout << "||";

											if(r1b3Name03.length() == 1) {
												cout << "----- " << r1b3Name03 << " ------";
											} else if(r1b3Name03.length() == 2) {
												cout << "----- " << r1b3Name03 << " -----";
											} else if(r1b3Name03.length() == 3) {
												cout << "---- " << r1b3Name03 << " -----";
											} else if(r1b3Name03.length() == 4) {
												cout << "---- " << r1b3Name03 << " ----";
											} else if(r1b3Name03.length() == 5) {
												cout << "--- " << r1b3Name03 << " ----";
											} else if(r1b3Name03.length() == 6) {
												cout << "--- " << r1b3Name03 << " ---";
											} else if(r1b3Name03.length() == 7) {
												cout << "-- " << r1b3Name03 << " ---";
											} else if(r1b3Name03.length() == 8) {
												cout << "-- " << r1b3Name03 << " --";
											} else if(r1b3Name03.length() == 9) {
												cout << "- " << r1b3Name03 << " --";
											} else if(r1b3Name03.length() == 10) {
												cout << "- " << r1b3Name03 << " -";
											}

											cout << "||- ";

											if(r1b3CurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(r1b3CurrentHealth03 >= 1000 && r1b3CurrentHealth03 < 10000) {
												cout << r1b3CurrentHealth03;
											} else if(r1b3CurrentHealth03 >= 100 && r1b3CurrentHealth03 < 1000) {
												cout << "0" << r1b3CurrentHealth03;
											} else if(r1b3CurrentHealth03 >= 10 && r1b3CurrentHealth03 < 100) {
												cout << "00" << r1b3CurrentHealth03;
											} else if(r1b3CurrentHealth03 >= 1 && r1b3CurrentHealth03 < 10) {
												cout << "000" << r1b3CurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b3Status03) {
												cout << "- ALIVE -";
											} else if(!r1b3Status03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b3Active04) {
											cout << "||";

											if(r1b3Name04.length() == 1) {
												cout << "----- " << r1b3Name04 << " ------";
											} else if(r1b3Name04.length() == 2) {
												cout << "----- " << r1b3Name04 << " -----";
											} else if(r1b3Name04.length() == 3) {
												cout << "---- " << r1b3Name04 << " -----";
											} else if(r1b3Name04.length() == 4) {
												cout << "---- " << r1b3Name04 << " ----";
											} else if(r1b3Name04.length() == 5) {
												cout << "--- " << r1b3Name04 << " ----";
											} else if(r1b3Name04.length() == 6) {
												cout << "--- " << r1b3Name04 << " ---";
											} else if(r1b3Name04.length() == 7) {
												cout << "-- " << r1b3Name04 << " ---";
											} else if(r1b3Name04.length() == 8) {
												cout << "-- " << r1b3Name04 << " --";
											} else if(r1b3Name04.length() == 9) {
												cout << "- " << r1b3Name04 << " --";
											} else if(r1b3Name04.length() == 10) {
												cout << "- " << r1b3Name04 << " -";
											}

											cout << "||- ";

											if(r1b3CurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(r1b3CurrentHealth04 >= 1000 && r1b3CurrentHealth04 < 10000) {
												cout << r1b3CurrentHealth04;
											} else if(r1b3CurrentHealth04 >= 100 && r1b3CurrentHealth04 < 1000) {
												cout << "0" << r1b3CurrentHealth04;
											} else if(r1b3CurrentHealth04 >= 10 && r1b3CurrentHealth04 < 100) {
												cout << "00" << r1b3CurrentHealth04;
											} else if(r1b3CurrentHealth04 >= 1 && r1b3CurrentHealth04 < 10) {
												cout << "000" << r1b3CurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b3Status04) {
												cout << "- ALIVE -";
											} else if(!r1b3Status04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										// Crappy timer to slow loop

										int num1 = 0;
										int num2 = 0;

										while(playing) {
											num1++;

											if(num1 >= 100000) {
												num2++;
												num1 = 0;
											}

											if(num2 >= 10000) {
												num1 = 0;
												num2 = 0;
												playing = false;
											}
										}

										playing = true;

										if(numHeroes <= 0 || r1b3Units <= 0) {
											playing = false;
										}
									}

									playing = true;

									// Update logic

									bool win = false;
									int losses = 0;
									int kills = 0;
									int population = 0;
									int currency = 0;

									if(numHeroes <= 0 && r1b3Units > 0) {
										win = false;
										conquestDefeats++;

										uniform_int_distribution<int> killed(5, (r1b3Units * 10));

										population = killed(randomGenerator);

										populationAlive -= population;
										populationDead += population;

										currency = (r1b3CurrentHealth00 + r1b3CurrentHealth01 + r1b3CurrentHealth02 + r1b3CurrentHealth03 + r1b3CurrentHealth04) * r1b3Units;

										lostCredits += currency;

										if((currentCredits - currency) <= 0) {
											currentCredits = 0;
										} else {
											currentCredits -= currency;
										}

									} else if(numHeroes > 0 && r1b3Units <= 0) {
										win = true;

										r1b3Active = false;
										r1b4Active = true;

										conquestWins++;

										currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

										wonCredits += currency;
										currentCredits += wonCredits;
									}

									if(!heroStatus00 && heroActive00) {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
										numHeroes++;
									} else {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
									}

									if(!heroStatus01 && heroActive01) {
										heroTotalHealth01 = 0;
										heroCurrentHealth01 = heroTotalHealth01;
										heroAttack01 = 0;
										heroActive01 = false;
										losses++;
									} else {
										heroCurrentHealth01 = heroTotalHealth01;
										heroStatus01 = true;
									}

									if(!heroStatus02 && heroActive02) {
										heroTotalHealth02 = 0;
										heroCurrentHealth02 = heroTotalHealth02;
										heroAttack02 = 0;
										heroActive02 = false;
										losses++;
									} else {
										heroCurrentHealth02 = heroTotalHealth02;
										heroStatus02 = true;
									}

									if(!heroStatus03 && heroActive03) {
										heroTotalHealth03 = 0;
										heroCurrentHealth03 = heroTotalHealth;
										heroAttack03 = 0;
										heroActive03 = false;
										losses++;
									} else {
										heroCurrentHealth03 = heroTotalHealth03;
										heroStatus03 = true;
									}

									if(!heroStatus04 && heroActive04) {
										heroTotalHealth04 = 0;
										heroCurrentHealth04 = heroTotalHealth04;
										heroAttack04 = 0;
										heroActive04 = false;
										losses++;
									} else {
										heroCurrentHealth04 = heroTotalHealth04;
										heroStatus04 = true;
									}

									if(!r1b3Status00 && r1b3Active00) {
										r1b3TotalHealth00 = 0;
										r1b3CurrentHealth00 = r1b3TotalHealth00;
										r1b3Attack00 = 0;
										r1b3Active = false;
										kills++;
									} else {
										r1b3CurrentHealth00 = r1b3TotalHealth00;
										r1b3Status00 = true;
									}

									if(!r1b3Status01 && r1b3Active01) {
										r1b3TotalHealth01 = 0;
										r1b3CurrentHealth01 = r1b3TotalHealth01;
										r1b3Attack01 = 0;
										r1b3Active = false;
										kills++;
									} else {
										r1b3CurrentHealth01 = r1b3TotalHealth01;
										r1b3Status01 = true;
									}

									if(!r1b3Status02 && r1b3Active02) {
										r1b3TotalHealth02 = 0;
										r1b3CurrentHealth02 = r1b3TotalHealth02;
										r1b3Attack02 = 0;
										r1b3Active = false;
										kills++;
									} else {
										r1b3CurrentHealth02 = r1b3TotalHealth02;
										r1b3Status02 = true;
									}

									if(!r1b3Status03 && r1b3Active03) {
										r1b3TotalHealth03 = 0;
										r1b3CurrentHealth03 = r1b3TotalHealth03;
										r1b3Attack03 = 0;
										r1b3Active = false;
										kills++;
									} else {
										r1b3CurrentHealth03 = r1b3TotalHealth03;
										r1b3Status03 = true;
									}

									if(!r1b3Status04 && r1b3Active04) {
										r1b3TotalHealth04 = 0;
										r1b3CurrentHealth04 = r1b3TotalHealth04;
										r1b3Attack04 = 0;
										r1b3Active = false;
										kills++;
									} else {
										r1b3CurrentHealth04 = r1b3TotalHealth04;
										r1b3Status00 = true;
									}

									deadHeroes += losses;
									enemiesKilled += kills;

									// Display end results to user

									cout << border;
									cout << "||-------------------------- Battle Results -----------------------------||\n";
									cout << border;

									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									if(win) {
										cout << "||- After a long and exhausting battle you come out victorious. You\n";
										cout << "||- have successfully destroyed the base and all monsters within it.\n";
										cout << "||- It's now time to take whatever loot is available and continue \n";
										cout << "||- onto the next base.\n";

										cout << spacer;

										cout << "||- Credits won:       " << currency << "\n";
									} else if(!win) {
										cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
										cout << "||- at the hands of the monsters. ";

										if(numHeroes > 1) {
											cout << "You and your recruited heroes\n";
											cout << "||- fought bravely but proved no match for the base.\n";
										} else {
											cout << "You fought bravely on your own but\n";
											cout << "||- proved no match for the base.\n";
										}
										cout << spacer;

										cout << "||- Defeated there is little that stands in the way of the monsters as\n";
										cout << "||- they lay slaughter to the population.\n";

										cout << spacer;

										cout << "||- Credits lost:      " << currency << "\n";
									}

									cout << spacer;

									cout << "||- Heroes killed:     " << losses << "\n";
									cout << "||- Enemies killed:    " << kills << "\n";
									cout << "||- Population killed: " << population << "\n";

									cout << spacer;

									cout << "|| [1] Continue\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection != 1) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be 1.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection == 1) {
											menuError = false;
										}
									}

								}
							} else if(menuSelection == 4 && r1b4Active) {
								// Base 4

								cout << border;
								cout << "||------------------------------ Base 4 ---------------------------------||\n";
								cout << border;
								cout << spacer;

								cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

								cout << spacer;

								// Create a for loop to loop through each hero and display it
								// to the player

								for(int i = 0; i < numHeroes; i++) {

									// This variable will be used to store the heros health and attack bars

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||--- Heroes ---||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
											cout << "00" << heroTotalHealth00;
										} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
											cout << "0" << heroTotalHealth00;
										} else {
											cout << heroTotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack00 < 100 && heroAttack00 >= 10) {
											cout << "00" << heroAttack00;
										} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
											cout << "0" << heroAttack00;
										} else {
											cout << heroAttack00;
										}

										cout << " -||\n";
									} else if(i == 1) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
											cout << "00" << heroTotalHealth01;
										} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
											cout << "0" << heroTotalHealth01;
										} else {
											cout << heroTotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack01 < 100 && heroAttack01 >= 10) {
											cout << "00" << heroAttack01;
										} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
											cout << "0" << heroAttack01;
										} else {
											cout << heroAttack01;
										}

										cout << " -||\n";
									} else if(i == 2) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
											cout << "00" << heroTotalHealth02;
										} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
											cout << "0" << heroTotalHealth02;
										} else {
											cout << heroTotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack02 < 100 && heroAttack02 >= 10) {
											cout << "00" << heroAttack02;
										} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
											cout << "0" << heroAttack02;
										} else {
											cout << heroAttack02;
										}

										cout << " -||\n";
									} else if(i == 3) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
											cout << "00" << heroTotalHealth03;
										} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
											cout << "0" << heroTotalHealth03;
										} else {
											cout << heroTotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack03 < 100 && heroAttack03 >= 10) {
											cout << "00" << heroAttack03;
										} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
											cout << "0" << heroAttack03;
										} else {
											cout << heroAttack03;
										}

										cout << " -||\n";
									} else if(i == 4) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
											cout << "00" << heroTotalHealth04;
										} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
											cout << "0" << heroTotalHealth04;
										} else {
											cout << heroTotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack04 < 100 && heroAttack04 >= 10) {
											cout << "00" << heroAttack04;
										} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
											cout << "0" << heroAttack04;
										} else {
											cout << heroAttack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								// Display monsters to player

								if(!r1b4Counted) {
									if(r1b4Active00) r1b4Units++;
									if(r1b4Active01) r1b4Units++;
									if(r1b4Active02) r1b4Units++;
									if(r1b4Active03) r1b4Units++;
									if(r1b4Active04) r1b4Units++;

									r1b4Counted = true;
								}

								for(int i = 0; i < r1b4Units; i++) {

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||-- Monsters --||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(r1b4Name00.length() == 1) {
											cout << "----- " << r1b4Name00 << " ------";
										} else if(r1b4Name00.length() == 2) {
											cout << "----- " << r1b4Name00 << " -----";
										} else if(r1b4Name00.length() == 3) {
											cout << "---- " << r1b4Name00 << " -----";
										} else if(r1b4Name00.length() == 4) {
											cout << "---- " << r1b4Name00 << " ----";
										} else if(r1b4Name00.length() == 5) {
											cout << "--- " << r1b4Name00 << " ----";
										} else if(r1b4Name00.length() == 6) {
											cout << "--- " << r1b4Name00 << " ---";
										} else if(r1b4Name00.length() == 7) {
											cout << "-- " << r1b4Name00 << " ---";
										} else if(r1b4Name00.length() == 8) {
											cout << "-- " << r1b4Name00 << " --";
										} else if(r1b4Name00.length() == 9) {
											cout << "- " << r1b4Name00 << " --";
										} else if(r1b4Name00.length() == 10) {
											cout << "- " << r1b4Name00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b4TotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4TotalHealth00 < 100 && r1b4TotalHealth00 >= 10) {
											cout << "00" << r1b4TotalHealth00;
										} else if(r1b4TotalHealth00 < 1000 && r1b4TotalHealth00 >= 100) {
											cout << "0" << r1b4TotalHealth00;
										} else {
											cout << r1b4TotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b4Name00.length() == 1) {
											cout << "----- " << r1b4Name00 << " ------";
										} else if(r1b4Name00.length() == 2) {
											cout << "----- " << r1b4Name00 << " -----";
										} else if(r1b4Name00.length() == 3) {
											cout << "---- " << r1b4Name00 << " -----";
										} else if(r1b4Name00.length() == 4) {
											cout << "---- " << r1b4Name00 << " ----";
										} else if(r1b4Name00.length() == 5) {
											cout << "--- " << r1b4Name00 << " ----";
										} else if(r1b4Name00.length() == 6) {
											cout << "--- " << r1b4Name00 << " ---";
										} else if(r1b4Name00.length() == 7) {
											cout << "-- " << r1b4Name00 << " ---";
										} else if(r1b4Name00.length() == 8) {
											cout << "-- " << r1b4Name00 << " --";
										} else if(r1b4Name00.length() == 9) {
											cout << "- " << r1b4Name00 << " --";
										} else if(r1b4Name00.length() == 10) {
											cout << "- " << r1b4Name00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b4Attack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4Attack00 < 100 && r1b4Attack00 >= 10) {
											cout << "00" << r1b4Attack00;
										} else if(r1b4Attack00 < 1000 && r1b4Attack00 >= 100) {
											cout << "0" << r1b4Attack00;
										} else {
											cout << r1b4Attack00;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 1) {
										cout << "||";

										if(r1b4Name01.length() == 1) {
											cout << "----- " << r1b4Name01 << " ------";
										} else if(r1b4Name01.length() == 2) {
											cout << "----- " << r1b4Name01 << " -----";
										} else if(r1b4Name01.length() == 3) {
											cout << "---- " << r1b4Name01 << " -----";
										} else if(r1b4Name01.length() == 4) {
											cout << "---- " << r1b4Name01 << " ----";
										} else if(r1b4Name01.length() == 5) {
											cout << "--- " << r1b4Name01 << " ----";
										} else if(r1b4Name01.length() == 6) {
											cout << "--- " << r1b4Name01 << " ---";
										} else if(r1b4Name01.length() == 7) {
											cout << "-- " << r1b4Name01 << " ---";
										} else if(r1b4Name01.length() == 8) {
											cout << "-- " << r1b4Name01 << " --";
										} else if(r1b4Name01.length() == 9) {
											cout << "- " << r1b4Name01 << " --";
										} else if(r1b4Name01.length() == 10) {
											cout << "- " << r1b4Name01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b4TotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4TotalHealth01 < 100 && r1b4TotalHealth01 >= 10) {
											cout << "00" << r1b4TotalHealth01;
										} else if(r1b4TotalHealth01 < 1000 && r1b4TotalHealth01 >= 100) {
											cout << "0" << r1b4TotalHealth01;
										} else {
											cout << r1b4TotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b4Name01.length() == 1) {
											cout << "----- " << r1b4Name01 << " ------";
										} else if(r1b4Name01.length() == 2) {
											cout << "----- " << r1b4Name01 << " -----";
										} else if(r1b4Name01.length() == 3) {
											cout << "---- " << r1b4Name01 << " -----";
										} else if(r1b4Name01.length() == 4) {
											cout << "---- " << r1b4Name01 << " ----";
										} else if(r1b4Name01.length() == 5) {
											cout << "--- " << r1b4Name01 << " ----";
										} else if(r1b4Name01.length() == 6) {
											cout << "--- " << r1b4Name01 << " ---";
										} else if(r1b4Name01.length() == 7) {
											cout << "-- " << r1b4Name01 << " ---";
										} else if(r1b4Name01.length() == 8) {
											cout << "-- " << r1b4Name01 << " --";
										} else if(r1b4Name01.length() == 9) {
											cout << "- " << r1b4Name01 << " --";
										} else if(r1b4Name01.length() == 10) {
											cout << "- " << r1b4Name01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b4Attack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4Attack01 < 100 && r1b4Attack01 >= 10) {
											cout << "00" << r1b4Attack01;
										} else if(r1b4Attack01 < 1000 && r1b4Attack01 >= 100) {
											cout << "0" << r1b4Attack01;
										} else {
											cout << r1b4Attack01;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 2) {
										cout << "||";

										if(r1b4Name02.length() == 1) {
											cout << "----- " << r1b4Name02 << " ------";
										} else if(r1b4Name02.length() == 2) {
											cout << "----- " << r1b4Name02 << " -----";
										} else if(r1b4Name02.length() == 3) {
											cout << "---- " << r1b4Name02 << " -----";
										} else if(r1b4Name02.length() == 4) {
											cout << "---- " << r1b4Name02 << " ----";
										} else if(r1b4Name02.length() == 5) {
											cout << "--- " << r1b4Name02 << " ----";
										} else if(r1b4Name02.length() == 6) {
											cout << "--- " << r1b4Name02 << " ---";
										} else if(r1b4Name02.length() == 7) {
											cout << "-- " << r1b4Name02 << " ---";
										} else if(r1b4Name02.length() == 8) {
											cout << "-- " << r1b4Name02 << " --";
										} else if(r1b4Name02.length() == 9) {
											cout << "- " << r1b4Name02 << " --";
										} else if(r1b4Name02.length() == 10) {
											cout << "- " << r1b4Name02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b4TotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4TotalHealth02 < 100 && r1b4TotalHealth02 >= 10) {
											cout << "00" << r1b4TotalHealth02;
										} else if(r1b4TotalHealth02 < 1000 && r1b4TotalHealth02 >= 100) {
											cout << "0" << r1b4TotalHealth02;
										} else {
											cout << r1b4TotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b4Name02.length() == 1) {
											cout << "----- " << r1b4Name02 << " ------";
										} else if(r1b4Name02.length() == 2) {
											cout << "----- " << r1b4Name02 << " -----";
										} else if(r1b4Name02.length() == 3) {
											cout << "---- " << r1b4Name02 << " -----";
										} else if(r1b4Name02.length() == 4) {
											cout << "---- " << r1b4Name02 << " ----";
										} else if(r1b4Name02.length() == 5) {
											cout << "--- " << r1b4Name02 << " ----";
										} else if(r1b4Name02.length() == 6) {
											cout << "--- " << r1b4Name02 << " ---";
										} else if(r1b4Name02.length() == 7) {
											cout << "-- " << r1b4Name02 << " ---";
										} else if(r1b4Name02.length() == 8) {
											cout << "-- " << r1b4Name02 << " --";
										} else if(r1b4Name02.length() == 9) {
											cout << "- " << r1b4Name02 << " --";
										} else if(r1b4Name02.length() == 10) {
											cout << "- " << r1b4Name02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b4Attack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4Attack02 < 100 && r1b4Attack02 >= 10) {
											cout << "00" << r1b4Attack02;
										} else if(r1b4Attack02 < 1000 && r1b4Attack02 >= 100) {
											cout << "0" << r1b4Attack02;
										} else {
											cout << r1b4Attack02;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 3) {
										cout << "||";

										if(r1b4Name03.length() == 1) {
											cout << "----- " << r1b4Name03 << " ------";
										} else if(r1b4Name03.length() == 2) {
											cout << "----- " << r1b4Name03 << " -----";
										} else if(r1b4Name03.length() == 3) {
											cout << "---- " << r1b4Name03 << " -----";
										} else if(r1b4Name03.length() == 4) {
											cout << "---- " << r1b4Name03 << " ----";
										} else if(r1b4Name03.length() == 5) {
											cout << "--- " << r1b4Name03 << " ----";
										} else if(r1b4Name03.length() == 6) {
											cout << "--- " << r1b4Name03 << " ---";
										} else if(r1b4Name03.length() == 7) {
											cout << "-- " << r1b4Name03 << " ---";
										} else if(r1b4Name03.length() == 8) {
											cout << "-- " << r1b4Name03 << " --";
										} else if(r1b4Name03.length() == 9) {
											cout << "- " << r1b4Name03 << " --";
										} else if(r1b4Name03.length() == 10) {
											cout << "- " << r1b4Name03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b4TotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4TotalHealth03 < 100 && r1b4TotalHealth03 >= 10) {
											cout << "00" << r1b4TotalHealth03;
										} else if(r1b4TotalHealth03 < 1000 && r1b4TotalHealth03 >= 100) {
											cout << "0" << r1b4TotalHealth03;
										} else {
											cout << r1b4TotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b4Name03.length() == 1) {
											cout << "----- " << r1b4Name03 << " ------";
										} else if(r1b4Name03.length() == 2) {
											cout << "----- " << r1b4Name03 << " -----";
										} else if(r1b4Name03.length() == 3) {
											cout << "---- " << r1b4Name03 << " -----";
										} else if(r1b4Name03.length() == 4) {
											cout << "---- " << r1b4Name03 << " ----";
										} else if(r1b4Name03.length() == 5) {
											cout << "--- " << r1b4Name03 << " ----";
										} else if(r1b4Name03.length() == 6) {
											cout << "--- " << r1b4Name03 << " ---";
										} else if(r1b4Name03.length() == 7) {
											cout << "-- " << r1b4Name03 << " ---";
										} else if(r1b4Name03.length() == 8) {
											cout << "-- " << r1b4Name03 << " --";
										} else if(r1b4Name03.length() == 9) {
											cout << "- " << r1b4Name03 << " --";
										} else if(r1b4Name03.length() == 10) {
											cout << "- " << r1b4Name03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b4Attack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4Attack03 < 100 && r1b4Attack03 >= 10) {
											cout << "00" << r1b4Attack03;
										} else if(r1b4Attack03 < 1000 && r1b4Attack03 >= 100) {
											cout << "0" << r1b4Attack03;
										} else {
											cout << r1b4Attack03;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 4) {
										cout << "||";

										if(r1b4Name04.length() == 1) {
											cout << "----- " << r1b4Name04 << " ------";
										} else if(r1b4Name04.length() == 2) {
											cout << "----- " << r1b4Name04 << " -----";
										} else if(r1b4Name04.length() == 3) {
											cout << "---- " << r1b4Name04 << " -----";
										} else if(r1b4Name04.length() == 4) {
											cout << "---- " << r1b4Name04 << " ----";
										} else if(r1b4Name04.length() == 5) {
											cout << "--- " << r1b4Name04 << " ----";
										} else if(r1b4Name04.length() == 6) {
											cout << "--- " << r1b4Name04 << " ---";
										} else if(r1b4Name04.length() == 7) {
											cout << "-- " << r1b4Name04 << " ---";
										} else if(r1b4Name04.length() == 8) {
											cout << "-- " << r1b4Name04 << " --";
										} else if(r1b4Name04.length() == 9) {
											cout << "- " << r1b4Name04 << " --";
										} else if(r1b4Name04.length() == 10) {
											cout << "- " << r1b4Name04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b4TotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4TotalHealth04 < 100 && r1b4TotalHealth04 >= 10) {
											cout << "00" << r1b4TotalHealth04;
										} else if(r1b4TotalHealth04 < 1000 && r1b4TotalHealth04 >= 100) {
											cout << "0" << r1b4TotalHealth04;
										} else {
											cout << r1b4TotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b4Name04.length() == 1) {
											cout << "----- " << r1b4Name04 << " ------";
										} else if(r1b4Name04.length() == 2) {
											cout << "----- " << r1b4Name04 << " -----";
										} else if(r1b4Name04.length() == 3) {
											cout << "---- " << r1b4Name04 << " -----";
										} else if(r1b4Name04.length() == 4) {
											cout << "---- " << r1b4Name04 << " ----";
										} else if(r1b4Name04.length() == 5) {
											cout << "--- " << r1b4Name04 << " ----";
										} else if(r1b4Name04.length() == 6) {
											cout << "--- " << r1b4Name04 << " ---";
										} else if(r1b4Name04.length() == 7) {
											cout << "-- " << r1b4Name04 << " ---";
										} else if(r1b4Name04.length() == 8) {
											cout << "-- " << r1b4Name04 << " --";
										} else if(r1b4Name04.length() == 9) {
											cout << "- " << r1b4Name04 << " --";
										} else if(r1b4Name04.length() == 10) {
											cout << "- " << r1b4Name04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b4Attack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b4Attack04 < 100 && r1b4Attack04 >= 10) {
											cout << "00" << r1b4Attack04;
										} else if(r1b4Attack04 < 1000 && r1b4Attack04 >= 100) {
											cout << "0" << r1b4Attack04;
										} else {
											cout << r1b4Attack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								cout << "|| [1] Battle\n";

								cout << spacer;

								cout << "|| [2] Return\n";

								cout << spacer;

								cout << "|| Please enter a number: ";
								cin >> menuSelection;

								if(menuSelection < 1 || menuSelection > 2) {
									menuError = true;
								}

								while(menuError) {
									cout << spacer;
									cout << "|| " << error << "Number must be between 1 and 2.\n";
									cout << spacer;
									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection >= 1 && menuSelection <= 2) {
										menuError = false;
									}
								}

								if(menuSelection == 1) {
									// Battle time

									// Acquire total health points for heroes and monsters

									// Heroes

									if(heroActive00) heroTotalHealth += heroTotalHealth00;
									if(heroActive01) heroTotalHealth += heroTotalHealth01;
									if(heroActive02) heroTotalHealth += heroTotalHealth02;
									if(heroActive03) heroTotalHealth += heroTotalHealth03;
									if(heroActive04) heroTotalHealth += heroTotalHealth04;
									heroCurrentHealth = heroTotalHealth;

									// Monsters

									if(r1b4Active00) monsterTotalHealth += r1b4TotalHealth00;
									if(r1b4Active01) monsterTotalHealth += r1b4TotalHealth01;
									if(r1b4Active02) monsterTotalHealth += r1b4TotalHealth02;
									if(r1b4Active03) monsterTotalHealth += r1b4TotalHealth03;
									if(r1b4Active04) monsterTotalHealth += r1b4TotalHealth04;
									monsterCurrentHealth = monsterTotalHealth;

									// Used for choosing random units from either side

									uniform_int_distribution<int> theHero(1, numHeroes);
									uniform_int_distribution<int> theMonster(1, r1b4Units);

									// Loop battle until we have a winner

									while(playing) {
										uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b4Units));

										// Store names of two units that will be attacking

										string heroName = "";
										int    heroAttack = 0;
										string monsterName = "";
										int    monsterAttack = 0;
										int    heroUnit = 0;
										int    monsterUnit = 0;

										// Obtain hero details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											heroUnit = theHero(randomGenerator);

											if(heroUnit == 1 && heroStatus00) {
												heroName = heroName00;
												heroAttack = heroAttack00;
												playing = false;
											} else if(heroUnit == 2 && heroStatus01) {
												heroName = heroName01;
												heroAttack = heroAttack01;
												playing = false;
											} else if(heroUnit == 3 && heroStatus02) {
												heroName = heroName02;
												heroAttack = heroAttack02;
												playing = false;
											} else if(heroUnit == 4 && heroStatus03) {
												heroName = heroName03;
												heroAttack = heroAttack03;
												playing = false;
											} else if(heroUnit == 5 && heroStatus04) {
												heroName = heroName04;
												heroAttack = heroAttack04;
												playing = false;
											}
										}

										playing = true;

										// Obtain monster details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											monsterUnit = theMonster(randomGenerator);

											if(monsterUnit == 1 && r1b4Status00) {
												monsterName = r1b4Name00;
												monsterAttack = r1b4Attack00;
												playing = false;
											} else if(monsterUnit == 2 && r1b4Status01) {
												monsterName = r1b4Name01;
												monsterAttack = r1b4Attack01;
												playing = false;
											} else if(monsterUnit == 3 && r1b4Status02) {
												monsterName = r1b4Name02;
												monsterAttack = r1b4Attack02;
												playing = false;
											} else if(monsterUnit == 4 && r1b4Status03) {
												monsterName = r1b4Name03;
												monsterAttack = r1b4Attack03;
												playing = false;
											} else if(monsterUnit == 5 && r1b4Status04) {
												monsterName = r1b4Name04;
												monsterAttack = r1b4Attack04;
												playing = false;
											}
										}

										playing = true;

										// Time to choose who's attacking

										// 'int variable' will hold the total amount of units (heroes + monsters).
										// Whichever side has the most units will have a greater chance of being
										// selected to attack.

										int variable = totalUnits(randomGenerator);
										int attackingSide = 0;

										if(variable > 0 && variable <= numHeroes) {
											attackingSide = 0;
										} else if(variable > numHeroes || variable <= (numHeroes + r1b4Units)) {
											attackingSide = 1;
										}

										if(attackingSide == 0) {
											// Heroes attacking

											if(monsterUnit == 1) {
												if(heroAttack >= r1b4CurrentHealth00) {
													heroAttack = r1b4CurrentHealth00;
												}

												r1b4CurrentHealth00 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b4CurrentHealth00 <= 0) {
													r1b4TotalHealth00 = 0;
													r1b4Attack00 = 0;
													r1b4Status00 = false;
													r1b4Units--;
												}
											} else if(monsterUnit == 2) {
												if(heroAttack >= r1b4CurrentHealth01) {
													heroAttack = r1b4CurrentHealth01;
												}

												r1b4CurrentHealth01 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b4CurrentHealth01 <= 0) {
													r1b4TotalHealth01 = 0;
													r1b4Attack01 = 0;
													r1b4Status01 = false;
													r1b4Units--;
												}
											} else if(monsterUnit == 3) {
												if(heroAttack >= r1b4CurrentHealth02) {
													heroAttack = r1b4CurrentHealth02;
												}

												r1b4CurrentHealth02 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b4CurrentHealth02 <= 0) {
													r1b4TotalHealth02 = 0;
													r1b4Attack02 = 0;
													r1b4Status02 = false;
													r1b4Units--;
												}
											} else if(monsterUnit == 4) {
												if(heroAttack >= r1b4CurrentHealth03) {
													heroAttack = r1b4CurrentHealth03;
												}

												r1b4CurrentHealth03 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b4CurrentHealth03 <= 0) {
													r1b4TotalHealth03 = 0;
													r1b4Attack03 = 0;
													r1b4Status03 = false;
													r1b4Units--;
												}
											} else if(monsterUnit == 5) {
												if(heroAttack >= r1b4CurrentHealth04) {
													heroAttack = r1b4CurrentHealth04;
												}

												r1b4CurrentHealth04 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b4CurrentHealth04 <= 0) {
													r1b4TotalHealth04 = 0;
													r1b4Attack04 = 0;
													r1b4Status04 = false;
													r1b4Units--;
												}
											}
										} else if(attackingSide == 1) {
											// Monsters attacking

											if(heroUnit == 1) {
												if(monsterAttack >= heroCurrentHealth00) {
													monsterAttack = heroCurrentHealth00;
												}

												heroCurrentHealth00 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth00 <= 0) {
													heroStatus00 = false;
													numHeroes--;
												}
											} else if(heroUnit == 2) {
												if(monsterAttack >= heroCurrentHealth01) {
													monsterAttack = heroCurrentHealth01;
												}

												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth01 <= 0) {
													heroTotalHealth01 = 0;
													heroAttack01 = 0;
													heroStatus01 = false;
													numHeroes--;
												}
											} else if(heroUnit == 3) {
												if(monsterAttack >= heroCurrentHealth02) {
													monsterAttack = heroCurrentHealth02;
												}

												heroCurrentHealth02 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth02 <= 0) {
													heroTotalHealth02 = 0;
													heroAttack02 = 0;
													heroStatus02 = false;
													numHeroes--;
												}
											} else if(heroUnit == 4) {
												if(monsterAttack >= heroCurrentHealth03) {
													monsterAttack = heroCurrentHealth03;
												}

												heroCurrentHealth03 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth03 <= 0) {
													heroTotalHealth03 = 0;
													heroAttack03 = 0;
													heroStatus03 = false;
													numHeroes--;
												}
											} else if(heroUnit == 5) {
												if(monsterAttack >= heroCurrentHealth04) {
													monsterAttack = heroCurrentHealth04;
												}

												heroCurrentHealth04 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth04 <= 0) {
													heroTotalHealth04 = 0;
													heroAttack04 = 0;
													heroStatus04 = false;
													numHeroes--;
												}
											}
										}

										// Display battle results to user

										float hashCount = 0;
										float equalCount = 0;

										cout << "||-------------------------------- HEALTH -------------------------------||\n";
										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||-- Heroes --||- ";

										hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroCurrentHealth >= 10000) {
											cout << "9999";
										} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
											cout << heroCurrentHealth;
										} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
											cout << "0" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
											cout << "00" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
											cout << "000" << heroCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";

										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||- Monsters -||- ";

										hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(monsterCurrentHealth >= 10000) {
											cout << "9999";
										} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
											cout << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
											cout << "0" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
											cout << "00" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
											cout << "000" << monsterCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";
										cout << "||-----------------------------------------------------------------------||\n";

										cout << spacer;

										cout << spacer;


										if(attackingSide == 0) {
											cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
										} else if(attackingSide == 1) {
											cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
										}

										cout << spacer;

										cout << "||-------------- Heroes -------------||\n";
										cout << "||-----------------------------------||\n";

										if(heroActive00) {
											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
												cout << "0" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
												cout << "00" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
												cout << "000" << heroCurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus00) {
												cout << "- ALIVE -";
											} else if(!heroStatus00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive01) {
											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
												cout << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
												cout << "0" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
												cout << "00" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
												cout << "000" << heroCurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus01) {
												cout << "- ALIVE -";
											} else if(!heroStatus01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive02) {
											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
												cout << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
												cout << "0" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
												cout << "00" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
												cout << "000" << heroCurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus02) {
												cout << "- ALIVE -";
											} else if(!heroStatus02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive03) {
											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
												cout << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
												cout << "0" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
												cout << "00" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
												cout << "000" << heroCurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus03) {
												cout << "- ALIVE -";
											} else if(!heroStatus03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive04) {
											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
												cout << "0" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
												cout << "00" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
												cout << "000" << heroCurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus04) {
												cout << "- ALIVE -";
											} else if(!heroStatus04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										cout << "||------------- Monsters ------------||\n";
										cout << "||-----------------------------------||\n";

										if(r1b4Active00) {
											cout << "||";

											if(r1b4Name00.length() == 1) {
												cout << "----- " << r1b4Name00 << " ------";
											} else if(r1b4Name00.length() == 2) {
												cout << "----- " << r1b4Name00 << " -----";
											} else if(r1b4Name00.length() == 3) {
												cout << "---- " << r1b4Name00 << " -----";
											} else if(r1b4Name00.length() == 4) {
												cout << "---- " << r1b4Name00 << " ----";
											} else if(r1b4Name00.length() == 5) {
												cout << "--- " << r1b4Name00 << " ----";
											} else if(r1b4Name00.length() == 6) {
												cout << "--- " << r1b4Name00 << " ---";
											} else if(r1b4Name00.length() == 7) {
												cout << "-- " << r1b4Name00 << " ---";
											} else if(r1b4Name00.length() == 8) {
												cout << "-- " << r1b4Name00 << " --";
											} else if(r1b4Name00.length() == 9) {
												cout << "- " << r1b4Name00 << " --";
											} else if(r1b4Name00.length() == 10) {
												cout << "- " << r1b4Name00 << " -";
											}

											cout << "||- ";

											if(r1b4CurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(r1b4CurrentHealth00 >= 1000 && r1b4CurrentHealth00 < 10000) {
												cout << r1b4CurrentHealth00;
											} else if(r1b4CurrentHealth00 >= 100 && r1b4CurrentHealth00 < 1000) {
												cout << "0" << r1b4CurrentHealth00;
											} else if(r1b4CurrentHealth00 >= 10 && r1b4CurrentHealth00 < 100) {
												cout << "00" << r1b4CurrentHealth00;
											} else if(r1b4CurrentHealth00 >= 1 && r1b4CurrentHealth00 < 10) {
												cout << "000" << r1b4CurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b4Status00) {
												cout << "- ALIVE -";
											} else if(!r1b4Status00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b4Active01) {
											cout << "||";

											if(r1b4Name01.length() == 1) {
												cout << "----- " << r1b4Name01 << " ------";
											} else if(r1b4Name01.length() == 2) {
												cout << "----- " << r1b4Name01 << " -----";
											} else if(r1b4Name01.length() == 3) {
												cout << "---- " << r1b4Name01 << " -----";
											} else if(r1b4Name01.length() == 4) {
												cout << "---- " << r1b4Name01 << " ----";
											} else if(r1b4Name01.length() == 5) {
												cout << "--- " << r1b4Name01 << " ----";
											} else if(r1b4Name01.length() == 6) {
												cout << "--- " << r1b4Name01 << " ---";
											} else if(r1b4Name01.length() == 7) {
												cout << "-- " << r1b4Name01 << " ---";
											} else if(r1b4Name01.length() == 8) {
												cout << "-- " << r1b4Name01 << " --";
											} else if(r1b4Name01.length() == 9) {
												cout << "- " << r1b4Name01 << " --";
											} else if(r1b4Name01.length() == 10) {
												cout << "- " << r1b4Name01 << " -";
											}

											cout << "||- ";

											if(r1b4CurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(r1b4CurrentHealth01 >= 1000 && r1b4CurrentHealth01 < 10000) {
												cout << r1b4CurrentHealth01;
											} else if(r1b4CurrentHealth01 >= 100 && r1b4CurrentHealth01 < 1000) {
												cout << "0" << r1b4CurrentHealth01;
											} else if(r1b4CurrentHealth01 >= 10 && r1b4CurrentHealth01 < 100) {
												cout << "00" << r1b4CurrentHealth01;
											} else if(r1b4CurrentHealth01 >= 1 && r1b4CurrentHealth01 < 10) {
												cout << "000" << r1b4CurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b4Status01) {
												cout << "- ALIVE -";
											} else if(!r1b4Status01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b4Active02) {
											cout << "||";

											if(r1b4Name02.length() == 1) {
												cout << "----- " << r1b4Name02 << " ------";
											} else if(r1b4Name02.length() == 2) {
												cout << "----- " << r1b4Name02 << " -----";
											} else if(r1b4Name02.length() == 3) {
												cout << "---- " << r1b4Name02 << " -----";
											} else if(r1b4Name02.length() == 4) {
												cout << "---- " << r1b4Name02 << " ----";
											} else if(r1b4Name02.length() == 5) {
												cout << "--- " << r1b4Name02 << " ----";
											} else if(r1b4Name02.length() == 6) {
												cout << "--- " << r1b4Name02 << " ---";
											} else if(r1b4Name02.length() == 7) {
												cout << "-- " << r1b4Name02 << " ---";
											} else if(r1b4Name02.length() == 8) {
												cout << "-- " << r1b4Name02 << " --";
											} else if(r1b4Name02.length() == 9) {
												cout << "- " << r1b4Name02 << " --";
											} else if(r1b4Name02.length() == 10) {
												cout << "- " << r1b4Name02 << " -";
											}

											cout << "||- ";

											if(r1b4CurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(r1b4CurrentHealth02 >= 1000 && r1b4CurrentHealth02 < 10000) {
												cout << r1b4CurrentHealth02;
											} else if(r1b4CurrentHealth02 >= 100 && r1b4CurrentHealth02 < 1000) {
												cout << "0" << r1b4CurrentHealth02;
											} else if(r1b4CurrentHealth02 >= 10 && r1b4CurrentHealth02 < 100) {
												cout << "00" << r1b4CurrentHealth02;
											} else if(r1b4CurrentHealth02 >= 1 && r1b4CurrentHealth02 < 10) {
												cout << "000" << r1b4CurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b4Status02) {
												cout << "- ALIVE -";
											} else if(!r1b4Status02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b4Active03) {
											cout << "||";

											if(r1b4Name03.length() == 1) {
												cout << "----- " << r1b4Name03 << " ------";
											} else if(r1b4Name03.length() == 2) {
												cout << "----- " << r1b4Name03 << " -----";
											} else if(r1b4Name03.length() == 3) {
												cout << "---- " << r1b4Name03 << " -----";
											} else if(r1b4Name03.length() == 4) {
												cout << "---- " << r1b4Name03 << " ----";
											} else if(r1b4Name03.length() == 5) {
												cout << "--- " << r1b4Name03 << " ----";
											} else if(r1b4Name03.length() == 6) {
												cout << "--- " << r1b4Name03 << " ---";
											} else if(r1b4Name03.length() == 7) {
												cout << "-- " << r1b4Name03 << " ---";
											} else if(r1b4Name03.length() == 8) {
												cout << "-- " << r1b4Name03 << " --";
											} else if(r1b4Name03.length() == 9) {
												cout << "- " << r1b4Name03 << " --";
											} else if(r1b4Name03.length() == 10) {
												cout << "- " << r1b4Name03 << " -";
											}

											cout << "||- ";

											if(r1b4CurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(r1b4CurrentHealth03 >= 1000 && r1b4CurrentHealth03 < 10000) {
												cout << r1b4CurrentHealth03;
											} else if(r1b4CurrentHealth03 >= 100 && r1b4CurrentHealth03 < 1000) {
												cout << "0" << r1b4CurrentHealth03;
											} else if(r1b4CurrentHealth03 >= 10 && r1b4CurrentHealth03 < 100) {
												cout << "00" << r1b4CurrentHealth03;
											} else if(r1b4CurrentHealth03 >= 1 && r1b4CurrentHealth03 < 10) {
												cout << "000" << r1b4CurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b4Status03) {
												cout << "- ALIVE -";
											} else if(!r1b4Status03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b4Active04) {
											cout << "||";

											if(r1b4Name04.length() == 1) {
												cout << "----- " << r1b4Name04 << " ------";
											} else if(r1b4Name04.length() == 2) {
												cout << "----- " << r1b4Name04 << " -----";
											} else if(r1b4Name04.length() == 3) {
												cout << "---- " << r1b4Name04 << " -----";
											} else if(r1b4Name04.length() == 4) {
												cout << "---- " << r1b4Name04 << " ----";
											} else if(r1b4Name04.length() == 5) {
												cout << "--- " << r1b4Name04 << " ----";
											} else if(r1b4Name04.length() == 6) {
												cout << "--- " << r1b4Name04 << " ---";
											} else if(r1b4Name04.length() == 7) {
												cout << "-- " << r1b4Name04 << " ---";
											} else if(r1b4Name04.length() == 8) {
												cout << "-- " << r1b4Name04 << " --";
											} else if(r1b4Name04.length() == 9) {
												cout << "- " << r1b4Name04 << " --";
											} else if(r1b4Name04.length() == 10) {
												cout << "- " << r1b4Name04 << " -";
											}

											cout << "||- ";

											if(r1b4CurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(r1b4CurrentHealth04 >= 1000 && r1b4CurrentHealth04 < 10000) {
												cout << r1b4CurrentHealth04;
											} else if(r1b4CurrentHealth04 >= 100 && r1b4CurrentHealth04 < 1000) {
												cout << "0" << r1b4CurrentHealth04;
											} else if(r1b4CurrentHealth04 >= 10 && r1b4CurrentHealth04 < 100) {
												cout << "00" << r1b4CurrentHealth04;
											} else if(r1b4CurrentHealth04 >= 1 && r1b4CurrentHealth04 < 10) {
												cout << "000" << r1b4CurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b4Status04) {
												cout << "- ALIVE -";
											} else if(!r1b4Status04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										// Crappy timer to slow loop

										int num1 = 0;
										int num2 = 0;

										while(playing) {
											num1++;

											if(num1 >= 100000) {
												num2++;
												num1 = 0;
											}

											if(num2 >= 10000) {
												num1 = 0;
												num2 = 0;
												playing = false;
											}
										}

										playing = true;

										if(numHeroes <= 0 || r1b4Units <= 0) {
											playing = false;
										}
									}

									playing = true;

									// Update logic

									bool win = false;
									int losses = 0;
									int kills = 0;
									int population = 0;
									int currency = 0;

									if(numHeroes <= 0 && r1b4Units > 0) {
										win = false;
										conquestDefeats++;

										uniform_int_distribution<int> killed(5, (r1b4Units * 10));

										population = killed(randomGenerator);

										populationAlive -= population;
										populationDead += population;

										currency = (r1b4CurrentHealth00 + r1b4CurrentHealth01 + r1b4CurrentHealth02 + r1b4CurrentHealth03 + r1b4CurrentHealth04) * r1b4Units;

										lostCredits += currency;

										if((currentCredits - currency) <= 0) {
											currentCredits = 0;
										} else {
											currentCredits -= currency;
										}

									} else if(numHeroes > 0 && r1b4Units <= 0) {
										win = true;

										r1b4Active = false;
										r1b5Active = true;

										conquestWins++;

										currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

										wonCredits += currency;
										currentCredits += wonCredits;
									}

									if(!heroStatus00 && heroActive00) {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
										numHeroes++;
									} else {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
									}

									if(!heroStatus01 && heroActive01) {
										heroTotalHealth01 = 0;
										heroCurrentHealth01 = heroTotalHealth01;
										heroAttack01 = 0;
										heroActive01 = false;
										losses++;
									} else {
										heroCurrentHealth01 = heroTotalHealth01;
										heroStatus01 = true;
									}

									if(!heroStatus02 && heroActive02) {
										heroTotalHealth02 = 0;
										heroCurrentHealth02 = heroTotalHealth02;
										heroAttack02 = 0;
										heroActive02 = false;
										losses++;
									} else {
										heroCurrentHealth02 = heroTotalHealth02;
										heroStatus02 = true;
									}

									if(!heroStatus03 && heroActive03) {
										heroTotalHealth03 = 0;
										heroCurrentHealth03 = heroTotalHealth;
										heroAttack03 = 0;
										heroActive03 = false;
										losses++;
									} else {
										heroCurrentHealth03 = heroTotalHealth03;
										heroStatus03 = true;
									}

									if(!heroStatus04 && heroActive04) {
										heroTotalHealth04 = 0;
										heroCurrentHealth04 = heroTotalHealth04;
										heroAttack04 = 0;
										heroActive04 = false;
										losses++;
									} else {
										heroCurrentHealth04 = heroTotalHealth04;
										heroStatus04 = true;
									}

									if(!r1b4Status00 && r1b4Active00) {
										r1b4TotalHealth00 = 0;
										r1b4CurrentHealth00 = r1b4TotalHealth00;
										r1b4Attack00 = 0;
										r1b4Active = false;
										kills++;
									} else {
										r1b4CurrentHealth00 = r1b4TotalHealth00;
										r1b4Status00 = true;
									}

									if(!r1b4Status01 && r1b4Active01) {
										r1b4TotalHealth01 = 0;
										r1b4CurrentHealth01 = r1b4TotalHealth01;
										r1b4Attack01 = 0;
										r1b4Active = false;
										kills++;
									} else {
										r1b4CurrentHealth01 = r1b4TotalHealth01;
										r1b4Status01 = true;
									}

									if(!r1b4Status02 && r1b4Active02) {
										r1b4TotalHealth02 = 0;
										r1b4CurrentHealth02 = r1b4TotalHealth02;
										r1b4Attack02 = 0;
										r1b4Active = false;
										kills++;
									} else {
										r1b4CurrentHealth02 = r1b4TotalHealth02;
										r1b4Status02 = true;
									}

									if(!r1b4Status03 && r1b4Active03) {
										r1b4TotalHealth03 = 0;
										r1b4CurrentHealth03 = r1b4TotalHealth03;
										r1b4Attack03 = 0;
										r1b4Active = false;
										kills++;
									} else {
										r1b4CurrentHealth03 = r1b4TotalHealth03;
										r1b4Status03 = true;
									}

									if(!r1b4Status04 && r1b4Active04) {
										r1b4TotalHealth04 = 0;
										r1b4CurrentHealth04 = r1b4TotalHealth04;
										r1b4Attack04 = 0;
										r1b4Active = false;
										kills++;
									} else {
										r1b4CurrentHealth04 = r1b4TotalHealth04;
										r1b4Status00 = true;
									}

									deadHeroes += losses;
									enemiesKilled += kills;

									// Display end results to user

									cout << border;
									cout << "||-------------------------- Battle Results -----------------------------||\n";
									cout << border;

									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									if(win) {
										cout << "||- After a long and exhausting battle you come out victorious. You\n";
										cout << "||- have successfully destroyed the base and all monsters within it.\n";
										cout << "||- It's now time to take whatever loot is available and continue \n";
										cout << "||- onto the next base.\n";

										cout << spacer;

										cout << "||- Credits won:       " << currency << "\n";
									} else if(!win) {
										cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
										cout << "||- at the hands of the monsters. ";

										if(numHeroes > 1) {
											cout << "You and your recruited heroes\n";
											cout << "||- fought bravely but proved no match for the base.\n";
										} else {
											cout << "You fought bravely on your own but\n";
											cout << "||- proved no match for the base.\n";
										}
										cout << spacer;

										cout << "||- Defeated there is little that stands in the way of the monsters as\n";
										cout << "||- they lay slaughter to the population.\n";

										cout << spacer;

										cout << "||- Credits lost:      " << currency << "\n";
									}

									cout << spacer;

									cout << "||- Heroes killed:     " << losses << "\n";
									cout << "||- Enemies killed:    " << kills << "\n";
									cout << "||- Population killed: " << population << "\n";

									cout << spacer;

									cout << "|| [1] Continue\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection != 1) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be 1.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection == 1) {
											menuError = false;
										}
									}

								}
							} else if(menuSelection == 5 && r1b5Active) {
								// Base 5

								cout << border;
								cout << "||------------------------------ Base 5 ---------------------------------||\n";
								cout << border;
								cout << spacer;

								cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

								cout << spacer;

								// Create a for loop to loop through each hero and display it
								// to the player

								for(int i = 0; i < numHeroes; i++) {

									// This variable will be used to store the heros health and attack bars

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||--- Heroes ---||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
											cout << "00" << heroTotalHealth00;
										} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
											cout << "0" << heroTotalHealth00;
										} else {
											cout << heroTotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack00 < 100 && heroAttack00 >= 10) {
											cout << "00" << heroAttack00;
										} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
											cout << "0" << heroAttack00;
										} else {
											cout << heroAttack00;
										}

										cout << " -||\n";
									} else if(i == 1) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
											cout << "00" << heroTotalHealth01;
										} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
											cout << "0" << heroTotalHealth01;
										} else {
											cout << heroTotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack01 < 100 && heroAttack01 >= 10) {
											cout << "00" << heroAttack01;
										} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
											cout << "0" << heroAttack01;
										} else {
											cout << heroAttack01;
										}

										cout << " -||\n";
									} else if(i == 2) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
											cout << "00" << heroTotalHealth02;
										} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
											cout << "0" << heroTotalHealth02;
										} else {
											cout << heroTotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack02 < 100 && heroAttack02 >= 10) {
											cout << "00" << heroAttack02;
										} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
											cout << "0" << heroAttack02;
										} else {
											cout << heroAttack02;
										}

										cout << " -||\n";
									} else if(i == 3) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
											cout << "00" << heroTotalHealth03;
										} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
											cout << "0" << heroTotalHealth03;
										} else {
											cout << heroTotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack03 < 100 && heroAttack03 >= 10) {
											cout << "00" << heroAttack03;
										} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
											cout << "0" << heroAttack03;
										} else {
											cout << heroAttack03;
										}

										cout << " -||\n";
									} else if(i == 4) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
											cout << "00" << heroTotalHealth04;
										} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
											cout << "0" << heroTotalHealth04;
										} else {
											cout << heroTotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack04 < 100 && heroAttack04 >= 10) {
											cout << "00" << heroAttack04;
										} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
											cout << "0" << heroAttack04;
										} else {
											cout << heroAttack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								// Display monsters to player

								if(!r1b5Counted) {
									if(r1b5Active00) r1b5Units++;
									if(r1b5Active01) r1b5Units++;
									if(r1b5Active02) r1b5Units++;
									if(r1b5Active03) r1b5Units++;
									if(r1b5Active04) r1b5Units++;

									r1b5Counted = true;
								}

								for(int i = 0; i < r1b5Units; i++) {

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||-- Monsters --||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(r1b5Name00.length() == 1) {
											cout << "----- " << r1b5Name00 << " ------";
										} else if(r1b5Name00.length() == 2) {
											cout << "----- " << r1b5Name00 << " -----";
										} else if(r1b5Name00.length() == 3) {
											cout << "---- " << r1b5Name00 << " -----";
										} else if(r1b5Name00.length() == 4) {
											cout << "---- " << r1b5Name00 << " ----";
										} else if(r1b5Name00.length() == 5) {
											cout << "--- " << r1b5Name00 << " ----";
										} else if(r1b5Name00.length() == 6) {
											cout << "--- " << r1b5Name00 << " ---";
										} else if(r1b5Name00.length() == 7) {
											cout << "-- " << r1b5Name00 << " ---";
										} else if(r1b5Name00.length() == 8) {
											cout << "-- " << r1b5Name00 << " --";
										} else if(r1b5Name00.length() == 9) {
											cout << "- " << r1b5Name00 << " --";
										} else if(r1b5Name00.length() == 10) {
											cout << "- " << r1b5Name00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b5TotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5TotalHealth00 < 100 && r1b5TotalHealth00 >= 10) {
											cout << "00" << r1b5TotalHealth00;
										} else if(r1b5TotalHealth00 < 1000 && r1b5TotalHealth00 >= 100) {
											cout << "0" << r1b5TotalHealth00;
										} else {
											cout << r1b5TotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b5Name00.length() == 1) {
											cout << "----- " << r1b5Name00 << " ------";
										} else if(r1b5Name00.length() == 2) {
											cout << "----- " << r1b5Name00 << " -----";
										} else if(r1b5Name00.length() == 3) {
											cout << "---- " << r1b5Name00 << " -----";
										} else if(r1b5Name00.length() == 4) {
											cout << "---- " << r1b5Name00 << " ----";
										} else if(r1b5Name00.length() == 5) {
											cout << "--- " << r1b5Name00 << " ----";
										} else if(r1b5Name00.length() == 6) {
											cout << "--- " << r1b5Name00 << " ---";
										} else if(r1b5Name00.length() == 7) {
											cout << "-- " << r1b5Name00 << " ---";
										} else if(r1b5Name00.length() == 8) {
											cout << "-- " << r1b5Name00 << " --";
										} else if(r1b5Name00.length() == 9) {
											cout << "- " << r1b5Name00 << " --";
										} else if(r1b5Name00.length() == 10) {
											cout << "- " << r1b5Name00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b5Attack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5Attack00 < 100 && r1b5Attack00 >= 10) {
											cout << "00" << r1b5Attack00;
										} else if(r1b5Attack00 < 1000 && r1b5Attack00 >= 100) {
											cout << "0" << r1b5Attack00;
										} else {
											cout << r1b5Attack00;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 1) {
										cout << "||";

										if(r1b5Name01.length() == 1) {
											cout << "----- " << r1b5Name01 << " ------";
										} else if(r1b5Name01.length() == 2) {
											cout << "----- " << r1b5Name01 << " -----";
										} else if(r1b5Name01.length() == 3) {
											cout << "---- " << r1b5Name01 << " -----";
										} else if(r1b5Name01.length() == 4) {
											cout << "---- " << r1b5Name01 << " ----";
										} else if(r1b5Name01.length() == 5) {
											cout << "--- " << r1b5Name01 << " ----";
										} else if(r1b5Name01.length() == 6) {
											cout << "--- " << r1b5Name01 << " ---";
										} else if(r1b5Name01.length() == 7) {
											cout << "-- " << r1b5Name01 << " ---";
										} else if(r1b5Name01.length() == 8) {
											cout << "-- " << r1b5Name01 << " --";
										} else if(r1b5Name01.length() == 9) {
											cout << "- " << r1b5Name01 << " --";
										} else if(r1b5Name01.length() == 10) {
											cout << "- " << r1b5Name01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b5TotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5TotalHealth01 < 100 && r1b5TotalHealth01 >= 10) {
											cout << "00" << r1b5TotalHealth01;
										} else if(r1b5TotalHealth01 < 1000 && r1b4TotalHealth01 >= 100) {
											cout << "0" << r1b5TotalHealth01;
										} else {
											cout << r1b5TotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b5Name01.length() == 1) {
											cout << "----- " << r1b5Name01 << " ------";
										} else if(r1b5Name01.length() == 2) {
											cout << "----- " << r1b5Name01 << " -----";
										} else if(r1b5Name01.length() == 3) {
											cout << "---- " << r1b5Name01 << " -----";
										} else if(r1b5Name01.length() == 4) {
											cout << "---- " << r1b5Name01 << " ----";
										} else if(r1b5Name01.length() == 5) {
											cout << "--- " << r1b5Name01 << " ----";
										} else if(r1b5Name01.length() == 6) {
											cout << "--- " << r1b5Name01 << " ---";
										} else if(r1b5Name01.length() == 7) {
											cout << "-- " << r1b5Name01 << " ---";
										} else if(r1b5Name01.length() == 8) {
											cout << "-- " << r1b5Name01 << " --";
										} else if(r1b5Name01.length() == 9) {
											cout << "- " << r1b5Name01 << " --";
										} else if(r1b5Name01.length() == 10) {
											cout << "- " << r1b5Name01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b5Attack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5Attack01 < 100 && r1b5Attack01 >= 10) {
											cout << "00" << r1b5Attack01;
										} else if(r1b5Attack01 < 1000 && r1b5Attack01 >= 100) {
											cout << "0" << r1b5Attack01;
										} else {
											cout << r1b5Attack01;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 2) {
										cout << "||";

										if(r1b5Name02.length() == 1) {
											cout << "----- " << r1b5Name02 << " ------";
										} else if(r1b5Name02.length() == 2) {
											cout << "----- " << r1b5Name02 << " -----";
										} else if(r1b5Name02.length() == 3) {
											cout << "---- " << r1b5Name02 << " -----";
										} else if(r1b5Name02.length() == 4) {
											cout << "---- " << r1b5Name02 << " ----";
										} else if(r1b5Name02.length() == 5) {
											cout << "--- " << r1b5Name02 << " ----";
										} else if(r1b5Name02.length() == 6) {
											cout << "--- " << r1b5Name02 << " ---";
										} else if(r1b5Name02.length() == 7) {
											cout << "-- " << r1b5Name02 << " ---";
										} else if(r1b5Name02.length() == 8) {
											cout << "-- " << r1b5Name02 << " --";
										} else if(r1b5Name02.length() == 9) {
											cout << "- " << r1b5Name02 << " --";
										} else if(r1b5Name02.length() == 10) {
											cout << "- " << r1b5Name02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b5TotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5TotalHealth02 < 100 && r1b5TotalHealth02 >= 10) {
											cout << "00" << r1b5TotalHealth02;
										} else if(r1b5TotalHealth02 < 1000 && r1b5TotalHealth02 >= 100) {
											cout << "0" << r1b5TotalHealth02;
										} else {
											cout << r1b5TotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b5Name02.length() == 1) {
											cout << "----- " << r1b5Name02 << " ------";
										} else if(r1b5Name02.length() == 2) {
											cout << "----- " << r1b5Name02 << " -----";
										} else if(r1b5Name02.length() == 3) {
											cout << "---- " << r1b5Name02 << " -----";
										} else if(r1b5Name02.length() == 4) {
											cout << "---- " << r1b5Name02 << " ----";
										} else if(r1b5Name02.length() == 5) {
											cout << "--- " << r1b5Name02 << " ----";
										} else if(r1b5Name02.length() == 6) {
											cout << "--- " << r1b5Name02 << " ---";
										} else if(r1b5Name02.length() == 7) {
											cout << "-- " << r1b5Name02 << " ---";
										} else if(r1b5Name02.length() == 8) {
											cout << "-- " << r1b5Name02 << " --";
										} else if(r1b5Name02.length() == 9) {
											cout << "- " << r1b5Name02 << " --";
										} else if(r1b5Name02.length() == 10) {
											cout << "- " << r1b5Name02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b5Attack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5Attack02 < 100 && r1b5Attack02 >= 10) {
											cout << "00" << r1b5Attack02;
										} else if(r1b5Attack02 < 1000 && r1b5Attack02 >= 100) {
											cout << "0" << r1b5Attack02;
										} else {
											cout << r1b5Attack02;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 3) {
										cout << "||";

										if(r1b5Name03.length() == 1) {
											cout << "----- " << r1b5Name03 << " ------";
										} else if(r1b5Name03.length() == 2) {
											cout << "----- " << r1b5Name03 << " -----";
										} else if(r1b5Name03.length() == 3) {
											cout << "---- " << r1b5Name03 << " -----";
										} else if(r1b5Name03.length() == 4) {
											cout << "---- " << r1b5Name03 << " ----";
										} else if(r1b5Name03.length() == 5) {
											cout << "--- " << r1b5Name03 << " ----";
										} else if(r1b5Name03.length() == 6) {
											cout << "--- " << r1b5Name03 << " ---";
										} else if(r1b5Name03.length() == 7) {
											cout << "-- " << r1b5Name03 << " ---";
										} else if(r1b5Name03.length() == 8) {
											cout << "-- " << r1b5Name03 << " --";
										} else if(r1b5Name03.length() == 9) {
											cout << "- " << r1b5Name03 << " --";
										} else if(r1b5Name03.length() == 10) {
											cout << "- " << r1b5Name03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b5TotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5TotalHealth03 < 100 && r1b5TotalHealth03 >= 10) {
											cout << "00" << r1b5TotalHealth03;
										} else if(r1b5TotalHealth03 < 1000 && r1b5TotalHealth03 >= 100) {
											cout << "0" << r1b5TotalHealth03;
										} else {
											cout << r1b5TotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b5Name03.length() == 1) {
											cout << "----- " << r1b5Name03 << " ------";
										} else if(r1b5Name03.length() == 2) {
											cout << "----- " << r1b5Name03 << " -----";
										} else if(r1b5Name03.length() == 3) {
											cout << "---- " << r1b5Name03 << " -----";
										} else if(r1b5Name03.length() == 4) {
											cout << "---- " << r1b5Name03 << " ----";
										} else if(r1b5Name03.length() == 5) {
											cout << "--- " << r1b5Name03 << " ----";
										} else if(r1b5Name03.length() == 6) {
											cout << "--- " << r1b5Name03 << " ---";
										} else if(r1b5Name03.length() == 7) {
											cout << "-- " << r1b5Name03 << " ---";
										} else if(r1b5Name03.length() == 8) {
											cout << "-- " << r1b5Name03 << " --";
										} else if(r1b5Name03.length() == 9) {
											cout << "- " << r1b5Name03 << " --";
										} else if(r1b5Name03.length() == 10) {
											cout << "- " << r1b5Name03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b5Attack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5Attack03 < 100 && r1b5Attack03 >= 10) {
											cout << "00" << r1b5Attack03;
										} else if(r1b5Attack03 < 1000 && r1b5Attack03 >= 100) {
											cout << "0" << r1b5Attack03;
										} else {
											cout << r1b5Attack03;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 4) {
										cout << "||";

										if(r1b5Name04.length() == 1) {
											cout << "----- " << r1b5Name04 << " ------";
										} else if(r1b5Name04.length() == 2) {
											cout << "----- " << r1b5Name04 << " -----";
										} else if(r1b5Name04.length() == 3) {
											cout << "---- " << r1b5Name04 << " -----";
										} else if(r1b5Name04.length() == 4) {
											cout << "---- " << r1b5Name04 << " ----";
										} else if(r1b5Name04.length() == 5) {
											cout << "--- " << r1b5Name04 << " ----";
										} else if(r1b5Name04.length() == 6) {
											cout << "--- " << r1b5Name04 << " ---";
										} else if(r1b5Name04.length() == 7) {
											cout << "-- " << r1b5Name04 << " ---";
										} else if(r1b5Name04.length() == 8) {
											cout << "-- " << r1b5Name04 << " --";
										} else if(r1b5Name04.length() == 9) {
											cout << "- " << r1b5Name04 << " --";
										} else if(r1b5Name04.length() == 10) {
											cout << "- " << r1b5Name04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b5TotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5TotalHealth04 < 100 && r1b5TotalHealth04 >= 10) {
											cout << "00" << r1b5TotalHealth04;
										} else if(r1b5TotalHealth04 < 1000 && r1b5TotalHealth04 >= 100) {
											cout << "0" << r1b5TotalHealth04;
										} else {
											cout << r1b5TotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b5Name04.length() == 1) {
											cout << "----- " << r1b5Name04 << " ------";
										} else if(r1b5Name04.length() == 2) {
											cout << "----- " << r1b5Name04 << " -----";
										} else if(r1b5Name04.length() == 3) {
											cout << "---- " << r1b5Name04 << " -----";
										} else if(r1b5Name04.length() == 4) {
											cout << "---- " << r1b5Name04 << " ----";
										} else if(r1b5Name04.length() == 5) {
											cout << "--- " << r1b5Name04 << " ----";
										} else if(r1b5Name04.length() == 6) {
											cout << "--- " << r1b5Name04 << " ---";
										} else if(r1b5Name04.length() == 7) {
											cout << "-- " << r1b5Name04 << " ---";
										} else if(r1b5Name04.length() == 8) {
											cout << "-- " << r1b5Name04 << " --";
										} else if(r1b5Name04.length() == 9) {
											cout << "- " << r1b5Name04 << " --";
										} else if(r1b5Name04.length() == 10) {
											cout << "- " << r1b5Name04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b5Attack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b5Attack04 < 100 && r1b5Attack04 >= 10) {
											cout << "00" << r1b5Attack04;
										} else if(r1b5Attack04 < 1000 && r1b5Attack04 >= 100) {
											cout << "0" << r1b5Attack04;
										} else {
											cout << r1b5Attack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								cout << "|| [1] Battle\n";

								cout << spacer;

								cout << "|| [2] Return\n";

								cout << spacer;

								cout << "|| Please enter a number: ";
								cin >> menuSelection;

								if(menuSelection < 1 || menuSelection > 2) {
									menuError = true;
								}

								while(menuError) {
									cout << spacer;
									cout << "|| " << error << "Number must be between 1 and 2.\n";
									cout << spacer;
									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection >= 1 && menuSelection <= 2) {
										menuError = false;
									}
								}

								if(menuSelection == 1) {
									// Battle time

									// Acquire total health points for heroes and monsters

									// Heroes

									if(heroActive00) heroTotalHealth += heroTotalHealth00;
									if(heroActive01) heroTotalHealth += heroTotalHealth01;
									if(heroActive02) heroTotalHealth += heroTotalHealth02;
									if(heroActive03) heroTotalHealth += heroTotalHealth03;
									if(heroActive04) heroTotalHealth += heroTotalHealth04;
									heroCurrentHealth = heroTotalHealth;

									// Monsters

									if(r1b5Active00) monsterTotalHealth += r1b5TotalHealth00;
									if(r1b5Active01) monsterTotalHealth += r1b5TotalHealth01;
									if(r1b5Active02) monsterTotalHealth += r1b5TotalHealth02;
									if(r1b5Active03) monsterTotalHealth += r1b5TotalHealth03;
									if(r1b5Active04) monsterTotalHealth += r1b5TotalHealth04;
									monsterCurrentHealth = monsterTotalHealth;

									// Used for choosing random units from either side

									uniform_int_distribution<int> theHero(1, numHeroes);
									uniform_int_distribution<int> theMonster(1, r1b5Units);

									// Loop battle until we have a winner

									while(playing) {
										uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b5Units));

										// Store names of two units that will be attacking

										string heroName = "";
										int    heroAttack = 0;
										string monsterName = "";
										int    monsterAttack = 0;
										int    heroUnit = 0;
										int    monsterUnit = 0;

										// Obtain hero details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											heroUnit = theHero(randomGenerator);

											if(heroUnit == 1 && heroStatus00) {
												heroName = heroName00;
												heroAttack = heroAttack00;
												playing = false;
											} else if(heroUnit == 2 && heroStatus01) {
												heroName = heroName01;
												heroAttack = heroAttack01;
												playing = false;
											} else if(heroUnit == 3 && heroStatus02) {
												heroName = heroName02;
												heroAttack = heroAttack02;
												playing = false;
											} else if(heroUnit == 4 && heroStatus03) {
												heroName = heroName03;
												heroAttack = heroAttack03;
												playing = false;
											} else if(heroUnit == 5 && heroStatus04) {
												heroName = heroName04;
												heroAttack = heroAttack04;
												playing = false;
											}
										}

										playing = true;

										// Obtain monster details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											monsterUnit = theMonster(randomGenerator);

											if(monsterUnit == 1 && r1b5Status00) {
												monsterName = r1b5Name00;
												monsterAttack = r1b5Attack00;
												playing = false;
											} else if(monsterUnit == 2 && r1b5Status01) {
												monsterName = r1b5Name01;
												monsterAttack = r1b5Attack01;
												playing = false;
											} else if(monsterUnit == 3 && r1b5Status02) {
												monsterName = r1b5Name02;
												monsterAttack = r1b5Attack02;
												playing = false;
											} else if(monsterUnit == 4 && r1b5Status03) {
												monsterName = r1b5Name03;
												monsterAttack = r1b5Attack03;
												playing = false;
											} else if(monsterUnit == 5 && r1b5Status04) {
												monsterName = r1b5Name04;
												monsterAttack = r1b5Attack04;
												playing = false;
											}
										}

										playing = true;

										// Time to choose who's attacking

										// 'int variable' will hold the total amount of units (heroes + monsters).
										// Whichever side has the most units will have a greater chance of being
										// selected to attack.

										int variable = totalUnits(randomGenerator);
										int attackingSide = 0;

										if(variable > 0 && variable <= numHeroes) {
											attackingSide = 0;
										} else if(variable > numHeroes || variable <= (numHeroes + r1b5Units)) {
											attackingSide = 1;
										}

										if(attackingSide == 0) {
											// Heroes attacking

											if(monsterUnit == 1) {
												if(heroAttack >= r1b5CurrentHealth00) {
													heroAttack = r1b5CurrentHealth00;
												}

												r1b5CurrentHealth00 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b5CurrentHealth00 <= 0) {
													r1b5TotalHealth00 = 0;
													r1b5Attack00 = 0;
													r1b5Status00 = false;
													r1b5Units--;
												}
											} else if(monsterUnit == 2) {
												if(heroAttack >= r1b5CurrentHealth01) {
													heroAttack = r1b5CurrentHealth01;
												}

												r1b5CurrentHealth01 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b5CurrentHealth01 <= 0) {
													r1b5TotalHealth01 = 0;
													r1b5Attack01 = 0;
													r1b5Status01 = false;
													r1b5Units--;
												}
											} else if(monsterUnit == 3) {
												if(heroAttack >= r1b5CurrentHealth02) {
													heroAttack = r1b5CurrentHealth02;
												}

												r1b5CurrentHealth02 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b5CurrentHealth02 <= 0) {
													r1b5TotalHealth02 = 0;
													r1b5Attack02 = 0;
													r1b5Status02 = false;
													r1b5Units--;
												}
											} else if(monsterUnit == 4) {
												if(heroAttack >= r1b5CurrentHealth03) {
													heroAttack = r1b5CurrentHealth03;
												}

												r1b5CurrentHealth03 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b5CurrentHealth03 <= 0) {
													r1b5TotalHealth03 = 0;
													r1b5Attack03 = 0;
													r1b5Status03 = false;
													r1b5Units--;
												}
											} else if(monsterUnit == 5) {
												if(heroAttack >= r1b5CurrentHealth04) {
													heroAttack = r1b5CurrentHealth04;
												}

												r1b5CurrentHealth04 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b5CurrentHealth04 <= 0) {
													r1b5TotalHealth04 = 0;
													r1b5Attack04 = 0;
													r1b5Status04 = false;
													r1b5Units--;
												}
											}
										} else if(attackingSide == 1) {
											// Monsters attacking

											if(heroUnit == 1) {
												if(monsterAttack >= heroCurrentHealth00) {
													monsterAttack = heroCurrentHealth00;
												}

												heroCurrentHealth00 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth00 <= 0) {
													heroStatus00 = false;
													numHeroes--;
												}
											} else if(heroUnit == 2) {
												if(monsterAttack >= heroCurrentHealth01) {
													monsterAttack = heroCurrentHealth01;
												}

												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth01 <= 0) {
													heroTotalHealth01 = 0;
													heroAttack01 = 0;
													heroStatus01 = false;
													numHeroes--;
												}
											} else if(heroUnit == 3) {
												if(monsterAttack >= heroCurrentHealth02) {
													monsterAttack = heroCurrentHealth02;
												}

												heroCurrentHealth02 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth02 <= 0) {
													heroTotalHealth02 = 0;
													heroAttack02 = 0;
													heroStatus02 = false;
													numHeroes--;
												}
											} else if(heroUnit == 4) {
												if(monsterAttack >= heroCurrentHealth03) {
													monsterAttack = heroCurrentHealth03;
												}

												heroCurrentHealth03 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth03 <= 0) {
													heroTotalHealth03 = 0;
													heroAttack03 = 0;
													heroStatus03 = false;
													numHeroes--;
												}
											} else if(heroUnit == 5) {
												if(monsterAttack >= heroCurrentHealth04) {
													monsterAttack = heroCurrentHealth04;
												}

												heroCurrentHealth04 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth04 <= 0) {
													heroTotalHealth04 = 0;
													heroAttack04 = 0;
													heroStatus04 = false;
													numHeroes--;
												}
											}
										}

										// Display battle results to user

										float hashCount = 0;
										float equalCount = 0;

										cout << "||-------------------------------- HEALTH -------------------------------||\n";
										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||-- Heroes --||- ";

										hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroCurrentHealth >= 10000) {
											cout << "9999";
										} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
											cout << heroCurrentHealth;
										} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
											cout << "0" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
											cout << "00" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
											cout << "000" << heroCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";

										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||- Monsters -||- ";

										hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(monsterCurrentHealth >= 10000) {
											cout << "9999";
										} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
											cout << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
											cout << "0" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
											cout << "00" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
											cout << "000" << monsterCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";
										cout << "||-----------------------------------------------------------------------||\n";

										cout << spacer;

										cout << spacer;


										if(attackingSide == 0) {
											cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
										} else if(attackingSide == 1) {
											cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
										}

										cout << spacer;

										cout << "||-------------- Heroes -------------||\n";
										cout << "||-----------------------------------||\n";

										if(heroActive00) {
											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
												cout << "0" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
												cout << "00" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
												cout << "000" << heroCurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus00) {
												cout << "- ALIVE -";
											} else if(!heroStatus00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive01) {
											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
												cout << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
												cout << "0" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
												cout << "00" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
												cout << "000" << heroCurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus01) {
												cout << "- ALIVE -";
											} else if(!heroStatus01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive02) {
											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
												cout << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
												cout << "0" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
												cout << "00" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
												cout << "000" << heroCurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus02) {
												cout << "- ALIVE -";
											} else if(!heroStatus02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive03) {
											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
												cout << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
												cout << "0" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
												cout << "00" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
												cout << "000" << heroCurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus03) {
												cout << "- ALIVE -";
											} else if(!heroStatus03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive04) {
											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
												cout << "0" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
												cout << "00" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
												cout << "000" << heroCurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus04) {
												cout << "- ALIVE -";
											} else if(!heroStatus04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										cout << "||------------- Monsters ------------||\n";
										cout << "||-----------------------------------||\n";

										if(r1b5Active00) {
											cout << "||";

											if(r1b5Name00.length() == 1) {
												cout << "----- " << r1b5Name00 << " ------";
											} else if(r1b5Name00.length() == 2) {
												cout << "----- " << r1b5Name00 << " -----";
											} else if(r1b5Name00.length() == 3) {
												cout << "---- " << r1b5Name00 << " -----";
											} else if(r1b5Name00.length() == 4) {
												cout << "---- " << r1b5Name00 << " ----";
											} else if(r1b5Name00.length() == 5) {
												cout << "--- " << r1b5Name00 << " ----";
											} else if(r1b5Name00.length() == 6) {
												cout << "--- " << r1b5Name00 << " ---";
											} else if(r1b5Name00.length() == 7) {
												cout << "-- " << r1b5Name00 << " ---";
											} else if(r1b5Name00.length() == 8) {
												cout << "-- " << r1b5Name00 << " --";
											} else if(r1b5Name00.length() == 9) {
												cout << "- " << r1b5Name00 << " --";
											} else if(r1b5Name00.length() == 10) {
												cout << "- " << r1b5Name00 << " -";
											}

											cout << "||- ";

											if(r1b5CurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(r1b5CurrentHealth00 >= 1000 && r1b5CurrentHealth00 < 10000) {
												cout << r1b5CurrentHealth00;
											} else if(r1b5CurrentHealth00 >= 100 && r1b5CurrentHealth00 < 1000) {
												cout << "0" << r1b5CurrentHealth00;
											} else if(r1b5CurrentHealth00 >= 10 && r1b5CurrentHealth00 < 100) {
												cout << "00" << r1b5CurrentHealth00;
											} else if(r1b5CurrentHealth00 >= 1 && r1b5CurrentHealth00 < 10) {
												cout << "000" << r1b5CurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b5Status00) {
												cout << "- ALIVE -";
											} else if(!r1b5Status00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b5Active01) {
											cout << "||";

											if(r1b5Name01.length() == 1) {
												cout << "----- " << r1b5Name01 << " ------";
											} else if(r1b5Name01.length() == 2) {
												cout << "----- " << r1b5Name01 << " -----";
											} else if(r1b5Name01.length() == 3) {
												cout << "---- " << r1b5Name01 << " -----";
											} else if(r1b5Name01.length() == 4) {
												cout << "---- " << r1b5Name01 << " ----";
											} else if(r1b5Name01.length() == 5) {
												cout << "--- " << r1b5Name01 << " ----";
											} else if(r1b5Name01.length() == 6) {
												cout << "--- " << r1b5Name01 << " ---";
											} else if(r1b5Name01.length() == 7) {
												cout << "-- " << r1b5Name01 << " ---";
											} else if(r1b5Name01.length() == 8) {
												cout << "-- " << r1b5Name01 << " --";
											} else if(r1b5Name01.length() == 9) {
												cout << "- " << r1b5Name01 << " --";
											} else if(r1b5Name01.length() == 10) {
												cout << "- " << r1b5Name01 << " -";
											}

											cout << "||- ";

											if(r1b5CurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(r1b5CurrentHealth01 >= 1000 && r1b5CurrentHealth01 < 10000) {
												cout << r1b5CurrentHealth01;
											} else if(r1b5CurrentHealth01 >= 100 && r1b5CurrentHealth01 < 1000) {
												cout << "0" << r1b5CurrentHealth01;
											} else if(r1b5CurrentHealth01 >= 10 && r1b5CurrentHealth01 < 100) {
												cout << "00" << r1b5CurrentHealth01;
											} else if(r1b5CurrentHealth01 >= 1 && r1b5CurrentHealth01 < 10) {
												cout << "000" << r1b5CurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b5Status01) {
												cout << "- ALIVE -";
											} else if(!r1b5Status01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b5Active02) {
											cout << "||";

											if(r1b5Name02.length() == 1) {
												cout << "----- " << r1b5Name02 << " ------";
											} else if(r1b5Name02.length() == 2) {
												cout << "----- " << r1b5Name02 << " -----";
											} else if(r1b5Name02.length() == 3) {
												cout << "---- " << r1b5Name02 << " -----";
											} else if(r1b5Name02.length() == 4) {
												cout << "---- " << r1b5Name02 << " ----";
											} else if(r1b5Name02.length() == 5) {
												cout << "--- " << r1b5Name02 << " ----";
											} else if(r1b5Name02.length() == 6) {
												cout << "--- " << r1b5Name02 << " ---";
											} else if(r1b5Name02.length() == 7) {
												cout << "-- " << r1b5Name02 << " ---";
											} else if(r1b5Name02.length() == 8) {
												cout << "-- " << r1b5Name02 << " --";
											} else if(r1b5Name02.length() == 9) {
												cout << "- " << r1b5Name02 << " --";
											} else if(r1b5Name02.length() == 10) {
												cout << "- " << r1b5Name02 << " -";
											}

											cout << "||- ";

											if(r1b5CurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(r1b5CurrentHealth02 >= 1000 && r1b5CurrentHealth02 < 10000) {
												cout << r1b5CurrentHealth02;
											} else if(r1b5CurrentHealth02 >= 100 && r1b5CurrentHealth02 < 1000) {
												cout << "0" << r1b5CurrentHealth02;
											} else if(r1b5CurrentHealth02 >= 10 && r1b5CurrentHealth02 < 100) {
												cout << "00" << r1b5CurrentHealth02;
											} else if(r1b5CurrentHealth02 >= 1 && r1b5CurrentHealth02 < 10) {
												cout << "000" << r1b5CurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b5Status02) {
												cout << "- ALIVE -";
											} else if(!r1b5Status02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b5Active03) {
											cout << "||";

											if(r1b5Name03.length() == 1) {
												cout << "----- " << r1b5Name03 << " ------";
											} else if(r1b5Name03.length() == 2) {
												cout << "----- " << r1b5Name03 << " -----";
											} else if(r1b5Name03.length() == 3) {
												cout << "---- " << r1b5Name03 << " -----";
											} else if(r1b5Name03.length() == 4) {
												cout << "---- " << r1b5Name03 << " ----";
											} else if(r1b5Name03.length() == 5) {
												cout << "--- " << r1b5Name03 << " ----";
											} else if(r1b5Name03.length() == 6) {
												cout << "--- " << r1b5Name03 << " ---";
											} else if(r1b5Name03.length() == 7) {
												cout << "-- " << r1b5Name03 << " ---";
											} else if(r1b5Name03.length() == 8) {
												cout << "-- " << r1b5Name03 << " --";
											} else if(r1b5Name03.length() == 9) {
												cout << "- " << r1b5Name03 << " --";
											} else if(r1b5Name03.length() == 10) {
												cout << "- " << r1b5Name03 << " -";
											}

											cout << "||- ";

											if(r1b5CurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(r1b5CurrentHealth03 >= 1000 && r1b5CurrentHealth03 < 10000) {
												cout << r1b5CurrentHealth03;
											} else if(r1b5CurrentHealth03 >= 100 && r1b5CurrentHealth03 < 1000) {
												cout << "0" << r1b5CurrentHealth03;
											} else if(r1b5CurrentHealth03 >= 10 && r1b5CurrentHealth03 < 100) {
												cout << "00" << r1b5CurrentHealth03;
											} else if(r1b5CurrentHealth03 >= 1 && r1b5CurrentHealth03 < 10) {
												cout << "000" << r1b5CurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b5Status03) {
												cout << "- ALIVE -";
											} else if(!r1b5Status03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b5Active04) {
											cout << "||";

											if(r1b5Name04.length() == 1) {
												cout << "----- " << r1b5Name04 << " ------";
											} else if(r1b5Name04.length() == 2) {
												cout << "----- " << r1b5Name04 << " -----";
											} else if(r1b5Name04.length() == 3) {
												cout << "---- " << r1b5Name04 << " -----";
											} else if(r1b5Name04.length() == 4) {
												cout << "---- " << r1b5Name04 << " ----";
											} else if(r1b5Name04.length() == 5) {
												cout << "--- " << r1b5Name04 << " ----";
											} else if(r1b5Name04.length() == 6) {
												cout << "--- " << r1b5Name04 << " ---";
											} else if(r1b5Name04.length() == 7) {
												cout << "-- " << r1b5Name04 << " ---";
											} else if(r1b5Name04.length() == 8) {
												cout << "-- " << r1b5Name04 << " --";
											} else if(r1b5Name04.length() == 9) {
												cout << "- " << r1b5Name04 << " --";
											} else if(r1b5Name04.length() == 10) {
												cout << "- " << r1b5Name04 << " -";
											}

											cout << "||- ";

											if(r1b5CurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(r1b5CurrentHealth04 >= 1000 && r1b5CurrentHealth04 < 10000) {
												cout << r1b5CurrentHealth04;
											} else if(r1b5CurrentHealth04 >= 100 && r1b5CurrentHealth04 < 1000) {
												cout << "0" << r1b5CurrentHealth04;
											} else if(r1b5CurrentHealth04 >= 10 && r1b5CurrentHealth04 < 100) {
												cout << "00" << r1b5CurrentHealth04;
											} else if(r1b5CurrentHealth04 >= 1 && r1b5CurrentHealth04 < 10) {
												cout << "000" << r1b5CurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b5Status04) {
												cout << "- ALIVE -";
											} else if(!r1b5Status04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										// Crappy timer to slow loop

										int num1 = 0;
										int num2 = 0;

										while(playing) {
											num1++;

											if(num1 >= 100000) {
												num2++;
												num1 = 0;
											}

											if(num2 >= 10000) {
												num1 = 0;
												num2 = 0;
												playing = false;
											}
										}

										playing = true;

										if(numHeroes <= 0 || r1b5Units <= 0) {
											playing = false;
										}
									}

									playing = true;

									// Update logic

									bool win = false;
									int losses = 0;
									int kills = 0;
									int population = 0;
									int currency = 0;

									if(numHeroes <= 0 && r1b5Units > 0) {
										win = false;
										conquestDefeats++;

										uniform_int_distribution<int> killed(5, (r1b5Units * 10));

										population = killed(randomGenerator);

										populationAlive -= population;
										populationDead += population;

										currency = (r1b5CurrentHealth00 + r1b5CurrentHealth01 + r1b5CurrentHealth02 + r1b5CurrentHealth03 + r1b5CurrentHealth04) * r1b5Units;

										lostCredits += currency;

										if((currentCredits - currency) <= 0) {
											currentCredits = 0;
										} else {
											currentCredits -= currency;
										}

									} else if(numHeroes > 0 && r1b5Units <= 0) {
										win = true;

										r1b5Active = false;
										r1b6Active = true;

										conquestWins++;

										currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

										wonCredits += currency;
										currentCredits += wonCredits;
									}

									if(!heroStatus00 && heroActive00) {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
										numHeroes++;
									} else {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
									}

									if(!heroStatus01 && heroActive01) {
										heroTotalHealth01 = 0;
										heroCurrentHealth01 = heroTotalHealth01;
										heroAttack01 = 0;
										heroActive01 = false;
										losses++;
									} else {
										heroCurrentHealth01 = heroTotalHealth01;
										heroStatus01 = true;
									}

									if(!heroStatus02 && heroActive02) {
										heroTotalHealth02 = 0;
										heroCurrentHealth02 = heroTotalHealth02;
										heroAttack02 = 0;
										heroActive02 = false;
										losses++;
									} else {
										heroCurrentHealth02 = heroTotalHealth02;
										heroStatus02 = true;
									}

									if(!heroStatus03 && heroActive03) {
										heroTotalHealth03 = 0;
										heroCurrentHealth03 = heroTotalHealth;
										heroAttack03 = 0;
										heroActive03 = false;
										losses++;
									} else {
										heroCurrentHealth03 = heroTotalHealth03;
										heroStatus03 = true;
									}

									if(!heroStatus04 && heroActive04) {
										heroTotalHealth04 = 0;
										heroCurrentHealth04 = heroTotalHealth04;
										heroAttack04 = 0;
										heroActive04 = false;
										losses++;
									} else {
										heroCurrentHealth04 = heroTotalHealth04;
										heroStatus04 = true;
									}

									if(!r1b5Status00 && r1b5Active00) {
										r1b5TotalHealth00 = 0;
										r1b5CurrentHealth00 = r1b5TotalHealth00;
										r1b5Attack00 = 0;
										r1b5Active = false;
										kills++;
									} else {
										r1b5CurrentHealth00 = r1b5TotalHealth00;
										r1b5Status00 = true;
									}

									if(!r1b5Status01 && r1b5Active01) {
										r1b5TotalHealth01 = 0;
										r1b5CurrentHealth01 = r1b5TotalHealth01;
										r1b5Attack01 = 0;
										r1b5Active = false;
										kills++;
									} else {
										r1b5CurrentHealth01 = r1b5TotalHealth01;
										r1b5Status01 = true;
									}

									if(!r1b5Status02 && r1b5Active02) {
										r1b5TotalHealth02 = 0;
										r1b5CurrentHealth02 = r1b5TotalHealth02;
										r1b5Attack02 = 0;
										r1b5Active = false;
										kills++;
									} else {
										r1b5CurrentHealth02 = r1b5TotalHealth02;
										r1b5Status02 = true;
									}

									if(!r1b5Status03 && r1b5Active03) {
										r1b5TotalHealth03 = 0;
										r1b5CurrentHealth03 = r1b5TotalHealth03;
										r1b5Attack03 = 0;
										r1b5Active = false;
										kills++;
									} else {
										r1b5CurrentHealth03 = r1b5TotalHealth03;
										r1b5Status03 = true;
									}

									if(!r1b5Status04 && r1b5Active04) {
										r1b5TotalHealth04 = 0;
										r1b5CurrentHealth04 = r1b5TotalHealth04;
										r1b5Attack04 = 0;
										r1b5Active = false;
										kills++;
									} else {
										r1b5CurrentHealth04 = r1b5TotalHealth04;
										r1b5Status00 = true;
									}

									deadHeroes += losses;
									enemiesKilled += kills;

									// Display end results to user

									cout << border;
									cout << "||-------------------------- Battle Results -----------------------------||\n";
									cout << border;

									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									if(win) {
										cout << "||- After a long and exhausting battle you come out victorious. You\n";
										cout << "||- have successfully destroyed the base and all monsters within it.\n";
										cout << "||- It's now time to take whatever loot is available and continue \n";
										cout << "||- onto the next base.\n";

										cout << spacer;

										cout << "||- Credits won:       " << currency << "\n";
									} else if(!win) {
										cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
										cout << "||- at the hands of the monsters. ";

										if(numHeroes > 1) {
											cout << "You and your recruited heroes\n";
											cout << "||- fought bravely but proved no match for the base.\n";
										} else {
											cout << "You fought bravely on your own but\n";
											cout << "||- proved no match for the base.\n";
										}
										cout << spacer;

										cout << "||- Defeated there is little that stands in the way of the monsters as\n";
										cout << "||- they lay slaughter to the population.\n";

										cout << spacer;

										cout << "||- Credits lost:      " << currency << "\n";
									}

									cout << spacer;

									cout << "||- Heroes killed:     " << losses << "\n";
									cout << "||- Enemies killed:    " << kills << "\n";
									cout << "||- Population killed: " << population << "\n";

									cout << spacer;

									cout << "|| [1] Continue\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection != 1) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be 1.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection == 1) {
											menuError = false;
										}
									}

								}
							} else if(menuSelection == 6 && r1b6Active) {
								// Base 6

								cout << border;
								cout << "||------------------------------ Base 6 ---------------------------------||\n";
								cout << border;
								cout << spacer;

								cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

								cout << spacer;

								// Create a for loop to loop through each hero and display it
								// to the player

								for(int i = 0; i < numHeroes; i++) {

									// This variable will be used to store the heros health and attack bars

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||--- Heroes ---||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
											cout << "00" << heroTotalHealth00;
										} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
											cout << "0" << heroTotalHealth00;
										} else {
											cout << heroTotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName00.length() == 1) {
											cout << "----- " << heroName00 << " ------";
										} else if(heroName00.length() == 2) {
											cout << "----- " << heroName00 << " -----";
										} else if(heroName00.length() == 3) {
											cout << "---- " << heroName00 << " -----";
										} else if(heroName00.length() == 4) {
											cout << "---- " << heroName00 << " ----";
										} else if(heroName00.length() == 5) {
											cout << "--- " << heroName00 << " ----";
										} else if(heroName00.length() == 6) {
											cout << "--- " << heroName00 << " ---";
										} else if(heroName00.length() == 7) {
											cout << "-- " << heroName00 << " ---";
										} else if(heroName00.length() == 8) {
											cout << "-- " << heroName00 << " --";
										} else if(heroName00.length() == 9) {
											cout << "- " << heroName00 << " --";
										} else if(heroName00.length() == 10) {
											cout << "- " << heroName00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack00 < 100 && heroAttack00 >= 10) {
											cout << "00" << heroAttack00;
										} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
											cout << "0" << heroAttack00;
										} else {
											cout << heroAttack00;
										}

										cout << " -||\n";
									} else if(i == 1) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
											cout << "00" << heroTotalHealth01;
										} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
											cout << "0" << heroTotalHealth01;
										} else {
											cout << heroTotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName01.length() == 1) {
											cout << "----- " << heroName01 << " ------";
										} else if(heroName01.length() == 2) {
											cout << "----- " << heroName01 << " -----";
										} else if(heroName01.length() == 3) {
											cout << "---- " << heroName01 << " -----";
										} else if(heroName01.length() == 4) {
											cout << "---- " << heroName01 << " ----";
										} else if(heroName01.length() == 5) {
											cout << "--- " << heroName01 << " ----";
										} else if(heroName01.length() == 6) {
											cout << "--- " << heroName01 << " ---";
										} else if(heroName01.length() == 7) {
											cout << "-- " << heroName01 << " ---";
										} else if(heroName01.length() == 8) {
											cout << "-- " << heroName01 << " --";
										} else if(heroName01.length() == 9) {
											cout << "- " << heroName01 << " --";
										} else if(heroName01.length() == 10) {
											cout << "- " << heroName01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack01 < 100 && heroAttack01 >= 10) {
											cout << "00" << heroAttack01;
										} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
											cout << "0" << heroAttack01;
										} else {
											cout << heroAttack01;
										}

										cout << " -||\n";
									} else if(i == 2) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
											cout << "00" << heroTotalHealth02;
										} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
											cout << "0" << heroTotalHealth02;
										} else {
											cout << heroTotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName02.length() == 1) {
											cout << "----- " << heroName02 << " ------";
										} else if(heroName02.length() == 2) {
											cout << "----- " << heroName02 << " -----";
										} else if(heroName02.length() == 3) {
											cout << "---- " << heroName02 << " -----";
										} else if(heroName02.length() == 4) {
											cout << "---- " << heroName02 << " ----";
										} else if(heroName02.length() == 5) {
											cout << "--- " << heroName02 << " ----";
										} else if(heroName02.length() == 6) {
											cout << "--- " << heroName02 << " ---";
										} else if(heroName02.length() == 7) {
											cout << "-- " << heroName02 << " ---";
										} else if(heroName02.length() == 8) {
											cout << "-- " << heroName02 << " --";
										} else if(heroName02.length() == 9) {
											cout << "- " << heroName02 << " --";
										} else if(heroName02.length() == 10) {
											cout << "- " << heroName02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack02 < 100 && heroAttack02 >= 10) {
											cout << "00" << heroAttack02;
										} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
											cout << "0" << heroAttack02;
										} else {
											cout << heroAttack02;
										}

										cout << " -||\n";
									} else if(i == 3) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
											cout << "00" << heroTotalHealth03;
										} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
											cout << "0" << heroTotalHealth03;
										} else {
											cout << heroTotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName03.length() == 1) {
											cout << "----- " << heroName03 << " ------";
										} else if(heroName03.length() == 2) {
											cout << "----- " << heroName03 << " -----";
										} else if(heroName03.length() == 3) {
											cout << "---- " << heroName03 << " -----";
										} else if(heroName03.length() == 4) {
											cout << "---- " << heroName03 << " ----";
										} else if(heroName03.length() == 5) {
											cout << "--- " << heroName03 << " ----";
										} else if(heroName03.length() == 6) {
											cout << "--- " << heroName03 << " ---";
										} else if(heroName03.length() == 7) {
											cout << "-- " << heroName03 << " ---";
										} else if(heroName03.length() == 8) {
											cout << "-- " << heroName03 << " --";
										} else if(heroName03.length() == 9) {
											cout << "- " << heroName03 << " --";
										} else if(heroName03.length() == 10) {
											cout << "- " << heroName03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack03 < 100 && heroAttack03 >= 10) {
											cout << "00" << heroAttack03;
										} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
											cout << "0" << heroAttack03;
										} else {
											cout << heroAttack03;
										}

										cout << " -||\n";
									} else if(i == 4) {
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = heroTotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
											cout << "00" << heroTotalHealth04;
										} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
											cout << "0" << heroTotalHealth04;
										} else {
											cout << heroTotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(heroName04.length() == 1) {
											cout << "----- " << heroName04 << " ------";
										} else if(heroName04.length() == 2) {
											cout << "----- " << heroName04 << " -----";
										} else if(heroName04.length() == 3) {
											cout << "---- " << heroName04 << " -----";
										} else if(heroName04.length() == 4) {
											cout << "---- " << heroName04 << " ----";
										} else if(heroName04.length() == 5) {
											cout << "--- " << heroName04 << " ----";
										} else if(heroName04.length() == 6) {
											cout << "--- " << heroName04 << " ---";
										} else if(heroName04.length() == 7) {
											cout << "-- " << heroName04 << " ---";
										} else if(heroName04.length() == 8) {
											cout << "-- " << heroName04 << " --";
										} else if(heroName04.length() == 9) {
											cout << "- " << heroName04 << " --";
										} else if(heroName04.length() == 10) {
											cout << "- " << heroName04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = heroAttack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroAttack04 < 100 && heroAttack04 >= 10) {
											cout << "00" << heroAttack04;
										} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
											cout << "0" << heroAttack04;
										} else {
											cout << heroAttack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								// Display monsters to player

								if(!r1b6Counted) {
									if(r1b6Active00) r1b6Units++;
									if(r1b6Active01) r1b6Units++;
									if(r1b6Active02) r1b6Units++;
									if(r1b6Active03) r1b6Units++;
									if(r1b6Active04) r1b6Units++;

									r1b6Counted = true;
								}

								for(int i = 0; i < r1b6Units; i++) {

									int hashCount = 0;
									int equalCount = 0;

									if(i == 0) {
										cout << "||-- Monsters --||\n";
										cout << "||--------------------------------------------------------------||\n";

										cout << "||";

										if(r1b6Name00.length() == 1) {
											cout << "----- " << r1b6Name00 << " ------";
										} else if(r1b6Name00.length() == 2) {
											cout << "----- " << r1b6Name00 << " -----";
										} else if(r1b6Name00.length() == 3) {
											cout << "---- " << r1b6Name00 << " -----";
										} else if(r1b6Name00.length() == 4) {
											cout << "---- " << r1b6Name00 << " ----";
										} else if(r1b6Name00.length() == 5) {
											cout << "--- " << r1b6Name00 << " ----";
										} else if(r1b6Name00.length() == 6) {
											cout << "--- " << r1b6Name00 << " ---";
										} else if(r1b6Name00.length() == 7) {
											cout << "-- " << r1b6Name00 << " ---";
										} else if(r1b6Name00.length() == 8) {
											cout << "-- " << r1b6Name00 << " --";
										} else if(r1b6Name00.length() == 9) {
											cout << "- " << r1b6Name00 << " --";
										} else if(r1b6Name00.length() == 10) {
											cout << "- " << r1b6Name00 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b6TotalHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6TotalHealth00 < 100 && r1b6TotalHealth00 >= 10) {
											cout << "00" << r1b6TotalHealth00;
										} else if(r1b6TotalHealth00 < 1000 && r1b6TotalHealth00 >= 100) {
											cout << "0" << r1b6TotalHealth00;
										} else {
											cout << r1b6TotalHealth00;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b6Name00.length() == 1) {
											cout << "----- " << r1b6Name00 << " ------";
										} else if(r1b6Name00.length() == 2) {
											cout << "----- " << r1b6Name00 << " -----";
										} else if(r1b6Name00.length() == 3) {
											cout << "---- " << r1b6Name00 << " -----";
										} else if(r1b6Name00.length() == 4) {
											cout << "---- " << r1b6Name00 << " ----";
										} else if(r1b6Name00.length() == 5) {
											cout << "--- " << r1b6Name00 << " ----";
										} else if(r1b6Name00.length() == 6) {
											cout << "--- " << r1b6Name00 << " ---";
										} else if(r1b6Name00.length() == 7) {
											cout << "-- " << r1b6Name00 << " ---";
										} else if(r1b6Name00.length() == 8) {
											cout << "-- " << r1b6Name00 << " --";
										} else if(r1b6Name00.length() == 9) {
											cout << "- " << r1b6Name00 << " --";
										} else if(r1b6Name00.length() == 10) {
											cout << "- " << r1b6Name00 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b6Attack00 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6Attack00 < 100 && r1b6Attack00 >= 10) {
											cout << "00" << r1b6Attack00;
										} else if(r1b6Attack00 < 1000 && r1b6Attack00 >= 100) {
											cout << "0" << r1b6Attack00;
										} else {
											cout << r1b6Attack00;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 1) {
										cout << "||";

										if(r1b6Name01.length() == 1) {
											cout << "----- " << r1b6Name01 << " ------";
										} else if(r1b6Name01.length() == 2) {
											cout << "----- " << r1b6Name01 << " -----";
										} else if(r1b6Name01.length() == 3) {
											cout << "---- " << r1b6Name01 << " -----";
										} else if(r1b6Name01.length() == 4) {
											cout << "---- " << r1b6Name01 << " ----";
										} else if(r1b6Name01.length() == 5) {
											cout << "--- " << r1b6Name01 << " ----";
										} else if(r1b6Name01.length() == 6) {
											cout << "--- " << r1b6Name01 << " ---";
										} else if(r1b6Name01.length() == 7) {
											cout << "-- " << r1b6Name01 << " ---";
										} else if(r1b6Name01.length() == 8) {
											cout << "-- " << r1b6Name01 << " --";
										} else if(r1b6Name01.length() == 9) {
											cout << "- " << r1b6Name01 << " --";
										} else if(r1b6Name01.length() == 10) {
											cout << "- " << r1b6Name01 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b6TotalHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6TotalHealth01 < 100 && r1b6TotalHealth01 >= 10) {
											cout << "00" << r1b6TotalHealth01;
										} else if(r1b6TotalHealth01 < 1000 && r1b6TotalHealth01 >= 100) {
											cout << "0" << r1b6TotalHealth01;
										} else {
											cout << r1b6TotalHealth01;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b6Name01.length() == 1) {
											cout << "----- " << r1b6Name01 << " ------";
										} else if(r1b6Name01.length() == 2) {
											cout << "----- " << r1b6Name01 << " -----";
										} else if(r1b6Name01.length() == 3) {
											cout << "---- " << r1b6Name01 << " -----";
										} else if(r1b6Name01.length() == 4) {
											cout << "---- " << r1b6Name01 << " ----";
										} else if(r1b6Name01.length() == 5) {
											cout << "--- " << r1b6Name01 << " ----";
										} else if(r1b6Name01.length() == 6) {
											cout << "--- " << r1b6Name01 << " ---";
										} else if(r1b6Name01.length() == 7) {
											cout << "-- " << r1b6Name01 << " ---";
										} else if(r1b6Name01.length() == 8) {
											cout << "-- " << r1b6Name01 << " --";
										} else if(r1b6Name01.length() == 9) {
											cout << "- " << r1b6Name01 << " --";
										} else if(r1b6Name01.length() == 10) {
											cout << "- " << r1b6Name01 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b6Attack01 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6Attack01 < 100 && r1b6Attack01 >= 10) {
											cout << "00" << r1b6Attack01;
										} else if(r1b6Attack01 < 1000 && r1b6Attack01 >= 100) {
											cout << "0" << r1b6Attack01;
										} else {
											cout << r1b6Attack01;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 2) {
										cout << "||";

										if(r1b6Name02.length() == 1) {
											cout << "----- " << r1b6Name02 << " ------";
										} else if(r1b6Name02.length() == 2) {
											cout << "----- " << r1b6Name02 << " -----";
										} else if(r1b6Name02.length() == 3) {
											cout << "---- " << r1b6Name02 << " -----";
										} else if(r1b6Name02.length() == 4) {
											cout << "---- " << r1b6Name02 << " ----";
										} else if(r1b6Name02.length() == 5) {
											cout << "--- " << r1b6Name02 << " ----";
										} else if(r1b6Name02.length() == 6) {
											cout << "--- " << r1b6Name02 << " ---";
										} else if(r1b6Name02.length() == 7) {
											cout << "-- " << r1b6Name02 << " ---";
										} else if(r1b6Name02.length() == 8) {
											cout << "-- " << r1b6Name02 << " --";
										} else if(r1b6Name02.length() == 9) {
											cout << "- " << r1b6Name02 << " --";
										} else if(r1b6Name02.length() == 10) {
											cout << "- " << r1b6Name02 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b6TotalHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6TotalHealth02 < 100 && r1b6TotalHealth02 >= 10) {
											cout << "00" << r1b6TotalHealth02;
										} else if(r1b6TotalHealth02 < 1000 && r1b6TotalHealth02 >= 100) {
											cout << "0" << r1b6TotalHealth02;
										} else {
											cout << r1b6TotalHealth02;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b6Name02.length() == 1) {
											cout << "----- " << r1b6Name02 << " ------";
										} else if(r1b6Name02.length() == 2) {
											cout << "----- " << r1b6Name02 << " -----";
										} else if(r1b6Name02.length() == 3) {
											cout << "---- " << r1b6Name02 << " -----";
										} else if(r1b6Name02.length() == 4) {
											cout << "---- " << r1b6Name02 << " ----";
										} else if(r1b6Name02.length() == 5) {
											cout << "--- " << r1b6Name02 << " ----";
										} else if(r1b6Name02.length() == 6) {
											cout << "--- " << r1b6Name02 << " ---";
										} else if(r1b6Name02.length() == 7) {
											cout << "-- " << r1b6Name02 << " ---";
										} else if(r1b6Name02.length() == 8) {
											cout << "-- " << r1b6Name02 << " --";
										} else if(r1b6Name02.length() == 9) {
											cout << "- " << r1b6Name02 << " --";
										} else if(r1b6Name02.length() == 10) {
											cout << "- " << r1b6Name02 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b6Attack02 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6Attack02 < 100 && r1b6Attack02 >= 10) {
											cout << "00" << r1b6Attack02;
										} else if(r1b6Attack02 < 1000 && r1b6Attack02 >= 100) {
											cout << "0" << r1b6Attack02;
										} else {
											cout << r1b6Attack02;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 3) {
										cout << "||";

										if(r1b6Name03.length() == 1) {
											cout << "----- " << r1b6Name03 << " ------";
										} else if(r1b6Name03.length() == 2) {
											cout << "----- " << r1b6Name03 << " -----";
										} else if(r1b6Name03.length() == 3) {
											cout << "---- " << r1b6Name03 << " -----";
										} else if(r1b6Name03.length() == 4) {
											cout << "---- " << r1b6Name03 << " ----";
										} else if(r1b6Name03.length() == 5) {
											cout << "--- " << r1b6Name03 << " ----";
										} else if(r1b6Name03.length() == 6) {
											cout << "--- " << r1b6Name03 << " ---";
										} else if(r1b6Name03.length() == 7) {
											cout << "-- " << r1b6Name03 << " ---";
										} else if(r1b6Name03.length() == 8) {
											cout << "-- " << r1b6Name03 << " --";
										} else if(r1b6Name03.length() == 9) {
											cout << "- " << r1b6Name03 << " --";
										} else if(r1b6Name03.length() == 10) {
											cout << "- " << r1b6Name03 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b6TotalHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6TotalHealth03 < 100 && r1b6TotalHealth03 >= 10) {
											cout << "00" << r1b6TotalHealth03;
										} else if(r1b6TotalHealth03 < 1000 && r1b6TotalHealth03 >= 100) {
											cout << "0" << r1b6TotalHealth03;
										} else {
											cout << r1b6TotalHealth03;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b6Name03.length() == 1) {
											cout << "----- " << r1b6Name03 << " ------";
										} else if(r1b6Name03.length() == 2) {
											cout << "----- " << r1b6Name03 << " -----";
										} else if(r1b6Name03.length() == 3) {
											cout << "---- " << r1b6Name03 << " -----";
										} else if(r1b6Name03.length() == 4) {
											cout << "---- " << r1b6Name03 << " ----";
										} else if(r1b6Name03.length() == 5) {
											cout << "--- " << r1b6Name03 << " ----";
										} else if(r1b6Name03.length() == 6) {
											cout << "--- " << r1b6Name03 << " ---";
										} else if(r1b6Name03.length() == 7) {
											cout << "-- " << r1b6Name03 << " ---";
										} else if(r1b6Name03.length() == 8) {
											cout << "-- " << r1b6Name03 << " --";
										} else if(r1b6Name03.length() == 9) {
											cout << "- " << r1b6Name03 << " --";
										} else if(r1b6Name03.length() == 10) {
											cout << "- " << r1b6Name03 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b6Attack03 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6Attack03 < 100 && r1b6Attack03 >= 10) {
											cout << "00" << r1b6Attack03;
										} else if(r1b6Attack03 < 1000 && r1b6Attack03 >= 100) {
											cout << "0" << r1b6Attack03;
										} else {
											cout << r1b6Attack03;
										}

										cout << " -||\n";

										cout << "||--------------------------------------------------------------||\n";
									} else if(i == 4) {
										cout << "||";

										if(r1b6Name04.length() == 1) {
											cout << "----- " << r1b6Name04 << " ------";
										} else if(r1b6Name04.length() == 2) {
											cout << "----- " << r1b6Name04 << " -----";
										} else if(r1b6Name04.length() == 3) {
											cout << "---- " << r1b6Name04 << " -----";
										} else if(r1b6Name04.length() == 4) {
											cout << "---- " << r1b6Name04 << " ----";
										} else if(r1b6Name04.length() == 5) {
											cout << "--- " << r1b6Name04 << " ----";
										} else if(r1b6Name04.length() == 6) {
											cout << "--- " << r1b6Name04 << " ---";
										} else if(r1b6Name04.length() == 7) {
											cout << "-- " << r1b6Name04 << " ---";
										} else if(r1b6Name04.length() == 8) {
											cout << "-- " << r1b6Name04 << " --";
										} else if(r1b6Name04.length() == 9) {
											cout << "- " << r1b6Name04 << " --";
										} else if(r1b6Name04.length() == 10) {
											cout << "- " << r1b6Name04 << " -";
										}

										cout << "||- Health -||- ";

										// Just some calculations

										hashCount = r1b6TotalHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6TotalHealth04 < 100 && r1b6TotalHealth04 >= 10) {
											cout << "00" << r1b6TotalHealth04;
										} else if(r1b6TotalHealth04 < 1000 && r1b6TotalHealth04 >= 100) {
											cout << "0" << r1b6TotalHealth04;
										} else {
											cout << r1b6TotalHealth04;
										}

										cout << " -||\n";

										cout << "||";

										if(r1b6Name04.length() == 1) {
											cout << "----- " << r1b6Name04 << " ------";
										} else if(r1b6Name04.length() == 2) {
											cout << "----- " << r1b6Name04 << " -----";
										} else if(r1b6Name04.length() == 3) {
											cout << "---- " << r1b6Name04 << " -----";
										} else if(r1b6Name04.length() == 4) {
											cout << "---- " << r1b6Name04 << " ----";
										} else if(r1b6Name04.length() == 5) {
											cout << "--- " << r1b6Name04 << " ----";
										} else if(r1b6Name04.length() == 6) {
											cout << "--- " << r1b6Name04 << " ---";
										} else if(r1b6Name04.length() == 7) {
											cout << "-- " << r1b6Name04 << " ---";
										} else if(r1b6Name04.length() == 8) {
											cout << "-- " << r1b6Name04 << " --";
										} else if(r1b6Name04.length() == 9) {
											cout << "- " << r1b6Name04 << " --";
										} else if(r1b6Name04.length() == 10) {
											cout << "- " << r1b6Name04 << " -";
										}

										cout << "||- Attack -||- ";

										// Just some calculations

										hashCount = r1b6Attack04 / 10;
										equalCount = 20 - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b6Attack04 < 100 && r1b6Attack04 >= 10) {
											cout << "00" << r1b6Attack04;
										} else if(r1b6Attack04 < 1000 && r1b6Attack04 >= 100) {
											cout << "0" << r1b6Attack04;
										} else {
											cout << r1b6Attack04;
										}

										cout << " -||\n";
									}

									cout << "||--------------------------------------------------------------||\n";
								}

								cout << spacer;

								cout << "|| [1] Battle\n";

								cout << spacer;

								cout << "|| [2] Return\n";

								cout << spacer;

								cout << "|| Please enter a number: ";
								cin >> menuSelection;

								if(menuSelection < 1 || menuSelection > 2) {
									menuError = true;
								}

								while(menuError) {
									cout << spacer;
									cout << "|| " << error << "Number must be between 1 and 2.\n";
									cout << spacer;
									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection >= 1 && menuSelection <= 2) {
										menuError = false;
									}
								}

								if(menuSelection == 1 && r1b6Active) {
									// Battle time

									// Acquire total health points for heroes and monsters

									// Heroes

									if(heroActive00) heroTotalHealth += heroTotalHealth00;
									if(heroActive01) heroTotalHealth += heroTotalHealth01;
									if(heroActive02) heroTotalHealth += heroTotalHealth02;
									if(heroActive03) heroTotalHealth += heroTotalHealth03;
									if(heroActive04) heroTotalHealth += heroTotalHealth04;
									heroCurrentHealth = heroTotalHealth;

									// Monsters

									if(r1b6Active00) monsterTotalHealth += r1b6TotalHealth00;
									if(r1b6Active01) monsterTotalHealth += r1b6TotalHealth01;
									if(r1b6Active02) monsterTotalHealth += r1b6TotalHealth02;
									if(r1b6Active03) monsterTotalHealth += r1b6TotalHealth03;
									if(r1b6Active04) monsterTotalHealth += r1b6TotalHealth04;
									monsterCurrentHealth = monsterTotalHealth;

									// Used for choosing random units from either side

									uniform_int_distribution<int> theHero(1, numHeroes);
									uniform_int_distribution<int> theMonster(1, r1b6Units);

									// Loop battle until we have a winner

									while(playing) {
										uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b6Units));

										// Store names of two units that will be attacking

										string heroName = "";
										int    heroAttack = 0;
										string monsterName = "";
										int    monsterAttack = 0;
										int    heroUnit = 0;
										int    monsterUnit = 0;

										// Obtain hero details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											heroUnit = theHero(randomGenerator);

											if(heroUnit == 1 && heroStatus00) {
												heroName = heroName00;
												heroAttack = heroAttack00;
												playing = false;
											} else if(heroUnit == 2 && heroStatus01) {
												heroName = heroName01;
												heroAttack = heroAttack01;
												playing = false;
											} else if(heroUnit == 3 && heroStatus02) {
												heroName = heroName02;
												heroAttack = heroAttack02;
												playing = false;
											} else if(heroUnit == 4 && heroStatus03) {
												heroName = heroName03;
												heroAttack = heroAttack03;
												playing = false;
											} else if(heroUnit == 5 && heroStatus04) {
												heroName = heroName04;
												heroAttack = heroAttack04;
												playing = false;
											}
										}

										playing = true;

										// Obtain monster details. If unit is not active loop through
										// until we find one that is.

										while(playing) {
											monsterUnit = theMonster(randomGenerator);

											if(monsterUnit == 1 && r1b6Status00) {
												monsterName = r1b6Name00;
												monsterAttack = r1b6Attack00;
												playing = false;
											} else if(monsterUnit == 2 && r1b6Status01) {
												monsterName = r1b6Name01;
												monsterAttack = r1b6Attack01;
												playing = false;
											} else if(monsterUnit == 3 && r1b6Status02) {
												monsterName = r1b6Name02;
												monsterAttack = r1b6Attack02;
												playing = false;
											} else if(monsterUnit == 4 && r1b6Status03) {
												monsterName = r1b6Name03;
												monsterAttack = r1b6Attack03;
												playing = false;
											} else if(monsterUnit == 5 && r1b6Status04) {
												monsterName = r1b6Name04;
												monsterAttack = r1b6Attack04;
												playing = false;
											}
										}

										playing = true;

										// Time to choose who's attacking

										// 'int variable' will hold the total amount of units (heroes + monsters).
										// Whichever side has the most units will have a greater chance of being
										// selected to attack.

										int variable = totalUnits(randomGenerator);
										int attackingSide = 0;

										if(variable > 0 && variable <= numHeroes) {
											attackingSide = 0;
										} else if(variable > numHeroes || variable <= (numHeroes + r1b6Units)) {
											attackingSide = 1;
										}

										if(attackingSide == 0) {
											// Heroes attacking

											if(monsterUnit == 1) {
												if(heroAttack >= r1b6CurrentHealth00) {
													heroAttack = r1b6CurrentHealth00;
												}

												r1b6CurrentHealth00 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b6CurrentHealth00 <= 0) {
													r1b6TotalHealth00 = 0;
													r1b6Attack00 = 0;
													r1b6Status00 = false;
													r1b6Units--;
												}
											} else if(monsterUnit == 2) {
												if(heroAttack >= r1b6CurrentHealth01) {
													heroAttack = r1b6CurrentHealth01;
												}

												r1b6CurrentHealth01 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b6CurrentHealth01 <= 0) {
													r1b6TotalHealth01 = 0;
													r1b6Attack01 = 0;
													r1b6Status01 = false;
													r1b6Units--;
												}
											} else if(monsterUnit == 3) {
												if(heroAttack >= r1b6CurrentHealth02) {
													heroAttack = r1b6CurrentHealth02;
												}

												r1b6CurrentHealth02 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b6CurrentHealth02 <= 0) {
													r1b6TotalHealth02 = 0;
													r1b6Attack02 = 0;
													r1b6Status02 = false;
													r1b6Units--;
												}
											} else if(monsterUnit == 4) {
												if(heroAttack >= r1b6CurrentHealth03) {
													heroAttack = r1b6CurrentHealth03;
												}

												r1b6CurrentHealth03 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b6CurrentHealth03 <= 0) {
													r1b6TotalHealth03 = 0;
													r1b6Attack03 = 0;
													r1b6Status03 = false;
													r1b6Units--;
												}
											} else if(monsterUnit == 5) {
												if(heroAttack >= r1b6CurrentHealth04) {
													heroAttack = r1b6CurrentHealth04;
												}

												r1b6CurrentHealth04 -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b6CurrentHealth04 <= 0) {
													r1b6TotalHealth04 = 0;
													r1b6Attack04 = 0;
													r1b6Status04 = false;
													r1b6Units--;
												}
											}
										} else if(attackingSide == 1) {
											// Monsters attacking

											if(heroUnit == 1) {
												if(monsterAttack >= heroCurrentHealth00) {
													monsterAttack = heroCurrentHealth00;
												}

												heroCurrentHealth00 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth00 <= 0) {
													heroStatus00 = false;
													numHeroes--;
												}
											} else if(heroUnit == 2) {
												if(monsterAttack >= heroCurrentHealth01) {
													monsterAttack = heroCurrentHealth01;
												}

												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth01 <= 0) {
													heroTotalHealth01 = 0;
													heroAttack01 = 0;
													heroStatus01 = false;
													numHeroes--;
												}
											} else if(heroUnit == 3) {
												if(monsterAttack >= heroCurrentHealth02) {
													monsterAttack = heroCurrentHealth02;
												}

												heroCurrentHealth02 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth02 <= 0) {
													heroTotalHealth02 = 0;
													heroAttack02 = 0;
													heroStatus02 = false;
													numHeroes--;
												}
											} else if(heroUnit == 4) {
												if(monsterAttack >= heroCurrentHealth03) {
													monsterAttack = heroCurrentHealth03;
												}

												heroCurrentHealth03 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth03 <= 0) {
													heroTotalHealth03 = 0;
													heroAttack03 = 0;
													heroStatus03 = false;
													numHeroes--;
												}
											} else if(heroUnit == 5) {
												if(monsterAttack >= heroCurrentHealth04) {
													monsterAttack = heroCurrentHealth04;
												}

												heroCurrentHealth04 -= monsterAttack;
												heroCurrentHealth -= monsterAttack;

												if(heroCurrentHealth04 <= 0) {
													heroTotalHealth04 = 0;
													heroAttack04 = 0;
													heroStatus04 = false;
													numHeroes--;
												}
											}
										}

										// Display battle results to user

										float hashCount = 0;
										float equalCount = 0;

										cout << "||-------------------------------- HEALTH -------------------------------||\n";
										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||-- Heroes --||- ";

										hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroCurrentHealth >= 10000) {
											cout << "9999";
										} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
											cout << heroCurrentHealth;
										} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
											cout << "0" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
											cout << "00" << heroCurrentHealth;
										} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
											cout << "000" << heroCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";

										cout << "||-----------------------------------------------------------------------||\n";
										cout << "||- Monsters -||- ";

										hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
										equalCount = 43.00f - hashCount;

										// Create bar

										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount - 1; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(monsterCurrentHealth >= 10000) {
											cout << "9999";
										} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
											cout << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
											cout << "0" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
											cout << "00" << monsterCurrentHealth;
										} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
											cout << "000" << monsterCurrentHealth;
										} else {
											cout << "0000";
										}

										cout << " -||\n";
										cout << "||-----------------------------------------------------------------------||\n";

										cout << spacer;

										cout << spacer;


										if(attackingSide == 0) {
											cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
										} else if(attackingSide == 1) {
											cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
										}

										cout << spacer;

										cout << "||-------------- Heroes -------------||\n";
										cout << "||-----------------------------------||\n";

										if(heroActive00) {
											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
												cout << "0" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
												cout << "00" << heroCurrentHealth00;
											} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
												cout << "000" << heroCurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus00) {
												cout << "- ALIVE -";
											} else if(!heroStatus00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive01) {
											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
												cout << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
												cout << "0" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
												cout << "00" << heroCurrentHealth01;
											} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
												cout << "000" << heroCurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus01) {
												cout << "- ALIVE -";
											} else if(!heroStatus01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive02) {
											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
												cout << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
												cout << "0" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
												cout << "00" << heroCurrentHealth02;
											} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
												cout << "000" << heroCurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus02) {
												cout << "- ALIVE -";
											} else if(!heroStatus02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive03) {
											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
												cout << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
												cout << "0" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
												cout << "00" << heroCurrentHealth03;
											} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
												cout << "000" << heroCurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus03) {
												cout << "- ALIVE -";
											} else if(!heroStatus03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(heroActive04) {
											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- ";

											if(heroCurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
												cout << heroCurrentHealth00;
											} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
												cout << "0" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
												cout << "00" << heroCurrentHealth04;
											} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
												cout << "000" << heroCurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(heroStatus04) {
												cout << "- ALIVE -";
											} else if(!heroStatus04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										cout << "||------------- Monsters ------------||\n";
										cout << "||-----------------------------------||\n";

										if(r1b6Active00) {
											cout << "||";

											if(r1b6Name00.length() == 1) {
												cout << "----- " << r1b6Name00 << " ------";
											} else if(r1b6Name00.length() == 2) {
												cout << "----- " << r1b6Name00 << " -----";
											} else if(r1b6Name00.length() == 3) {
												cout << "---- " << r1b6Name00 << " -----";
											} else if(r1b6Name00.length() == 4) {
												cout << "---- " << r1b6Name00 << " ----";
											} else if(r1b6Name00.length() == 5) {
												cout << "--- " << r1b6Name00 << " ----";
											} else if(r1b6Name00.length() == 6) {
												cout << "--- " << r1b6Name00 << " ---";
											} else if(r1b6Name00.length() == 7) {
												cout << "-- " << r1b6Name00 << " ---";
											} else if(r1b6Name00.length() == 8) {
												cout << "-- " << r1b6Name00 << " --";
											} else if(r1b6Name00.length() == 9) {
												cout << "- " << r1b6Name00 << " --";
											} else if(r1b6Name00.length() == 10) {
												cout << "- " << r1b6Name00 << " -";
											}

											cout << "||- ";

											if(r1b6CurrentHealth00 >= 10000) {
												cout << "9999";
											} else if(r1b6CurrentHealth00 >= 1000 && r1b6CurrentHealth00 < 10000) {
												cout << r1b6CurrentHealth00;
											} else if(r1b6CurrentHealth00 >= 100 && r1b6CurrentHealth00 < 1000) {
												cout << "0" << r1b6CurrentHealth00;
											} else if(r1b6CurrentHealth00 >= 10 && r1b6CurrentHealth00 < 100) {
												cout << "00" << r1b6CurrentHealth00;
											} else if(r1b6CurrentHealth00 >= 1 && r1b6CurrentHealth00 < 10) {
												cout << "000" << r1b6CurrentHealth00;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b6Status00) {
												cout << "- ALIVE -";
											} else if(!r1b6Status00) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b6Active01) {
											cout << "||";

											if(r1b6Name01.length() == 1) {
												cout << "----- " << r1b6Name01 << " ------";
											} else if(r1b6Name01.length() == 2) {
												cout << "----- " << r1b6Name01 << " -----";
											} else if(r1b6Name01.length() == 3) {
												cout << "---- " << r1b6Name01 << " -----";
											} else if(r1b6Name01.length() == 4) {
												cout << "---- " << r1b6Name01 << " ----";
											} else if(r1b6Name01.length() == 5) {
												cout << "--- " << r1b6Name01 << " ----";
											} else if(r1b6Name01.length() == 6) {
												cout << "--- " << r1b6Name01 << " ---";
											} else if(r1b6Name01.length() == 7) {
												cout << "-- " << r1b6Name01 << " ---";
											} else if(r1b6Name01.length() == 8) {
												cout << "-- " << r1b6Name01 << " --";
											} else if(r1b6Name01.length() == 9) {
												cout << "- " << r1b6Name01 << " --";
											} else if(r1b6Name01.length() == 10) {
												cout << "- " << r1b6Name01 << " -";
											}

											cout << "||- ";

											if(r1b6CurrentHealth01 >= 10000) {
												cout << "9999";
											} else if(r1b6CurrentHealth01 >= 1000 && r1b6CurrentHealth01 < 10000) {
												cout << r1b6CurrentHealth01;
											} else if(r1b6CurrentHealth01 >= 100 && r1b6CurrentHealth01 < 1000) {
												cout << "0" << r1b6CurrentHealth01;
											} else if(r1b6CurrentHealth01 >= 10 && r1b6CurrentHealth01 < 100) {
												cout << "00" << r1b6CurrentHealth01;
											} else if(r1b6CurrentHealth01 >= 1 && r1b6CurrentHealth01 < 10) {
												cout << "000" << r1b6CurrentHealth01;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b6Status01) {
												cout << "- ALIVE -";
											} else if(!r1b6Status01) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b6Active02) {
											cout << "||";

											if(r1b6Name02.length() == 1) {
												cout << "----- " << r1b6Name02 << " ------";
											} else if(r1b6Name02.length() == 2) {
												cout << "----- " << r1b6Name02 << " -----";
											} else if(r1b6Name02.length() == 3) {
												cout << "---- " << r1b6Name02 << " -----";
											} else if(r1b6Name02.length() == 4) {
												cout << "---- " << r1b6Name02 << " ----";
											} else if(r1b6Name02.length() == 5) {
												cout << "--- " << r1b6Name02 << " ----";
											} else if(r1b6Name02.length() == 6) {
												cout << "--- " << r1b6Name02 << " ---";
											} else if(r1b6Name02.length() == 7) {
												cout << "-- " << r1b6Name02 << " ---";
											} else if(r1b6Name02.length() == 8) {
												cout << "-- " << r1b6Name02 << " --";
											} else if(r1b6Name02.length() == 9) {
												cout << "- " << r1b6Name02 << " --";
											} else if(r1b6Name02.length() == 10) {
												cout << "- " << r1b6Name02 << " -";
											}

											cout << "||- ";

											if(r1b6CurrentHealth02 >= 10000) {
												cout << "9999";
											} else if(r1b6CurrentHealth02 >= 1000 && r1b6CurrentHealth02 < 10000) {
												cout << r1b6CurrentHealth02;
											} else if(r1b6CurrentHealth02 >= 100 && r1b6CurrentHealth02 < 1000) {
												cout << "0" << r1b6CurrentHealth02;
											} else if(r1b6CurrentHealth02 >= 10 && r1b6CurrentHealth02 < 100) {
												cout << "00" << r1b6CurrentHealth02;
											} else if(r1b6CurrentHealth02 >= 1 && r1b6CurrentHealth02 < 10) {
												cout << "000" << r1b6CurrentHealth02;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b6Status02) {
												cout << "- ALIVE -";
											} else if(!r1b6Status02) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b6Active03) {
											cout << "||";

											if(r1b6Name03.length() == 1) {
												cout << "----- " << r1b6Name03 << " ------";
											} else if(r1b6Name03.length() == 2) {
												cout << "----- " << r1b6Name03 << " -----";
											} else if(r1b6Name03.length() == 3) {
												cout << "---- " << r1b6Name03 << " -----";
											} else if(r1b6Name03.length() == 4) {
												cout << "---- " << r1b6Name03 << " ----";
											} else if(r1b6Name03.length() == 5) {
												cout << "--- " << r1b6Name03 << " ----";
											} else if(r1b6Name03.length() == 6) {
												cout << "--- " << r1b6Name03 << " ---";
											} else if(r1b6Name03.length() == 7) {
												cout << "-- " << r1b6Name03 << " ---";
											} else if(r1b6Name03.length() == 8) {
												cout << "-- " << r1b6Name03 << " --";
											} else if(r1b6Name03.length() == 9) {
												cout << "- " << r1b6Name03 << " --";
											} else if(r1b6Name03.length() == 10) {
												cout << "- " << r1b6Name03 << " -";
											}

											cout << "||- ";

											if(r1b6CurrentHealth03 >= 10000) {
												cout << "9999";
											} else if(r1b6CurrentHealth03 >= 1000 && r1b6CurrentHealth03 < 10000) {
												cout << r1b6CurrentHealth03;
											} else if(r1b6CurrentHealth03 >= 100 && r1b6CurrentHealth03 < 1000) {
												cout << "0" << r1b6CurrentHealth03;
											} else if(r1b6CurrentHealth03 >= 10 && r1b6CurrentHealth03 < 100) {
												cout << "00" << r1b6CurrentHealth03;
											} else if(r1b6CurrentHealth03 >= 1 && r1b6CurrentHealth03 < 10) {
												cout << "000" << r1b6CurrentHealth03;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b6Status03) {
												cout << "- ALIVE -";
											} else if(!r1b6Status03) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										if(r1b6Active04) {
											cout << "||";

											if(r1b6Name04.length() == 1) {
												cout << "----- " << r1b6Name04 << " ------";
											} else if(r1b6Name04.length() == 2) {
												cout << "----- " << r1b6Name04 << " -----";
											} else if(r1b6Name04.length() == 3) {
												cout << "---- " << r1b6Name04 << " -----";
											} else if(r1b6Name04.length() == 4) {
												cout << "---- " << r1b6Name04 << " ----";
											} else if(r1b6Name04.length() == 5) {
												cout << "--- " << r1b6Name04 << " ----";
											} else if(r1b6Name04.length() == 6) {
												cout << "--- " << r1b6Name04 << " ---";
											} else if(r1b6Name04.length() == 7) {
												cout << "-- " << r1b6Name04 << " ---";
											} else if(r1b6Name04.length() == 8) {
												cout << "-- " << r1b6Name04 << " --";
											} else if(r1b6Name04.length() == 9) {
												cout << "- " << r1b6Name04 << " --";
											} else if(r1b6Name04.length() == 10) {
												cout << "- " << r1b6Name04 << " -";
											}

											cout << "||- ";

											if(r1b6CurrentHealth04 >= 10000) {
												cout << "9999";
											} else if(r1b6CurrentHealth04 >= 1000 && r1b6CurrentHealth04 < 10000) {
												cout << r1b6CurrentHealth04;
											} else if(r1b6CurrentHealth04 >= 100 && r1b6CurrentHealth04 < 1000) {
												cout << "0" << r1b6CurrentHealth04;
											} else if(r1b6CurrentHealth04 >= 10 && r1b6CurrentHealth04 < 100) {
												cout << "00" << r1b6CurrentHealth04;
											} else if(r1b6CurrentHealth04 >= 1 && r1b6CurrentHealth04 < 10) {
												cout << "000" << r1b6CurrentHealth04;
											} else {
												cout << "0000";
											}

											cout << " -||";

											if(r1b6Status04) {
												cout << "- ALIVE -";
											} else if(!r1b6Status04) {
												cout << "- DEAD --";
											}

											cout << "||\n";
										}

										cout << "||-----------------------------------||\n";

										cout << spacer;

										// Crappy timer to slow loop

										int num1 = 0;
										int num2 = 0;

										while(playing) {
											num1++;

											if(num1 >= 100000) {
												num2++;
												num1 = 0;
											}

											if(num2 >= 10000) {
												num1 = 0;
												num2 = 0;
												playing = false;
											}
										}

										playing = true;

										if(numHeroes <= 0 || r1b6Units <= 0) {
											playing = false;
										}
									}

									playing = true;

									// Update logic

									bool win = false;
									int losses = 0;
									int kills = 0;
									int population = 0;
									int currency = 0;

									if(numHeroes <= 0 && r1b6Units > 0) {
										win = false;
										conquestDefeats++;

										uniform_int_distribution<int> killed(5, (r1b6Units * 10));

										population = killed(randomGenerator);

										populationAlive -= population;
										populationDead += population;

										currency = (r1b6CurrentHealth00 + r1b6CurrentHealth01 + r1b6CurrentHealth02 + r1b6CurrentHealth03 + r1b6CurrentHealth04) * r1b6Units;

										lostCredits += currency;

										if((currentCredits - currency) <= 0) {
											currentCredits = 0;
										} else {
											currentCredits -= currency;
										}

									} else if(numHeroes > 0 && r1b6Units <= 0) {
										win = true;

										r1b6Active = false;
										r1b7Active = true;

										conquestWins++;

										currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

										wonCredits += currency;
										currentCredits += wonCredits;
									}

									if(!heroStatus00 && heroActive00) {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
										numHeroes++;
									} else {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00 = true;
									}

									if(!heroStatus01 && heroActive01) {
										heroTotalHealth01 = 0;
										heroCurrentHealth01 = heroTotalHealth01;
										heroAttack01 = 0;
										heroActive01 = false;
										losses++;
									} else {
										heroCurrentHealth01 = heroTotalHealth01;
										heroStatus01 = true;
									}

									if(!heroStatus02 && heroActive02) {
										heroTotalHealth02 = 0;
										heroCurrentHealth02 = heroTotalHealth02;
										heroAttack02 = 0;
										heroActive02 = false;
										losses++;
									} else {
										heroCurrentHealth02 = heroTotalHealth02;
										heroStatus02 = true;
									}

									if(!heroStatus03 && heroActive03) {
										heroTotalHealth03 = 0;
										heroCurrentHealth03 = heroTotalHealth;
										heroAttack03 = 0;
										heroActive03 = false;
										losses++;
									} else {
										heroCurrentHealth03 = heroTotalHealth03;
										heroStatus03 = true;
									}

									if(!heroStatus04 && heroActive04) {
										heroTotalHealth04 = 0;
										heroCurrentHealth04 = heroTotalHealth04;
										heroAttack04 = 0;
										heroActive04 = false;
										losses++;
									} else {
										heroCurrentHealth04 = heroTotalHealth04;
										heroStatus04 = true;
									}

									if(!r1b6Status00 && r1b6Active00) {
										r1b6TotalHealth00 = 0;
										r1b6CurrentHealth00 = r1b6TotalHealth00;
										r1b6Attack00 = 0;
										r1b6Active = false;
										kills++;
									} else {
										r1b6CurrentHealth00 = r1b6TotalHealth00;
										r1b6Status00 = true;
									}

									if(!r1b6Status01 && r1b6Active01) {
										r1b6TotalHealth01 = 0;
										r1b6CurrentHealth01 = r1b6TotalHealth01;
										r1b6Attack01 = 0;
										r1b6Active = false;
										kills++;
									} else {
										r1b6CurrentHealth01 = r1b6TotalHealth01;
										r1b6Status01 = true;
									}

									if(!r1b6Status02 && r1b6Active02) {
										r1b6TotalHealth02 = 0;
										r1b6CurrentHealth02 = r1b6TotalHealth02;
										r1b6Attack02 = 0;
										r1b6Active = false;
										kills++;
									} else {
										r1b6CurrentHealth02 = r1b6TotalHealth02;
										r1b6Status02 = true;
									}

									if(!r1b6Status03 && r1b6Active03) {
										r1b6TotalHealth03 = 0;
										r1b6CurrentHealth03 = r1b6TotalHealth03;
										r1b6Attack03 = 0;
										r1b6Active = false;
										kills++;
									} else {
										r1b6CurrentHealth03 = r1b6TotalHealth03;
										r1b6Status03 = true;
									}

									if(!r1b6Status04 && r1b6Active04) {
										r1b6TotalHealth04 = 0;
										r1b6CurrentHealth04 = r1b6TotalHealth04;
										r1b6Attack04 = 0;
										r1b6Active = false;
										kills++;
									} else {
										r1b6CurrentHealth04 = r1b6TotalHealth04;
										r1b6Status00 = true;
									}

									deadHeroes += losses;
									enemiesKilled += kills;

									// Display end results to user

									cout << border;
									cout << "||-------------------------- Battle Results -----------------------------||\n";
									cout << border;

									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									if(win) {
										cout << "||- After a long and exhausting battle you come out victorious. You\n";
										cout << "||- have successfully destroyed the base and all monsters within it.\n";
										cout << "||- It's now time to take whatever loot is available and continue \n";
										cout << "||- onto the next base.\n";

										cout << spacer;

										cout << "||- Credits won:       " << currency << "\n";
									} else if(!win) {
										cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
										cout << "||- at the hands of the monsters. ";

										if(numHeroes > 1) {
											cout << "You and your recruited heroes\n";
											cout << "||- fought bravely but proved no match for the base.\n";
										} else {
											cout << "You fought bravely on your own but\n";
											cout << "||- proved no match for the base.\n";
										}
										cout << spacer;

										cout << "||- Defeated there is little that stands in the way of the monsters as\n";
										cout << "||- they lay slaughter to the population.\n";

										cout << spacer;

										cout << "||- Credits lost:      " << currency << "\n";
									}

									cout << spacer;

									cout << "||- Heroes killed:     " << losses << "\n";
									cout << "||- Enemies killed:    " << kills << "\n";
									cout << "||- Population killed: " << population << "\n";

									cout << spacer;

									cout << "|| [1] Continue\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection != 1) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be 1.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection == 1) {
											menuError = false;
										}
									}

								}
							} else if(menuSelection == 7 && r1b7Active) {
								// Base 7

								{
									cout << border;
									cout << "||------------------------------ Base 7 ---------------------------------||\n";
									cout << border;
									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									// Create a for loop to loop through each hero and display it
									// to the player

									for(int i = 0; i < numHeroes; i++) {

										// This variable will be used to store the heros health and attack bars

										int hashCount = 0;
										int equalCount = 0;

										if(i == 0) {
											cout << "||--- Heroes ---||\n";
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth00 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
												cout << "00" << heroTotalHealth00;
											} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
												cout << "0" << heroTotalHealth00;
											} else {
												cout << heroTotalHealth00;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack00 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack00 < 100 && heroAttack00 >= 10) {
												cout << "00" << heroAttack00;
											} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
												cout << "0" << heroAttack00;
											} else {
												cout << heroAttack00;
											}

											cout << " -||\n";
										} else if(i == 1) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth01 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
												cout << "00" << heroTotalHealth01;
											} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
												cout << "0" << heroTotalHealth01;
											} else {
												cout << heroTotalHealth01;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack01 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack01 < 100 && heroAttack01 >= 10) {
												cout << "00" << heroAttack01;
											} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
												cout << "0" << heroAttack01;
											} else {
												cout << heroAttack01;
											}

											cout << " -||\n";
										} else if(i == 2) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth02 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
												cout << "00" << heroTotalHealth02;
											} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
												cout << "0" << heroTotalHealth02;
											} else {
												cout << heroTotalHealth02;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack02 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack02 < 100 && heroAttack02 >= 10) {
												cout << "00" << heroAttack02;
											} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
												cout << "0" << heroAttack02;
											} else {
												cout << heroAttack02;
											}

											cout << " -||\n";
										} else if(i == 3) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth03 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
												cout << "00" << heroTotalHealth03;
											} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
												cout << "0" << heroTotalHealth03;
											} else {
												cout << heroTotalHealth03;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack03 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack03 < 100 && heroAttack03 >= 10) {
												cout << "00" << heroAttack03;
											} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
												cout << "0" << heroAttack03;
											} else {
												cout << heroAttack03;
											}

											cout << " -||\n";
										} else if(i == 4) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth04 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
												cout << "00" << heroTotalHealth04;
											} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
												cout << "0" << heroTotalHealth04;
											} else {
												cout << heroTotalHealth04;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack04 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack04 < 100 && heroAttack04 >= 10) {
												cout << "00" << heroAttack04;
											} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
												cout << "0" << heroAttack04;
											} else {
												cout << heroAttack04;
											}

											cout << " -||\n";
										}

										cout << "||--------------------------------------------------------------||\n";
									}

									cout << spacer;

									// Display monsters to player

									if(!r1b7Counted) {
										if(r1b7Active00) r1b7Units++;
										if(r1b7Active01) r1b7Units++;
										if(r1b7Active02) r1b7Units++;
										if(r1b7Active03) r1b7Units++;
										if(r1b7Active04) r1b7Units++;

										r1b7Counted = true;
									}

									for(int i = 0; i < r1b7Units; i++) {

										int hashCount = 0;
										int equalCount = 0;

										if(i == 0) {
											cout << "||-- Monsters --||\n";
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(r1b7Name00.length() == 1) {
												cout << "----- " << r1b7Name00 << " ------";
											} else if(r1b7Name00.length() == 2) {
												cout << "----- " << r1b7Name00 << " -----";
											} else if(r1b7Name00.length() == 3) {
												cout << "---- " << r1b7Name00 << " -----";
											} else if(r1b7Name00.length() == 4) {
												cout << "---- " << r1b7Name00 << " ----";
											} else if(r1b7Name00.length() == 5) {
												cout << "--- " << r1b7Name00 << " ----";
											} else if(r1b7Name00.length() == 6) {
												cout << "--- " << r1b7Name00 << " ---";
											} else if(r1b7Name00.length() == 7) {
												cout << "-- " << r1b7Name00 << " ---";
											} else if(r1b7Name00.length() == 8) {
												cout << "-- " << r1b7Name00 << " --";
											} else if(r1b7Name00.length() == 9) {
												cout << "- " << r1b7Name00 << " --";
											} else if(r1b7Name00.length() == 10) {
												cout << "- " << r1b7Name00 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b7TotalHealth00 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7TotalHealth00 < 100 && r1b7TotalHealth00 >= 10) {
												cout << "00" << r1b7TotalHealth00;
											} else if(r1b7TotalHealth00 < 1000 && r1b7TotalHealth00 >= 100) {
												cout << "0" << r1b7TotalHealth00;
											} else {
												cout << r1b7TotalHealth00;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b7Name00.length() == 1) {
												cout << "----- " << r1b7Name00 << " ------";
											} else if(r1b7Name00.length() == 2) {
												cout << "----- " << r1b7Name00 << " -----";
											} else if(r1b7Name00.length() == 3) {
												cout << "---- " << r1b7Name00 << " -----";
											} else if(r1b7Name00.length() == 4) {
												cout << "---- " << r1b7Name00 << " ----";
											} else if(r1b7Name00.length() == 5) {
												cout << "--- " << r1b7Name00 << " ----";
											} else if(r1b7Name00.length() == 6) {
												cout << "--- " << r1b7Name00 << " ---";
											} else if(r1b7Name00.length() == 7) {
												cout << "-- " << r1b7Name00 << " ---";
											} else if(r1b7Name00.length() == 8) {
												cout << "-- " << r1b7Name00 << " --";
											} else if(r1b7Name00.length() == 9) {
												cout << "- " << r1b7Name00 << " --";
											} else if(r1b7Name00.length() == 10) {
												cout << "- " << r1b7Name00 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b7Attack00 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7Attack00 < 100 && r1b7Attack00 >= 10) {
												cout << "00" << r1b7Attack00;
											} else if(r1b7Attack00 < 1000 && r1b7Attack00 >= 100) {
												cout << "0" << r1b7Attack00;
											} else {
												cout << r1b7Attack00;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 1) {
											cout << "||";

											if(r1b7Name01.length() == 1) {
												cout << "----- " << r1b7Name01 << " ------";
											} else if(r1b7Name01.length() == 2) {
												cout << "----- " << r1b7Name01 << " -----";
											} else if(r1b7Name01.length() == 3) {
												cout << "---- " << r1b7Name01 << " -----";
											} else if(r1b7Name01.length() == 4) {
												cout << "---- " << r1b7Name01 << " ----";
											} else if(r1b7Name01.length() == 5) {
												cout << "--- " << r1b7Name01 << " ----";
											} else if(r1b7Name01.length() == 6) {
												cout << "--- " << r1b7Name01 << " ---";
											} else if(r1b7Name01.length() == 7) {
												cout << "-- " << r1b7Name01 << " ---";
											} else if(r1b7Name01.length() == 8) {
												cout << "-- " << r1b7Name01 << " --";
											} else if(r1b7Name01.length() == 9) {
												cout << "- " << r1b7Name01 << " --";
											} else if(r1b7Name01.length() == 10) {
												cout << "- " << r1b7Name01 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b7TotalHealth01 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7TotalHealth01 < 100 && r1b7TotalHealth01 >= 10) {
												cout << "00" << r1b7TotalHealth01;
											} else if(r1b7TotalHealth01 < 1000 && r1b7TotalHealth01 >= 100) {
												cout << "0" << r1b7TotalHealth01;
											} else {
												cout << r1b7TotalHealth01;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b7Name01.length() == 1) {
												cout << "----- " << r1b7Name01 << " ------";
											} else if(r1b7Name01.length() == 2) {
												cout << "----- " << r1b7Name01 << " -----";
											} else if(r1b7Name01.length() == 3) {
												cout << "---- " << r1b7Name01 << " -----";
											} else if(r1b7Name01.length() == 4) {
												cout << "---- " << r1b7Name01 << " ----";
											} else if(r1b7Name01.length() == 5) {
												cout << "--- " << r1b7Name01 << " ----";
											} else if(r1b7Name01.length() == 6) {
												cout << "--- " << r1b7Name01 << " ---";
											} else if(r1b7Name01.length() == 7) {
												cout << "-- " << r1b7Name01 << " ---";
											} else if(r1b7Name01.length() == 8) {
												cout << "-- " << r1b7Name01 << " --";
											} else if(r1b7Name01.length() == 9) {
												cout << "- " << r1b7Name01 << " --";
											} else if(r1b7Name01.length() == 10) {
												cout << "- " << r1b7Name01 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b7Attack01 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7Attack01 < 100 && r1b7Attack01 >= 10) {
												cout << "00" << r1b7Attack01;
											} else if(r1b7Attack01 < 1000 && r1b7Attack01 >= 100) {
												cout << "0" << r1b7Attack01;
											} else {
												cout << r1b7Attack01;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 2) {
											cout << "||";

											if(r1b7Name02.length() == 1) {
												cout << "----- " << r1b7Name02 << " ------";
											} else if(r1b7Name02.length() == 2) {
												cout << "----- " << r1b7Name02 << " -----";
											} else if(r1b7Name02.length() == 3) {
												cout << "---- " << r1b7Name02 << " -----";
											} else if(r1b7Name02.length() == 4) {
												cout << "---- " << r1b7Name02 << " ----";
											} else if(r1b7Name02.length() == 5) {
												cout << "--- " << r1b7Name02 << " ----";
											} else if(r1b7Name02.length() == 6) {
												cout << "--- " << r1b7Name02 << " ---";
											} else if(r1b7Name02.length() == 7) {
												cout << "-- " << r1b7Name02 << " ---";
											} else if(r1b7Name02.length() == 8) {
												cout << "-- " << r1b7Name02 << " --";
											} else if(r1b7Name02.length() == 9) {
												cout << "- " << r1b7Name02 << " --";
											} else if(r1b7Name02.length() == 10) {
												cout << "- " << r1b7Name02 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b7TotalHealth02 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7TotalHealth02 < 100 && r1b7TotalHealth02 >= 10) {
												cout << "00" << r1b7TotalHealth02;
											} else if(r1b7TotalHealth02 < 1000 && r1b7TotalHealth02 >= 100) {
												cout << "0" << r1b7TotalHealth02;
											} else {
												cout << r1b7TotalHealth02;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b7Name02.length() == 1) {
												cout << "----- " << r1b7Name02 << " ------";
											} else if(r1b7Name02.length() == 2) {
												cout << "----- " << r1b7Name02 << " -----";
											} else if(r1b7Name02.length() == 3) {
												cout << "---- " << r1b7Name02 << " -----";
											} else if(r1b7Name02.length() == 4) {
												cout << "---- " << r1b7Name02 << " ----";
											} else if(r1b7Name02.length() == 5) {
												cout << "--- " << r1b7Name02 << " ----";
											} else if(r1b7Name02.length() == 6) {
												cout << "--- " << r1b7Name02 << " ---";
											} else if(r1b7Name02.length() == 7) {
												cout << "-- " << r1b7Name02 << " ---";
											} else if(r1b7Name02.length() == 8) {
												cout << "-- " << r1b7Name02 << " --";
											} else if(r1b7Name02.length() == 9) {
												cout << "- " << r1b7Name02 << " --";
											} else if(r1b7Name02.length() == 10) {
												cout << "- " << r1b7Name02 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b7Attack02 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7Attack02 < 100 && r1b7Attack02 >= 10) {
												cout << "00" << r1b7Attack02;
											} else if(r1b7Attack02 < 1000 && r1b7Attack02 >= 100) {
												cout << "0" << r1b7Attack02;
											} else {
												cout << r1b7Attack02;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 3) {
											cout << "||";

											if(r1b7Name03.length() == 1) {
												cout << "----- " << r1b7Name03 << " ------";
											} else if(r1b7Name03.length() == 2) {
												cout << "----- " << r1b7Name03 << " -----";
											} else if(r1b7Name03.length() == 3) {
												cout << "---- " << r1b7Name03 << " -----";
											} else if(r1b7Name03.length() == 4) {
												cout << "---- " << r1b7Name03 << " ----";
											} else if(r1b7Name03.length() == 5) {
												cout << "--- " << r1b7Name03 << " ----";
											} else if(r1b7Name03.length() == 6) {
												cout << "--- " << r1b7Name03 << " ---";
											} else if(r1b7Name03.length() == 7) {
												cout << "-- " << r1b7Name03 << " ---";
											} else if(r1b7Name03.length() == 8) {
												cout << "-- " << r1b7Name03 << " --";
											} else if(r1b7Name03.length() == 9) {
												cout << "- " << r1b7Name03 << " --";
											} else if(r1b7Name03.length() == 10) {
												cout << "- " << r1b7Name03 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b7TotalHealth03 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7TotalHealth03 < 100 && r1b7TotalHealth03 >= 10) {
												cout << "00" << r1b7TotalHealth03;
											} else if(r1b7TotalHealth03 < 1000 && r1b7TotalHealth03 >= 100) {
												cout << "0" << r1b7TotalHealth03;
											} else {
												cout << r1b7TotalHealth03;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b7Name03.length() == 1) {
												cout << "----- " << r1b7Name03 << " ------";
											} else if(r1b7Name03.length() == 2) {
												cout << "----- " << r1b7Name03 << " -----";
											} else if(r1b7Name03.length() == 3) {
												cout << "---- " << r1b7Name03 << " -----";
											} else if(r1b7Name03.length() == 4) {
												cout << "---- " << r1b7Name03 << " ----";
											} else if(r1b7Name03.length() == 5) {
												cout << "--- " << r1b7Name03 << " ----";
											} else if(r1b7Name03.length() == 6) {
												cout << "--- " << r1b7Name03 << " ---";
											} else if(r1b7Name03.length() == 7) {
												cout << "-- " << r1b7Name03 << " ---";
											} else if(r1b7Name03.length() == 8) {
												cout << "-- " << r1b7Name03 << " --";
											} else if(r1b7Name03.length() == 9) {
												cout << "- " << r1b7Name03 << " --";
											} else if(r1b7Name03.length() == 10) {
												cout << "- " << r1b7Name03 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b7Attack03 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7Attack03 < 100 && r1b7Attack03 >= 10) {
												cout << "00" << r1b7Attack03;
											} else if(r1b7Attack03 < 1000 && r1b7Attack03 >= 100) {
												cout << "0" << r1b7Attack03;
											} else {
												cout << r1b7Attack03;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 4) {
											cout << "||";

											if(r1b7Name04.length() == 1) {
												cout << "----- " << r1b7Name04 << " ------";
											} else if(r1b7Name04.length() == 2) {
												cout << "----- " << r1b7Name04 << " -----";
											} else if(r1b7Name04.length() == 3) {
												cout << "---- " << r1b7Name04 << " -----";
											} else if(r1b7Name04.length() == 4) {
												cout << "---- " << r1b7Name04 << " ----";
											} else if(r1b7Name04.length() == 5) {
												cout << "--- " << r1b7Name04 << " ----";
											} else if(r1b7Name04.length() == 6) {
												cout << "--- " << r1b7Name04 << " ---";
											} else if(r1b7Name04.length() == 7) {
												cout << "-- " << r1b7Name04 << " ---";
											} else if(r1b7Name04.length() == 8) {
												cout << "-- " << r1b7Name04 << " --";
											} else if(r1b7Name04.length() == 9) {
												cout << "- " << r1b7Name04 << " --";
											} else if(r1b7Name04.length() == 10) {
												cout << "- " << r1b7Name04 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b7TotalHealth04 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7TotalHealth04 < 100 && r1b7TotalHealth04 >= 10) {
												cout << "00" << r1b7TotalHealth04;
											} else if(r1b7TotalHealth04 < 1000 && r1b7TotalHealth04 >= 100) {
												cout << "0" << r1b7TotalHealth04;
											} else {
												cout << r1b7TotalHealth04;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b7Name04.length() == 1) {
												cout << "----- " << r1b7Name04 << " ------";
											} else if(r1b7Name04.length() == 2) {
												cout << "----- " << r1b7Name04 << " -----";
											} else if(r1b7Name04.length() == 3) {
												cout << "---- " << r1b7Name04 << " -----";
											} else if(r1b7Name04.length() == 4) {
												cout << "---- " << r1b7Name04 << " ----";
											} else if(r1b7Name04.length() == 5) {
												cout << "--- " << r1b7Name04 << " ----";
											} else if(r1b7Name04.length() == 6) {
												cout << "--- " << r1b7Name04 << " ---";
											} else if(r1b7Name04.length() == 7) {
												cout << "-- " << r1b7Name04 << " ---";
											} else if(r1b7Name04.length() == 8) {
												cout << "-- " << r1b7Name04 << " --";
											} else if(r1b7Name04.length() == 9) {
												cout << "- " << r1b7Name04 << " --";
											} else if(r1b7Name04.length() == 10) {
												cout << "- " << r1b7Name04 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b7Attack04 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b7Attack04 < 100 && r1b7Attack04 >= 10) {
												cout << "00" << r1b7Attack04;
											} else if(r1b7Attack04 < 1000 && r1b7Attack04 >= 100) {
												cout << "0" << r1b7Attack04;
											} else {
												cout << r1b7Attack04;
											}

											cout << " -||\n";
										}

										cout << "||--------------------------------------------------------------||\n";
									}

									cout << spacer;

									cout << "|| [1] Battle\n";

									cout << spacer;

									cout << "|| [2] Return\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection < 1 || menuSelection > 2) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be between 1 and 2.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection >= 1 && menuSelection <= 2) {
											menuError = false;
										}
									}

									if(menuSelection == 1 && r1b7Active) {
										// Battle time

										// Acquire total health points for heroes and monsters

										// Heroes

										if(heroActive00) heroTotalHealth += heroTotalHealth00;
										if(heroActive01) heroTotalHealth += heroTotalHealth01;
										if(heroActive02) heroTotalHealth += heroTotalHealth02;
										if(heroActive03) heroTotalHealth += heroTotalHealth03;
										if(heroActive04) heroTotalHealth += heroTotalHealth04;
										heroCurrentHealth = heroTotalHealth;

										// Monsters

										if(r1b7Active00) monsterTotalHealth += r1b7TotalHealth00;
										if(r1b7Active01) monsterTotalHealth += r1b7TotalHealth01;
										if(r1b7Active02) monsterTotalHealth += r1b7TotalHealth02;
										if(r1b7Active03) monsterTotalHealth += r1b7TotalHealth03;
										if(r1b7Active04) monsterTotalHealth += r1b7TotalHealth04;
										monsterCurrentHealth = monsterTotalHealth;

										// Used for choosing random units from either side

										uniform_int_distribution<int> theHero(1, numHeroes);
										uniform_int_distribution<int> theMonster(1, r1b7Units);

										// Loop battle until we have a winner

										while(playing) {
											uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b7Units));

											// Store names of two units that will be attacking

											string heroName = "";
											int    heroAttack = 0;
											string monsterName = "";
											int    monsterAttack = 0;
											int    heroUnit = 0;
											int    monsterUnit = 0;

											// Obtain hero details. If unit is not active loop through
											// until we find one that is.

											while(playing) {
												heroUnit = theHero(randomGenerator);

												if(heroUnit == 1 && heroStatus00) {
													heroName = heroName00;
													heroAttack = heroAttack00;
													playing = false;
												} else if(heroUnit == 2 && heroStatus01) {
													heroName = heroName01;
													heroAttack = heroAttack01;
													playing = false;
												} else if(heroUnit == 3 && heroStatus02) {
													heroName = heroName02;
													heroAttack = heroAttack02;
													playing = false;
												} else if(heroUnit == 4 && heroStatus03) {
													heroName = heroName03;
													heroAttack = heroAttack03;
													playing = false;
												} else if(heroUnit == 5 && heroStatus04) {
													heroName = heroName04;
													heroAttack = heroAttack04;
													playing = false;
												}
											}

											playing = true;

											// Obtain monster details. If unit is not active loop through
											// until we find one that is.

											while(playing) {
												monsterUnit = theMonster(randomGenerator);

												if(monsterUnit == 1 && r1b7Status00) {
													monsterName = r1b7Name00;
													monsterAttack = r1b7Attack00;
													playing = false;
												} else if(monsterUnit == 2 && r1b7Status01) {
													monsterName = r1b7Name01;
													monsterAttack = r1b7Attack01;
													playing = false;
												} else if(monsterUnit == 3 && r1b7Status02) {
													monsterName = r1b7Name02;
													monsterAttack = r1b7Attack02;
													playing = false;
												} else if(monsterUnit == 4 && r1b7Status03) {
													monsterName = r1b7Name03;
													monsterAttack = r1b7Attack03;
													playing = false;
												} else if(monsterUnit == 5 && r1b7Status04) {
													monsterName = r1b7Name04;
													monsterAttack = r1b7Attack04;
													playing = false;
												}
											}

											playing = true;

											// Time to choose who's attacking

											// 'int variable' will hold the total amount of units (heroes + monsters).
											// Whichever side has the most units will have a greater chance of being
											// selected to attack.

											int variable = totalUnits(randomGenerator);
											int attackingSide = 0;

											if(variable > 0 && variable <= numHeroes) {
												attackingSide = 0;
											} else if(variable > numHeroes || variable <= (numHeroes + r1b7Units)) {
												attackingSide = 1;
											}

											if(attackingSide == 0) {
												// Heroes attacking

												if(monsterUnit == 1) {
													if(heroAttack >= r1b7CurrentHealth00) {
														heroAttack = r1b7CurrentHealth00;
													}

													r1b7CurrentHealth00 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b7CurrentHealth00 <= 0) {
														r1b7TotalHealth00 = 0;
														r1b7Attack00 = 0;
														r1b7Status00 = false;
														r1b7Units--;
													}
												} else if(monsterUnit == 2) {
													if(heroAttack >= r1b7CurrentHealth01) {
														heroAttack = r1b7CurrentHealth01;
													}

													r1b7CurrentHealth01 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b7CurrentHealth01 <= 0) {
														r1b7TotalHealth01 = 0;
														r1b7Attack01 = 0;
														r1b7Status01 = false;
														r1b7Units--;
													}
												} else if(monsterUnit == 3) {
													if(heroAttack >= r1b7CurrentHealth02) {
														heroAttack = r1b7CurrentHealth02;
													}

													r1b7CurrentHealth02 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b7CurrentHealth02 <= 0) {
														r1b7TotalHealth02 = 0;
														r1b7Attack02 = 0;
														r1b7Status02 = false;
														r1b7Units--;
													}
												} else if(monsterUnit == 4) {
													if(heroAttack >= r1b7CurrentHealth03) {
														heroAttack = r1b7CurrentHealth03;
													}

													r1b7CurrentHealth03 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b7CurrentHealth03 <= 0) {
														r1b7TotalHealth03 = 0;
														r1b7Attack03 = 0;
														r1b7Status03 = false;
														r1b7Units--;
													}
												} else if(monsterUnit == 5) {
													if(heroAttack >= r1b7CurrentHealth04) {
														heroAttack = r1b7CurrentHealth04;
													}

													r1b7CurrentHealth04 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b7CurrentHealth04 <= 0) {
														r1b7TotalHealth04 = 0;
														r1b7Attack04 = 0;
														r1b7Status04 = false;
														r1b7Units--;
													}
												}
											} else if(attackingSide == 1) {
												// Monsters attacking

												if(heroUnit == 1) {
													if(monsterAttack >= heroCurrentHealth00) {
														monsterAttack = heroCurrentHealth00;
													}

													heroCurrentHealth00 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth00 <= 0) {
														heroStatus00 = false;
														numHeroes--;
													}
												} else if(heroUnit == 2) {
													if(monsterAttack >= heroCurrentHealth01) {
														monsterAttack = heroCurrentHealth01;
													}

													heroCurrentHealth01 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth01 <= 0) {
														heroTotalHealth01 = 0;
														heroAttack01 = 0;
														heroStatus01 = false;
														numHeroes--;
													}
												} else if(heroUnit == 3) {
													if(monsterAttack >= heroCurrentHealth02) {
														monsterAttack = heroCurrentHealth02;
													}

													heroCurrentHealth02 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth02 <= 0) {
														heroTotalHealth02 = 0;
														heroAttack02 = 0;
														heroStatus02 = false;
														numHeroes--;
													}
												} else if(heroUnit == 4) {
													if(monsterAttack >= heroCurrentHealth03) {
														monsterAttack = heroCurrentHealth03;
													}

													heroCurrentHealth03 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth03 <= 0) {
														heroTotalHealth03 = 0;
														heroAttack03 = 0;
														heroStatus03 = false;
														numHeroes--;
													}
												} else if(heroUnit == 5) {
													if(monsterAttack >= heroCurrentHealth04) {
														monsterAttack = heroCurrentHealth04;
													}

													heroCurrentHealth04 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth04 <= 0) {
														heroTotalHealth04 = 0;
														heroAttack04 = 0;
														heroStatus04 = false;
														numHeroes--;
													}
												}
											}

											// Display battle results to user

											float hashCount = 0;
											float equalCount = 0;

											cout << "||-------------------------------- HEALTH -------------------------------||\n";
											cout << "||-----------------------------------------------------------------------||\n";
											cout << "||-- Heroes --||- ";

											hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
											equalCount = 43.00f - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount - 1; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroCurrentHealth >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
												cout << heroCurrentHealth;
											} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
												cout << "0" << heroCurrentHealth;
											} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
												cout << "00" << heroCurrentHealth;
											} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
												cout << "000" << heroCurrentHealth;
											} else {
												cout << "0000";
											}

											cout << " -||\n";

											cout << "||-----------------------------------------------------------------------||\n";
											cout << "||- Monsters -||- ";

											hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
											equalCount = 43.00f - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount - 1; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(monsterCurrentHealth >= 10000) {
												cout << "9999";
											} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
												cout << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
												cout << "0" << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
												cout << "00" << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
												cout << "000" << monsterCurrentHealth;
											} else {
												cout << "0000";
											}

											cout << " -||\n";
											cout << "||-----------------------------------------------------------------------||\n";

											cout << spacer;

											cout << spacer;


											if(attackingSide == 0) {
												cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
											} else if(attackingSide == 1) {
												cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
											}

											cout << spacer;

											cout << "||-------------- Heroes -------------||\n";
											cout << "||-----------------------------------||\n";

											if(heroActive00) {
												cout << "||";

												if(heroName00.length() == 1) {
													cout << "----- " << heroName00 << " ------";
												} else if(heroName00.length() == 2) {
													cout << "----- " << heroName00 << " -----";
												} else if(heroName00.length() == 3) {
													cout << "---- " << heroName00 << " -----";
												} else if(heroName00.length() == 4) {
													cout << "---- " << heroName00 << " ----";
												} else if(heroName00.length() == 5) {
													cout << "--- " << heroName00 << " ----";
												} else if(heroName00.length() == 6) {
													cout << "--- " << heroName00 << " ---";
												} else if(heroName00.length() == 7) {
													cout << "-- " << heroName00 << " ---";
												} else if(heroName00.length() == 8) {
													cout << "-- " << heroName00 << " --";
												} else if(heroName00.length() == 9) {
													cout << "- " << heroName00 << " --";
												} else if(heroName00.length() == 10) {
													cout << "- " << heroName00 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth00 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
													cout << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
													cout << "0" << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
													cout << "00" << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
													cout << "000" << heroCurrentHealth00;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus00) {
													cout << "- ALIVE -";
												} else if(!heroStatus00) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive01) {
												cout << "||";

												if(heroName01.length() == 1) {
													cout << "----- " << heroName01 << " ------";
												} else if(heroName01.length() == 2) {
													cout << "----- " << heroName01 << " -----";
												} else if(heroName01.length() == 3) {
													cout << "---- " << heroName01 << " -----";
												} else if(heroName01.length() == 4) {
													cout << "---- " << heroName01 << " ----";
												} else if(heroName01.length() == 5) {
													cout << "--- " << heroName01 << " ----";
												} else if(heroName01.length() == 6) {
													cout << "--- " << heroName01 << " ---";
												} else if(heroName01.length() == 7) {
													cout << "-- " << heroName01 << " ---";
												} else if(heroName01.length() == 8) {
													cout << "-- " << heroName01 << " --";
												} else if(heroName01.length() == 9) {
													cout << "- " << heroName01 << " --";
												} else if(heroName01.length() == 10) {
													cout << "- " << heroName01 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth01 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
													cout << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
													cout << "0" << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
													cout << "00" << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
													cout << "000" << heroCurrentHealth01;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus01) {
													cout << "- ALIVE -";
												} else if(!heroStatus01) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive02) {
												cout << "||";

												if(heroName02.length() == 1) {
													cout << "----- " << heroName02 << " ------";
												} else if(heroName02.length() == 2) {
													cout << "----- " << heroName02 << " -----";
												} else if(heroName02.length() == 3) {
													cout << "---- " << heroName02 << " -----";
												} else if(heroName02.length() == 4) {
													cout << "---- " << heroName02 << " ----";
												} else if(heroName02.length() == 5) {
													cout << "--- " << heroName02 << " ----";
												} else if(heroName02.length() == 6) {
													cout << "--- " << heroName02 << " ---";
												} else if(heroName02.length() == 7) {
													cout << "-- " << heroName02 << " ---";
												} else if(heroName02.length() == 8) {
													cout << "-- " << heroName02 << " --";
												} else if(heroName02.length() == 9) {
													cout << "- " << heroName02 << " --";
												} else if(heroName02.length() == 10) {
													cout << "- " << heroName02 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth02 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
													cout << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
													cout << "0" << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
													cout << "00" << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
													cout << "000" << heroCurrentHealth02;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus02) {
													cout << "- ALIVE -";
												} else if(!heroStatus02) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive03) {
												cout << "||";

												if(heroName03.length() == 1) {
													cout << "----- " << heroName03 << " ------";
												} else if(heroName03.length() == 2) {
													cout << "----- " << heroName03 << " -----";
												} else if(heroName03.length() == 3) {
													cout << "---- " << heroName03 << " -----";
												} else if(heroName03.length() == 4) {
													cout << "---- " << heroName03 << " ----";
												} else if(heroName03.length() == 5) {
													cout << "--- " << heroName03 << " ----";
												} else if(heroName03.length() == 6) {
													cout << "--- " << heroName03 << " ---";
												} else if(heroName03.length() == 7) {
													cout << "-- " << heroName03 << " ---";
												} else if(heroName03.length() == 8) {
													cout << "-- " << heroName03 << " --";
												} else if(heroName03.length() == 9) {
													cout << "- " << heroName03 << " --";
												} else if(heroName03.length() == 10) {
													cout << "- " << heroName03 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth03 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
													cout << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
													cout << "0" << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
													cout << "00" << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
													cout << "000" << heroCurrentHealth03;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus03) {
													cout << "- ALIVE -";
												} else if(!heroStatus03) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive04) {
												cout << "||";

												if(heroName04.length() == 1) {
													cout << "----- " << heroName04 << " ------";
												} else if(heroName04.length() == 2) {
													cout << "----- " << heroName04 << " -----";
												} else if(heroName04.length() == 3) {
													cout << "---- " << heroName04 << " -----";
												} else if(heroName04.length() == 4) {
													cout << "---- " << heroName04 << " ----";
												} else if(heroName04.length() == 5) {
													cout << "--- " << heroName04 << " ----";
												} else if(heroName04.length() == 6) {
													cout << "--- " << heroName04 << " ---";
												} else if(heroName04.length() == 7) {
													cout << "-- " << heroName04 << " ---";
												} else if(heroName04.length() == 8) {
													cout << "-- " << heroName04 << " --";
												} else if(heroName04.length() == 9) {
													cout << "- " << heroName04 << " --";
												} else if(heroName04.length() == 10) {
													cout << "- " << heroName04 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth04 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
													cout << heroCurrentHealth00;
												} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
													cout << "0" << heroCurrentHealth04;
												} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
													cout << "00" << heroCurrentHealth04;
												} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
													cout << "000" << heroCurrentHealth04;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus04) {
													cout << "- ALIVE -";
												} else if(!heroStatus04) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											cout << "||-----------------------------------||\n";

											cout << spacer;

											cout << "||------------- Monsters ------------||\n";
											cout << "||-----------------------------------||\n";

											if(r1b7Active00) {
												cout << "||";

												if(r1b7Name00.length() == 1) {
													cout << "----- " << r1b7Name00 << " ------";
												} else if(r1b7Name00.length() == 2) {
													cout << "----- " << r1b7Name00 << " -----";
												} else if(r1b7Name00.length() == 3) {
													cout << "---- " << r1b7Name00 << " -----";
												} else if(r1b7Name00.length() == 4) {
													cout << "---- " << r1b7Name00 << " ----";
												} else if(r1b7Name00.length() == 5) {
													cout << "--- " << r1b7Name00 << " ----";
												} else if(r1b7Name00.length() == 6) {
													cout << "--- " << r1b7Name00 << " ---";
												} else if(r1b7Name00.length() == 7) {
													cout << "-- " << r1b7Name00 << " ---";
												} else if(r1b7Name00.length() == 8) {
													cout << "-- " << r1b7Name00 << " --";
												} else if(r1b7Name00.length() == 9) {
													cout << "- " << r1b7Name00 << " --";
												} else if(r1b7Name00.length() == 10) {
													cout << "- " << r1b7Name00 << " -";
												}

												cout << "||- ";

												if(r1b7CurrentHealth00 >= 10000) {
													cout << "9999";
												} else if(r1b7CurrentHealth00 >= 1000 && r1b7CurrentHealth00 < 10000) {
													cout << r1b7CurrentHealth00;
												} else if(r1b7CurrentHealth00 >= 100 && r1b7CurrentHealth00 < 1000) {
													cout << "0" << r1b7CurrentHealth00;
												} else if(r1b7CurrentHealth00 >= 10 && r1b7CurrentHealth00 < 100) {
													cout << "00" << r1b7CurrentHealth00;
												} else if(r1b7CurrentHealth00 >= 1 && r1b7CurrentHealth00 < 10) {
													cout << "000" << r1b7CurrentHealth00;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b7Status00) {
													cout << "- ALIVE -";
												} else if(!r1b7Status00) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b7Active01) {
												cout << "||";

												if(r1b7Name01.length() == 1) {
													cout << "----- " << r1b7Name01 << " ------";
												} else if(r1b7Name01.length() == 2) {
													cout << "----- " << r1b7Name01 << " -----";
												} else if(r1b7Name01.length() == 3) {
													cout << "---- " << r1b7Name01 << " -----";
												} else if(r1b7Name01.length() == 4) {
													cout << "---- " << r1b7Name01 << " ----";
												} else if(r1b7Name01.length() == 5) {
													cout << "--- " << r1b7Name01 << " ----";
												} else if(r1b7Name01.length() == 6) {
													cout << "--- " << r1b7Name01 << " ---";
												} else if(r1b7Name01.length() == 7) {
													cout << "-- " << r1b7Name01 << " ---";
												} else if(r1b7Name01.length() == 8) {
													cout << "-- " << r1b7Name01 << " --";
												} else if(r1b7Name01.length() == 9) {
													cout << "- " << r1b7Name01 << " --";
												} else if(r1b7Name01.length() == 10) {
													cout << "- " << r1b7Name01 << " -";
												}

												cout << "||- ";

												if(r1b7CurrentHealth01 >= 10000) {
													cout << "9999";
												} else if(r1b7CurrentHealth01 >= 1000 && r1b7CurrentHealth01 < 10000) {
													cout << r1b7CurrentHealth01;
												} else if(r1b7CurrentHealth01 >= 100 && r1b7CurrentHealth01 < 1000) {
													cout << "0" << r1b7CurrentHealth01;
												} else if(r1b7CurrentHealth01 >= 10 && r1b7CurrentHealth01 < 100) {
													cout << "00" << r1b7CurrentHealth01;
												} else if(r1b7CurrentHealth01 >= 1 && r1b7CurrentHealth01 < 10) {
													cout << "000" << r1b7CurrentHealth01;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b7Status01) {
													cout << "- ALIVE -";
												} else if(!r1b7Status01) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b7Active02) {
												cout << "||";

												if(r1b7Name02.length() == 1) {
													cout << "----- " << r1b7Name02 << " ------";
												} else if(r1b7Name02.length() == 2) {
													cout << "----- " << r1b7Name02 << " -----";
												} else if(r1b7Name02.length() == 3) {
													cout << "---- " << r1b7Name02 << " -----";
												} else if(r1b7Name02.length() == 4) {
													cout << "---- " << r1b7Name02 << " ----";
												} else if(r1b7Name02.length() == 5) {
													cout << "--- " << r1b7Name02 << " ----";
												} else if(r1b7Name02.length() == 6) {
													cout << "--- " << r1b7Name02 << " ---";
												} else if(r1b7Name02.length() == 7) {
													cout << "-- " << r1b7Name02 << " ---";
												} else if(r1b7Name02.length() == 8) {
													cout << "-- " << r1b7Name02 << " --";
												} else if(r1b7Name02.length() == 9) {
													cout << "- " << r1b7Name02 << " --";
												} else if(r1b7Name02.length() == 10) {
													cout << "- " << r1b7Name02 << " -";
												}

												cout << "||- ";

												if(r1b7CurrentHealth02 >= 10000) {
													cout << "9999";
												} else if(r1b7CurrentHealth02 >= 1000 && r1b7CurrentHealth02 < 10000) {
													cout << r1b7CurrentHealth02;
												} else if(r1b7CurrentHealth02 >= 100 && r1b7CurrentHealth02 < 1000) {
													cout << "0" << r1b7CurrentHealth02;
												} else if(r1b7CurrentHealth02 >= 10 && r1b7CurrentHealth02 < 100) {
													cout << "00" << r1b7CurrentHealth02;
												} else if(r1b7CurrentHealth02 >= 1 && r1b7CurrentHealth02 < 10) {
													cout << "000" << r1b7CurrentHealth02;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b7Status02) {
													cout << "- ALIVE -";
												} else if(!r1b7Status02) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b7Active03) {
												cout << "||";

												if(r1b7Name03.length() == 1) {
													cout << "----- " << r1b7Name03 << " ------";
												} else if(r1b7Name03.length() == 2) {
													cout << "----- " << r1b7Name03 << " -----";
												} else if(r1b7Name03.length() == 3) {
													cout << "---- " << r1b7Name03 << " -----";
												} else if(r1b7Name03.length() == 4) {
													cout << "---- " << r1b7Name03 << " ----";
												} else if(r1b7Name03.length() == 5) {
													cout << "--- " << r1b7Name03 << " ----";
												} else if(r1b7Name03.length() == 6) {
													cout << "--- " << r1b7Name03 << " ---";
												} else if(r1b7Name03.length() == 7) {
													cout << "-- " << r1b7Name03 << " ---";
												} else if(r1b7Name03.length() == 8) {
													cout << "-- " << r1b7Name03 << " --";
												} else if(r1b7Name03.length() == 9) {
													cout << "- " << r1b7Name03 << " --";
												} else if(r1b7Name03.length() == 10) {
													cout << "- " << r1b7Name03 << " -";
												}

												cout << "||- ";

												if(r1b7CurrentHealth03 >= 10000) {
													cout << "9999";
												} else if(r1b7CurrentHealth03 >= 1000 && r1b7CurrentHealth03 < 10000) {
													cout << r1b7CurrentHealth03;
												} else if(r1b7CurrentHealth03 >= 100 && r1b7CurrentHealth03 < 1000) {
													cout << "0" << r1b7CurrentHealth03;
												} else if(r1b7CurrentHealth03 >= 10 && r1b7CurrentHealth03 < 100) {
													cout << "00" << r1b7CurrentHealth03;
												} else if(r1b7CurrentHealth03 >= 1 && r1b7CurrentHealth03 < 10) {
													cout << "000" << r1b7CurrentHealth03;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b7Status03) {
													cout << "- ALIVE -";
												} else if(!r1b7Status03) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b7Active04) {
												cout << "||";

												if(r1b7Name04.length() == 1) {
													cout << "----- " << r1b7Name04 << " ------";
												} else if(r1b7Name04.length() == 2) {
													cout << "----- " << r1b7Name04 << " -----";
												} else if(r1b7Name04.length() == 3) {
													cout << "---- " << r1b7Name04 << " -----";
												} else if(r1b7Name04.length() == 4) {
													cout << "---- " << r1b7Name04 << " ----";
												} else if(r1b7Name04.length() == 5) {
													cout << "--- " << r1b7Name04 << " ----";
												} else if(r1b7Name04.length() == 6) {
													cout << "--- " << r1b7Name04 << " ---";
												} else if(r1b7Name04.length() == 7) {
													cout << "-- " << r1b7Name04 << " ---";
												} else if(r1b7Name04.length() == 8) {
													cout << "-- " << r1b7Name04 << " --";
												} else if(r1b7Name04.length() == 9) {
													cout << "- " << r1b7Name04 << " --";
												} else if(r1b7Name04.length() == 10) {
													cout << "- " << r1b7Name04 << " -";
												}

												cout << "||- ";

												if(r1b7CurrentHealth04 >= 10000) {
													cout << "9999";
												} else if(r1b7CurrentHealth04 >= 1000 && r1b7CurrentHealth04 < 10000) {
													cout << r1b7CurrentHealth04;
												} else if(r1b7CurrentHealth04 >= 100 && r1b7CurrentHealth04 < 1000) {
													cout << "0" << r1b7CurrentHealth04;
												} else if(r1b7CurrentHealth04 >= 10 && r1b7CurrentHealth04 < 100) {
													cout << "00" << r1b7CurrentHealth04;
												} else if(r1b7CurrentHealth04 >= 1 && r1b7CurrentHealth04 < 10) {
													cout << "000" << r1b7CurrentHealth04;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b7Status04) {
													cout << "- ALIVE -";
												} else if(!r1b7Status04) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											cout << "||-----------------------------------||\n";

											cout << spacer;

											// Crappy timer to slow loop

											int num1 = 0;
											int num2 = 0;

											while(playing) {
												num1++;

												if(num1 >= 100000) {
													num2++;
													num1 = 0;
												}

												if(num2 >= 10000) {
													num1 = 0;
													num2 = 0;
													playing = false;
												}
											}

											playing = true;

											if(numHeroes <= 0 || r1b7Units <= 0) {
												playing = false;
											}
										}

										playing = true;

										// Update logic

										bool win = false;
										int losses = 0;
										int kills = 0;
										int population = 0;
										int currency = 0;

										if(numHeroes <= 0 && r1b7Units > 0) {
											win = false;
											conquestDefeats++;

											uniform_int_distribution<int> killed(5, (r1b7Units * 10));

											population = killed(randomGenerator);

											populationAlive -= population;
											populationDead += population;

											currency = (r1b7CurrentHealth00 + r1b7CurrentHealth01 + r1b7CurrentHealth02 + r1b7CurrentHealth03 + r1b7CurrentHealth04) * r1b7Units;

											lostCredits += currency;

											if((currentCredits - currency) <= 0) {
												currentCredits = 0;
											} else {
												currentCredits -= currency;
											}

										} else if(numHeroes > 0 && r1b7Units <= 0) {
											win = true;

											r1b7Active = false;
											r1b8Active = true;

											conquestWins++;

											currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

											wonCredits += currency;
											currentCredits += wonCredits;
										}

										if(!heroStatus00 && heroActive00) {
											heroCurrentHealth00 = heroTotalHealth00;
											heroStatus00 = true;
											numHeroes++;
										} else {
											heroCurrentHealth00 = heroTotalHealth00;
											heroStatus00 = true;
										}

										if(!heroStatus01 && heroActive01) {
											heroTotalHealth01 = 0;
											heroCurrentHealth01 = heroTotalHealth01;
											heroAttack01 = 0;
											heroActive01 = false;
											losses++;
										} else {
											heroCurrentHealth01 = heroTotalHealth01;
											heroStatus01 = true;
										}

										if(!heroStatus02 && heroActive02) {
											heroTotalHealth02 = 0;
											heroCurrentHealth02 = heroTotalHealth02;
											heroAttack02 = 0;
											heroActive02 = false;
											losses++;
										} else {
											heroCurrentHealth02 = heroTotalHealth02;
											heroStatus02 = true;
										}

										if(!heroStatus03 && heroActive03) {
											heroTotalHealth03 = 0;
											heroCurrentHealth03 = heroTotalHealth;
											heroAttack03 = 0;
											heroActive03 = false;
											losses++;
										} else {
											heroCurrentHealth03 = heroTotalHealth03;
											heroStatus03 = true;
										}

										if(!heroStatus04 && heroActive04) {
											heroTotalHealth04 = 0;
											heroCurrentHealth04 = heroTotalHealth04;
											heroAttack04 = 0;
											heroActive04 = false;
											losses++;
										} else {
											heroCurrentHealth04 = heroTotalHealth04;
											heroStatus04 = true;
										}

										if(!r1b7Status00 && r1b7Active00) {
											r1b7TotalHealth00 = 0;
											r1b7CurrentHealth00 = r1b7TotalHealth00;
											r1b7Attack00 = 0;
											r1b7Active = false;
											kills++;
										} else {
											r1b7CurrentHealth00 = r1b7TotalHealth00;
											r1b7Status00 = true;
										}

										if(!r1b7Status01 && r1b7Active01) {
											r1b7TotalHealth01 = 0;
											r1b7CurrentHealth01 = r1b7TotalHealth01;
											r1b7Attack01 = 0;
											r1b7Active = false;
											kills++;
										} else {
											r1b7CurrentHealth01 = r1b7TotalHealth01;
											r1b7Status01 = true;
										}

										if(!r1b7Status02 && r1b7Active02) {
											r1b7TotalHealth02 = 0;
											r1b7CurrentHealth02 = r1b7TotalHealth02;
											r1b7Attack02 = 0;
											r1b7Active = false;
											kills++;
										} else {
											r1b7CurrentHealth02 = r1b7TotalHealth02;
											r1b7Status02 = true;
										}

										if(!r1b7Status03 && r1b7Active03) {
											r1b7TotalHealth03 = 0;
											r1b7CurrentHealth03 = r1b7TotalHealth03;
											r1b7Attack03 = 0;
											r1b7Active = false;
											kills++;
										} else {
											r1b7CurrentHealth03 = r1b7TotalHealth03;
											r1b7Status03 = true;
										}

										if(!r1b7Status04 && r1b7Active04) {
											r1b7TotalHealth04 = 0;
											r1b7CurrentHealth04 = r1b7TotalHealth04;
											r1b7Attack04 = 0;
											r1b7Active = false;
											kills++;
										} else {
											r1b7CurrentHealth04 = r1b7TotalHealth04;
											r1b7Status00 = true;
										}

										deadHeroes += losses;
										enemiesKilled += kills;

										// Display end results to user

										cout << border;
										cout << "||-------------------------- Battle Results -----------------------------||\n";
										cout << border;

										cout << spacer;

										cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

										cout << spacer;

										if(win) {
											cout << "||- After a long and exhausting battle you come out victorious. You\n";
											cout << "||- have successfully destroyed the base and all monsters within it.\n";
											cout << "||- It's now time to take whatever loot is available and continue \n";
											cout << "||- onto the next base.\n";

											cout << spacer;

											cout << "||- Credits won:       " << currency << "\n";
										} else if(!win) {
											cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
											cout << "||- at the hands of the monsters. ";

											if(numHeroes > 1) {
												cout << "You and your recruited heroes\n";
												cout << "||- fought bravely but proved no match for the base.\n";
											} else {
												cout << "You fought bravely on your own but\n";
												cout << "||- proved no match for the base.\n";
											}
											cout << spacer;

											cout << "||- Defeated there is little that stands in the way of the monsters as\n";
											cout << "||- they lay slaughter to the population.\n";

											cout << spacer;

											cout << "||- Credits lost:      " << currency << "\n";
										}

										cout << spacer;

										cout << "||- Heroes killed:     " << losses << "\n";
										cout << "||- Enemies killed:    " << kills << "\n";
										cout << "||- Population killed: " << population << "\n";

										cout << spacer;

										cout << "|| [1] Continue\n";

										cout << spacer;

										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection != 1) {
											menuError = true;
										}

										while(menuError) {
											cout << spacer;
											cout << "|| " << error << "Number must be 1.\n";
											cout << spacer;
											cout << "|| Please enter a number: ";
											cin >> menuSelection;

											if(menuSelection == 1) {
												menuError = false;
											}
										}

									}
								}
							} else if(menuSelection == 8 && r1b8Active) {
								// Base 8

								{
									cout << border;
									cout << "||------------------------------ Base 1 ---------------------------------||\n";
									cout << border;
									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									// Create a for loop to loop through each hero and display it
									// to the player

									for(int i = 0; i < numHeroes; i++) {

										// This variable will be used to store the heros health and attack bars

										int hashCount = 0;
										int equalCount = 0;

										if(i == 0) {
											cout << "||--- Heroes ---||\n";
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth00 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
												cout << "00" << heroTotalHealth00;
											} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
												cout << "0" << heroTotalHealth00;
											} else {
												cout << heroTotalHealth00;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack00 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack00 < 100 && heroAttack00 >= 10) {
												cout << "00" << heroAttack00;
											} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
												cout << "0" << heroAttack00;
											} else {
												cout << heroAttack00;
											}

											cout << " -||\n";
										} else if(i == 1) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth01 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
												cout << "00" << heroTotalHealth01;
											} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
												cout << "0" << heroTotalHealth01;
											} else {
												cout << heroTotalHealth01;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack01 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack01 < 100 && heroAttack01 >= 10) {
												cout << "00" << heroAttack01;
											} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
												cout << "0" << heroAttack01;
											} else {
												cout << heroAttack01;
											}

											cout << " -||\n";
										} else if(i == 2) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth02 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
												cout << "00" << heroTotalHealth02;
											} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
												cout << "0" << heroTotalHealth02;
											} else {
												cout << heroTotalHealth02;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack02 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack02 < 100 && heroAttack02 >= 10) {
												cout << "00" << heroAttack02;
											} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
												cout << "0" << heroAttack02;
											} else {
												cout << heroAttack02;
											}

											cout << " -||\n";
										} else if(i == 3) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth03 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
												cout << "00" << heroTotalHealth03;
											} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
												cout << "0" << heroTotalHealth03;
											} else {
												cout << heroTotalHealth03;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack03 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack03 < 100 && heroAttack03 >= 10) {
												cout << "00" << heroAttack03;
											} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
												cout << "0" << heroAttack03;
											} else {
												cout << heroAttack03;
											}

											cout << " -||\n";
										} else if(i == 4) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth04 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
												cout << "00" << heroTotalHealth04;
											} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
												cout << "0" << heroTotalHealth04;
											} else {
												cout << heroTotalHealth04;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack04 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack04 < 100 && heroAttack04 >= 10) {
												cout << "00" << heroAttack04;
											} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
												cout << "0" << heroAttack04;
											} else {
												cout << heroAttack04;
											}

											cout << " -||\n";
										}

										cout << "||--------------------------------------------------------------||\n";
									}

									cout << spacer;

									// Display monsters to player

									if(!r1b8Counted) {
										if(r1b8Active00) r1b8Units++;
										if(r1b8Active01) r1b8Units++;
										if(r1b8Active02) r1b8Units++;
										if(r1b8Active03) r1b8Units++;
										if(r1b8Active04) r1b8Units++;

										r1b8Counted = true;
									}

									for(int i = 0; i < r1b8Units; i++) {

										int hashCount = 0;
										int equalCount = 0;

										if(i == 0) {
											cout << "||-- Monsters --||\n";
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(r1b8Name00.length() == 1) {
												cout << "----- " << r1b8Name00 << " ------";
											} else if(r1b8Name00.length() == 2) {
												cout << "----- " << r1b8Name00 << " -----";
											} else if(r1b8Name00.length() == 3) {
												cout << "---- " << r1b8Name00 << " -----";
											} else if(r1b8Name00.length() == 4) {
												cout << "---- " << r1b8Name00 << " ----";
											} else if(r1b8Name00.length() == 5) {
												cout << "--- " << r1b8Name00 << " ----";
											} else if(r1b8Name00.length() == 6) {
												cout << "--- " << r1b8Name00 << " ---";
											} else if(r1b8Name00.length() == 7) {
												cout << "-- " << r1b8Name00 << " ---";
											} else if(r1b8Name00.length() == 8) {
												cout << "-- " << r1b8Name00 << " --";
											} else if(r1b8Name00.length() == 9) {
												cout << "- " << r1b8Name00 << " --";
											} else if(r1b8Name00.length() == 10) {
												cout << "- " << r1b8Name00 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b8TotalHealth00 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8TotalHealth00 < 100 && r1b8TotalHealth00 >= 10) {
												cout << "00" << r1b8TotalHealth00;
											} else if(r1b8TotalHealth00 < 1000 && r1b8TotalHealth00 >= 100) {
												cout << "0" << r1b8TotalHealth00;
											} else {
												cout << r1b8TotalHealth00;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b8Name00.length() == 1) {
												cout << "----- " << r1b8Name00 << " ------";
											} else if(r1b8Name00.length() == 2) {
												cout << "----- " << r1b8Name00 << " -----";
											} else if(r1b8Name00.length() == 3) {
												cout << "---- " << r1b8Name00 << " -----";
											} else if(r1b8Name00.length() == 4) {
												cout << "---- " << r1b8Name00 << " ----";
											} else if(r1b8Name00.length() == 5) {
												cout << "--- " << r1b8Name00 << " ----";
											} else if(r1b8Name00.length() == 6) {
												cout << "--- " << r1b8Name00 << " ---";
											} else if(r1b8Name00.length() == 7) {
												cout << "-- " << r1b8Name00 << " ---";
											} else if(r1b8Name00.length() == 8) {
												cout << "-- " << r1b8Name00 << " --";
											} else if(r1b8Name00.length() == 9) {
												cout << "- " << r1b8Name00 << " --";
											} else if(r1b8Name00.length() == 10) {
												cout << "- " << r1b8Name00 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b8Attack00 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8Attack00 < 100 && r1b8Attack00 >= 10) {
												cout << "00" << r1b8Attack00;
											} else if(r1b8Attack00 < 1000 && r1b8Attack00 >= 100) {
												cout << "0" << r1b8Attack00;
											} else {
												cout << r1b8Attack00;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 1) {
											cout << "||";

											if(r1b8Name01.length() == 1) {
												cout << "----- " << r1b8Name01 << " ------";
											} else if(r1b8Name01.length() == 2) {
												cout << "----- " << r1b8Name01 << " -----";
											} else if(r1b8Name01.length() == 3) {
												cout << "---- " << r1b8Name01 << " -----";
											} else if(r1b8Name01.length() == 4) {
												cout << "---- " << r1b8Name01 << " ----";
											} else if(r1b8Name01.length() == 5) {
												cout << "--- " << r1b8Name01 << " ----";
											} else if(r1b8Name01.length() == 6) {
												cout << "--- " << r1b8Name01 << " ---";
											} else if(r1b8Name01.length() == 7) {
												cout << "-- " << r1b8Name01 << " ---";
											} else if(r1b8Name01.length() == 8) {
												cout << "-- " << r1b8Name01 << " --";
											} else if(r1b8Name01.length() == 9) {
												cout << "- " << r1b8Name01 << " --";
											} else if(r1b8Name01.length() == 10) {
												cout << "- " << r1b8Name01 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b8TotalHealth01 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8TotalHealth01 < 100 && r1b8TotalHealth01 >= 10) {
												cout << "00" << r1b8TotalHealth01;
											} else if(r1b8TotalHealth01 < 1000 && r1b8TotalHealth01 >= 100) {
												cout << "0" << r1b8TotalHealth01;
											} else {
												cout << r1b8TotalHealth01;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b8Name01.length() == 1) {
												cout << "----- " << r1b8Name01 << " ------";
											} else if(r1b8Name01.length() == 2) {
												cout << "----- " << r1b8Name01 << " -----";
											} else if(r1b8Name01.length() == 3) {
												cout << "---- " << r1b8Name01 << " -----";
											} else if(r1b8Name01.length() == 4) {
												cout << "---- " << r1b8Name01 << " ----";
											} else if(r1b8Name01.length() == 5) {
												cout << "--- " << r1b8Name01 << " ----";
											} else if(r1b8Name01.length() == 6) {
												cout << "--- " << r1b8Name01 << " ---";
											} else if(r1b8Name01.length() == 7) {
												cout << "-- " << r1b8Name01 << " ---";
											} else if(r1b8Name01.length() == 8) {
												cout << "-- " << r1b8Name01 << " --";
											} else if(r1b8Name01.length() == 9) {
												cout << "- " << r1b8Name01 << " --";
											} else if(r1b8Name01.length() == 10) {
												cout << "- " << r1b8Name01 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b8Attack01 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8Attack01 < 100 && r1b8Attack01 >= 10) {
												cout << "00" << r1b8Attack01;
											} else if(r1b8Attack01 < 1000 && r1b8Attack01 >= 100) {
												cout << "0" << r1b8Attack01;
											} else {
												cout << r1b8Attack01;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 2) {
											cout << "||";

											if(r1b8Name02.length() == 1) {
												cout << "----- " << r1b8Name02 << " ------";
											} else if(r1b8Name02.length() == 2) {
												cout << "----- " << r1b8Name02 << " -----";
											} else if(r1b8Name02.length() == 3) {
												cout << "---- " << r1b8Name02 << " -----";
											} else if(r1b8Name02.length() == 4) {
												cout << "---- " << r1b8Name02 << " ----";
											} else if(r1b8Name02.length() == 5) {
												cout << "--- " << r1b8Name02 << " ----";
											} else if(r1b8Name02.length() == 6) {
												cout << "--- " << r1b8Name02 << " ---";
											} else if(r1b8Name02.length() == 7) {
												cout << "-- " << r1b8Name02 << " ---";
											} else if(r1b8Name02.length() == 8) {
												cout << "-- " << r1b8Name02 << " --";
											} else if(r1b8Name02.length() == 9) {
												cout << "- " << r1b8Name02 << " --";
											} else if(r1b8Name02.length() == 10) {
												cout << "- " << r1b8Name02 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b8TotalHealth02 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8TotalHealth02 < 100 && r1b8TotalHealth02 >= 10) {
												cout << "00" << r1b8TotalHealth02;
											} else if(r1b8TotalHealth02 < 1000 && r1b8TotalHealth02 >= 100) {
												cout << "0" << r1b8TotalHealth02;
											} else {
												cout << r1b8TotalHealth02;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b8Name02.length() == 1) {
												cout << "----- " << r1b8Name02 << " ------";
											} else if(r1b8Name02.length() == 2) {
												cout << "----- " << r1b8Name02 << " -----";
											} else if(r1b8Name02.length() == 3) {
												cout << "---- " << r1b8Name02 << " -----";
											} else if(r1b8Name02.length() == 4) {
												cout << "---- " << r1b8Name02 << " ----";
											} else if(r1b8Name02.length() == 5) {
												cout << "--- " << r1b8Name02 << " ----";
											} else if(r1b8Name02.length() == 6) {
												cout << "--- " << r1b8Name02 << " ---";
											} else if(r1b8Name02.length() == 7) {
												cout << "-- " << r1b8Name02 << " ---";
											} else if(r1b8Name02.length() == 8) {
												cout << "-- " << r1b8Name02 << " --";
											} else if(r1b8Name02.length() == 9) {
												cout << "- " << r1b8Name02 << " --";
											} else if(r1b8Name02.length() == 10) {
												cout << "- " << r1b8Name02 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b8Attack02 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8Attack02 < 100 && r1b8Attack02 >= 10) {
												cout << "00" << r1b8Attack02;
											} else if(r1b8Attack02 < 1000 && r1b8Attack02 >= 100) {
												cout << "0" << r1b8Attack02;
											} else {
												cout << r1b8Attack02;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 3) {
											cout << "||";

											if(r1b8Name03.length() == 1) {
												cout << "----- " << r1b8Name03 << " ------";
											} else if(r1b8Name03.length() == 2) {
												cout << "----- " << r1b8Name03 << " -----";
											} else if(r1b8Name03.length() == 3) {
												cout << "---- " << r1b8Name03 << " -----";
											} else if(r1b8Name03.length() == 4) {
												cout << "---- " << r1b8Name03 << " ----";
											} else if(r1b8Name03.length() == 5) {
												cout << "--- " << r1b8Name03 << " ----";
											} else if(r1b8Name03.length() == 6) {
												cout << "--- " << r1b8Name03 << " ---";
											} else if(r1b8Name03.length() == 7) {
												cout << "-- " << r1b8Name03 << " ---";
											} else if(r1b8Name03.length() == 8) {
												cout << "-- " << r1b8Name03 << " --";
											} else if(r1b8Name03.length() == 9) {
												cout << "- " << r1b8Name03 << " --";
											} else if(r1b8Name03.length() == 10) {
												cout << "- " << r1b8Name03 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b8TotalHealth03 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8TotalHealth03 < 100 && r1b8TotalHealth03 >= 10) {
												cout << "00" << r1b8TotalHealth03;
											} else if(r1b8TotalHealth03 < 1000 && r1b8TotalHealth03 >= 100) {
												cout << "0" << r1b8TotalHealth03;
											} else {
												cout << r1b8TotalHealth03;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b8Name03.length() == 1) {
												cout << "----- " << r1b8Name03 << " ------";
											} else if(r1b8Name03.length() == 2) {
												cout << "----- " << r1b8Name03 << " -----";
											} else if(r1b8Name03.length() == 3) {
												cout << "---- " << r1b8Name03 << " -----";
											} else if(r1b8Name03.length() == 4) {
												cout << "---- " << r1b8Name03 << " ----";
											} else if(r1b8Name03.length() == 5) {
												cout << "--- " << r1b8Name03 << " ----";
											} else if(r1b8Name03.length() == 6) {
												cout << "--- " << r1b8Name03 << " ---";
											} else if(r1b8Name03.length() == 7) {
												cout << "-- " << r1b8Name03 << " ---";
											} else if(r1b8Name03.length() == 8) {
												cout << "-- " << r1b8Name03 << " --";
											} else if(r1b8Name03.length() == 9) {
												cout << "- " << r1b8Name03 << " --";
											} else if(r1b8Name03.length() == 10) {
												cout << "- " << r1b8Name03 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b8Attack03 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8Attack03 < 100 && r1b8Attack03 >= 10) {
												cout << "00" << r1b8Attack03;
											} else if(r1b8Attack03 < 1000 && r1b8Attack03 >= 100) {
												cout << "0" << r1b8Attack03;
											} else {
												cout << r1b8Attack03;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 4) {
											cout << "||";

											if(r1b8Name04.length() == 1) {
												cout << "----- " << r1b8Name04 << " ------";
											} else if(r1b8Name04.length() == 2) {
												cout << "----- " << r1b8Name04 << " -----";
											} else if(r1b8Name04.length() == 3) {
												cout << "---- " << r1b8Name04 << " -----";
											} else if(r1b8Name04.length() == 4) {
												cout << "---- " << r1b8Name04 << " ----";
											} else if(r1b8Name04.length() == 5) {
												cout << "--- " << r1b8Name04 << " ----";
											} else if(r1b8Name04.length() == 6) {
												cout << "--- " << r1b8Name04 << " ---";
											} else if(r1b8Name04.length() == 7) {
												cout << "-- " << r1b8Name04 << " ---";
											} else if(r1b8Name04.length() == 8) {
												cout << "-- " << r1b8Name04 << " --";
											} else if(r1b8Name04.length() == 9) {
												cout << "- " << r1b8Name04 << " --";
											} else if(r1b8Name04.length() == 10) {
												cout << "- " << r1b8Name04 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b8TotalHealth04 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8TotalHealth04 < 100 && r1b8TotalHealth04 >= 10) {
												cout << "00" << r1b8TotalHealth04;
											} else if(r1b8TotalHealth04 < 1000 && r1b8TotalHealth04 >= 100) {
												cout << "0" << r1b8TotalHealth04;
											} else {
												cout << r1b8TotalHealth04;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b8Name04.length() == 1) {
												cout << "----- " << r1b8Name04 << " ------";
											} else if(r1b8Name04.length() == 2) {
												cout << "----- " << r1b8Name04 << " -----";
											} else if(r1b8Name04.length() == 3) {
												cout << "---- " << r1b8Name04 << " -----";
											} else if(r1b8Name04.length() == 4) {
												cout << "---- " << r1b8Name04 << " ----";
											} else if(r1b8Name04.length() == 5) {
												cout << "--- " << r1b8Name04 << " ----";
											} else if(r1b8Name04.length() == 6) {
												cout << "--- " << r1b8Name04 << " ---";
											} else if(r1b8Name04.length() == 7) {
												cout << "-- " << r1b8Name04 << " ---";
											} else if(r1b8Name04.length() == 8) {
												cout << "-- " << r1b8Name04 << " --";
											} else if(r1b8Name04.length() == 9) {
												cout << "- " << r1b8Name04 << " --";
											} else if(r1b8Name04.length() == 10) {
												cout << "- " << r1b8Name04 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b8Attack04 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b8Attack04 < 100 && r1b8Attack04 >= 10) {
												cout << "00" << r1b8Attack04;
											} else if(r1b8Attack04 < 1000 && r1b8Attack04 >= 100) {
												cout << "0" << r1b8Attack04;
											} else {
												cout << r1b8Attack04;
											}

											cout << " -||\n";
										}

										cout << "||--------------------------------------------------------------||\n";
									}

									cout << spacer;

									cout << "|| [1] Battle\n";

									cout << spacer;

									cout << "|| [2] Return\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection < 1 || menuSelection > 2) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be between 1 and 2.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection >= 1 && menuSelection <= 2) {
											menuError = false;
										}
									}

									if(menuSelection == 1 && r1b8Active) {
										// Battle time

										// Acquire total health points for heroes and monsters

										// Heroes

										if(heroActive00) heroTotalHealth += heroTotalHealth00;
										if(heroActive01) heroTotalHealth += heroTotalHealth01;
										if(heroActive02) heroTotalHealth += heroTotalHealth02;
										if(heroActive03) heroTotalHealth += heroTotalHealth03;
										if(heroActive04) heroTotalHealth += heroTotalHealth04;
										heroCurrentHealth = heroTotalHealth;

										// Monsters

										if(r1b8Active00) monsterTotalHealth += r1b8TotalHealth00;
										if(r1b8Active01) monsterTotalHealth += r1b8TotalHealth01;
										if(r1b8Active02) monsterTotalHealth += r1b8TotalHealth02;
										if(r1b8Active03) monsterTotalHealth += r1b8TotalHealth03;
										if(r1b8Active04) monsterTotalHealth += r1b8TotalHealth04;
										monsterCurrentHealth = monsterTotalHealth;

										// Used for choosing random units from either side

										uniform_int_distribution<int> theHero(1, numHeroes);
										uniform_int_distribution<int> theMonster(1, r1b8Units);

										// Loop battle until we have a winner

										while(playing) {
											uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b8Units));

											// Store names of two units that will be attacking

											string heroName = "";
											int    heroAttack = 0;
											string monsterName = "";
											int    monsterAttack = 0;
											int    heroUnit = 0;
											int    monsterUnit = 0;

											// Obtain hero details. If unit is not active loop through
											// until we find one that is.

											while(playing) {
												heroUnit = theHero(randomGenerator);

												if(heroUnit == 1 && heroStatus00) {
													heroName = heroName00;
													heroAttack = heroAttack00;
													playing = false;
												} else if(heroUnit == 2 && heroStatus01) {
													heroName = heroName01;
													heroAttack = heroAttack01;
													playing = false;
												} else if(heroUnit == 3 && heroStatus02) {
													heroName = heroName02;
													heroAttack = heroAttack02;
													playing = false;
												} else if(heroUnit == 4 && heroStatus03) {
													heroName = heroName03;
													heroAttack = heroAttack03;
													playing = false;
												} else if(heroUnit == 5 && heroStatus04) {
													heroName = heroName04;
													heroAttack = heroAttack04;
													playing = false;
												}
											}

											playing = true;

											// Obtain monster details. If unit is not active loop through
											// until we find one that is.

											while(playing) {
												monsterUnit = theMonster(randomGenerator);

												if(monsterUnit == 1 && r1b8Status00) {
													monsterName = r1b8Name00;
													monsterAttack = r1b8Attack00;
													playing = false;
												} else if(monsterUnit == 2 && r1b8Status01) {
													monsterName = r1b8Name01;
													monsterAttack = r1b8Attack01;
													playing = false;
												} else if(monsterUnit == 3 && r1b8Status02) {
													monsterName = r1b8Name02;
													monsterAttack = r1b8Attack02;
													playing = false;
												} else if(monsterUnit == 4 && r1b8Status03) {
													monsterName = r1b8Name03;
													monsterAttack = r1b8Attack03;
													playing = false;
												} else if(monsterUnit == 5 && r1b8Status04) {
													monsterName = r1b8Name04;
													monsterAttack = r1b8Attack04;
													playing = false;
												}
											}

											playing = true;

											// Time to choose who's attacking

											// 'int variable' will hold the total amount of units (heroes + monsters).
											// Whichever side has the most units will have a greater chance of being
											// selected to attack.

											int variable = totalUnits(randomGenerator);
											int attackingSide = 0;

											if(variable > 0 && variable <= numHeroes) {
												attackingSide = 0;
											} else if(variable > numHeroes || variable <= (numHeroes + r1b8Units)) {
												attackingSide = 1;
											}

											if(attackingSide == 0) {
												// Heroes attacking

												if(monsterUnit == 1) {
													if(heroAttack >= r1b8CurrentHealth00) {
														heroAttack = r1b8CurrentHealth00;
													}

													r1b8CurrentHealth00 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b8CurrentHealth00 <= 0) {
														r1b8TotalHealth00 = 0;
														r1b8Attack00 = 0;
														r1b8Status00 = false;
														r1b8Units--;
													}
												} else if(monsterUnit == 2) {
													if(heroAttack >= r1b8CurrentHealth01) {
														heroAttack = r1b8CurrentHealth01;
													}

													r1b8CurrentHealth01 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b8CurrentHealth01 <= 0) {
														r1b8TotalHealth01 = 0;
														r1b8Attack01 = 0;
														r1b8Status01 = false;
														r1b8Units--;
													}
												} else if(monsterUnit == 3) {
													if(heroAttack >= r1b8CurrentHealth02) {
														heroAttack = r1b8CurrentHealth02;
													}

													r1b8CurrentHealth02 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b8CurrentHealth02 <= 0) {
														r1b8TotalHealth02 = 0;
														r1b8Attack02 = 0;
														r1b8Status02 = false;
														r1b8Units--;
													}
												} else if(monsterUnit == 4) {
													if(heroAttack >= r1b8CurrentHealth03) {
														heroAttack = r1b8CurrentHealth03;
													}

													r1b8CurrentHealth03 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b8CurrentHealth03 <= 0) {
														r1b8TotalHealth03 = 0;
														r1b8Attack03 = 0;
														r1b8Status03 = false;
														r1b8Units--;
													}
												} else if(monsterUnit == 5) {
													if(heroAttack >= r1b8CurrentHealth04) {
														heroAttack = r1b8CurrentHealth04;
													}

													r1b8CurrentHealth04 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b8CurrentHealth04 <= 0) {
														r1b8TotalHealth04 = 0;
														r1b8Attack04 = 0;
														r1b8Status04 = false;
														r1b8Units--;
													}
												}
											} else if(attackingSide == 1) {
												// Monsters attacking

												if(heroUnit == 1) {
													if(monsterAttack >= heroCurrentHealth00) {
														monsterAttack = heroCurrentHealth00;
													}

													heroCurrentHealth00 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth00 <= 0) {
														heroStatus00 = false;
														numHeroes--;
													}
												} else if(heroUnit == 2) {
													if(monsterAttack >= heroCurrentHealth01) {
														monsterAttack = heroCurrentHealth01;
													}

													heroCurrentHealth01 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth01 <= 0) {
														heroTotalHealth01 = 0;
														heroAttack01 = 0;
														heroStatus01 = false;
														numHeroes--;
													}
												} else if(heroUnit == 3) {
													if(monsterAttack >= heroCurrentHealth02) {
														monsterAttack = heroCurrentHealth02;
													}

													heroCurrentHealth02 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth02 <= 0) {
														heroTotalHealth02 = 0;
														heroAttack02 = 0;
														heroStatus02 = false;
														numHeroes--;
													}
												} else if(heroUnit == 4) {
													if(monsterAttack >= heroCurrentHealth03) {
														monsterAttack = heroCurrentHealth03;
													}

													heroCurrentHealth03 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth03 <= 0) {
														heroTotalHealth03 = 0;
														heroAttack03 = 0;
														heroStatus03 = false;
														numHeroes--;
													}
												} else if(heroUnit == 5) {
													if(monsterAttack >= heroCurrentHealth04) {
														monsterAttack = heroCurrentHealth04;
													}

													heroCurrentHealth04 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth04 <= 0) {
														heroTotalHealth04 = 0;
														heroAttack04 = 0;
														heroStatus04 = false;
														numHeroes--;
													}
												}
											}

											// Display battle results to user

											float hashCount = 0;
											float equalCount = 0;

											cout << "||-------------------------------- HEALTH -------------------------------||\n";
											cout << "||-----------------------------------------------------------------------||\n";
											cout << "||-- Heroes --||- ";

											hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
											equalCount = 43.00f - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount - 1; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroCurrentHealth >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
												cout << heroCurrentHealth;
											} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
												cout << "0" << heroCurrentHealth;
											} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
												cout << "00" << heroCurrentHealth;
											} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
												cout << "000" << heroCurrentHealth;
											} else {
												cout << "0000";
											}

											cout << " -||\n";

											cout << "||-----------------------------------------------------------------------||\n";
											cout << "||- Monsters -||- ";

											hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
											equalCount = 43.00f - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount - 1; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(monsterCurrentHealth >= 10000) {
												cout << "9999";
											} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
												cout << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
												cout << "0" << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
												cout << "00" << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
												cout << "000" << monsterCurrentHealth;
											} else {
												cout << "0000";
											}

											cout << " -||\n";
											cout << "||-----------------------------------------------------------------------||\n";

											cout << spacer;

											cout << spacer;


											if(attackingSide == 0) {
												cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
											} else if(attackingSide == 1) {
												cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
											}

											cout << spacer;

											cout << "||-------------- Heroes -------------||\n";
											cout << "||-----------------------------------||\n";

											if(heroActive00) {
												cout << "||";

												if(heroName00.length() == 1) {
													cout << "----- " << heroName00 << " ------";
												} else if(heroName00.length() == 2) {
													cout << "----- " << heroName00 << " -----";
												} else if(heroName00.length() == 3) {
													cout << "---- " << heroName00 << " -----";
												} else if(heroName00.length() == 4) {
													cout << "---- " << heroName00 << " ----";
												} else if(heroName00.length() == 5) {
													cout << "--- " << heroName00 << " ----";
												} else if(heroName00.length() == 6) {
													cout << "--- " << heroName00 << " ---";
												} else if(heroName00.length() == 7) {
													cout << "-- " << heroName00 << " ---";
												} else if(heroName00.length() == 8) {
													cout << "-- " << heroName00 << " --";
												} else if(heroName00.length() == 9) {
													cout << "- " << heroName00 << " --";
												} else if(heroName00.length() == 10) {
													cout << "- " << heroName00 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth00 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
													cout << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
													cout << "0" << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
													cout << "00" << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
													cout << "000" << heroCurrentHealth00;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus00) {
													cout << "- ALIVE -";
												} else if(!heroStatus00) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive01) {
												cout << "||";

												if(heroName01.length() == 1) {
													cout << "----- " << heroName01 << " ------";
												} else if(heroName01.length() == 2) {
													cout << "----- " << heroName01 << " -----";
												} else if(heroName01.length() == 3) {
													cout << "---- " << heroName01 << " -----";
												} else if(heroName01.length() == 4) {
													cout << "---- " << heroName01 << " ----";
												} else if(heroName01.length() == 5) {
													cout << "--- " << heroName01 << " ----";
												} else if(heroName01.length() == 6) {
													cout << "--- " << heroName01 << " ---";
												} else if(heroName01.length() == 7) {
													cout << "-- " << heroName01 << " ---";
												} else if(heroName01.length() == 8) {
													cout << "-- " << heroName01 << " --";
												} else if(heroName01.length() == 9) {
													cout << "- " << heroName01 << " --";
												} else if(heroName01.length() == 10) {
													cout << "- " << heroName01 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth01 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
													cout << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
													cout << "0" << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
													cout << "00" << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
													cout << "000" << heroCurrentHealth01;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus01) {
													cout << "- ALIVE -";
												} else if(!heroStatus01) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive02) {
												cout << "||";

												if(heroName02.length() == 1) {
													cout << "----- " << heroName02 << " ------";
												} else if(heroName02.length() == 2) {
													cout << "----- " << heroName02 << " -----";
												} else if(heroName02.length() == 3) {
													cout << "---- " << heroName02 << " -----";
												} else if(heroName02.length() == 4) {
													cout << "---- " << heroName02 << " ----";
												} else if(heroName02.length() == 5) {
													cout << "--- " << heroName02 << " ----";
												} else if(heroName02.length() == 6) {
													cout << "--- " << heroName02 << " ---";
												} else if(heroName02.length() == 7) {
													cout << "-- " << heroName02 << " ---";
												} else if(heroName02.length() == 8) {
													cout << "-- " << heroName02 << " --";
												} else if(heroName02.length() == 9) {
													cout << "- " << heroName02 << " --";
												} else if(heroName02.length() == 10) {
													cout << "- " << heroName02 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth02 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
													cout << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
													cout << "0" << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
													cout << "00" << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
													cout << "000" << heroCurrentHealth02;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus02) {
													cout << "- ALIVE -";
												} else if(!heroStatus02) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive03) {
												cout << "||";

												if(heroName03.length() == 1) {
													cout << "----- " << heroName03 << " ------";
												} else if(heroName03.length() == 2) {
													cout << "----- " << heroName03 << " -----";
												} else if(heroName03.length() == 3) {
													cout << "---- " << heroName03 << " -----";
												} else if(heroName03.length() == 4) {
													cout << "---- " << heroName03 << " ----";
												} else if(heroName03.length() == 5) {
													cout << "--- " << heroName03 << " ----";
												} else if(heroName03.length() == 6) {
													cout << "--- " << heroName03 << " ---";
												} else if(heroName03.length() == 7) {
													cout << "-- " << heroName03 << " ---";
												} else if(heroName03.length() == 8) {
													cout << "-- " << heroName03 << " --";
												} else if(heroName03.length() == 9) {
													cout << "- " << heroName03 << " --";
												} else if(heroName03.length() == 10) {
													cout << "- " << heroName03 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth03 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
													cout << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
													cout << "0" << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
													cout << "00" << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
													cout << "000" << heroCurrentHealth03;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus03) {
													cout << "- ALIVE -";
												} else if(!heroStatus03) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive04) {
												cout << "||";

												if(heroName04.length() == 1) {
													cout << "----- " << heroName04 << " ------";
												} else if(heroName04.length() == 2) {
													cout << "----- " << heroName04 << " -----";
												} else if(heroName04.length() == 3) {
													cout << "---- " << heroName04 << " -----";
												} else if(heroName04.length() == 4) {
													cout << "---- " << heroName04 << " ----";
												} else if(heroName04.length() == 5) {
													cout << "--- " << heroName04 << " ----";
												} else if(heroName04.length() == 6) {
													cout << "--- " << heroName04 << " ---";
												} else if(heroName04.length() == 7) {
													cout << "-- " << heroName04 << " ---";
												} else if(heroName04.length() == 8) {
													cout << "-- " << heroName04 << " --";
												} else if(heroName04.length() == 9) {
													cout << "- " << heroName04 << " --";
												} else if(heroName04.length() == 10) {
													cout << "- " << heroName04 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth04 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
													cout << heroCurrentHealth00;
												} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
													cout << "0" << heroCurrentHealth04;
												} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
													cout << "00" << heroCurrentHealth04;
												} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
													cout << "000" << heroCurrentHealth04;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus04) {
													cout << "- ALIVE -";
												} else if(!heroStatus04) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											cout << "||-----------------------------------||\n";

											cout << spacer;

											cout << "||------------- Monsters ------------||\n";
											cout << "||-----------------------------------||\n";

											if(r1b8Active00) {
												cout << "||";

												if(r1b8Name00.length() == 1) {
													cout << "----- " << r1b8Name00 << " ------";
												} else if(r1b8Name00.length() == 2) {
													cout << "----- " << r1b8Name00 << " -----";
												} else if(r1b8Name00.length() == 3) {
													cout << "---- " << r1b8Name00 << " -----";
												} else if(r1b8Name00.length() == 4) {
													cout << "---- " << r1b8Name00 << " ----";
												} else if(r1b8Name00.length() == 5) {
													cout << "--- " << r1b8Name00 << " ----";
												} else if(r1b8Name00.length() == 6) {
													cout << "--- " << r1b8Name00 << " ---";
												} else if(r1b8Name00.length() == 7) {
													cout << "-- " << r1b8Name00 << " ---";
												} else if(r1b8Name00.length() == 8) {
													cout << "-- " << r1b8Name00 << " --";
												} else if(r1b8Name00.length() == 9) {
													cout << "- " << r1b8Name00 << " --";
												} else if(r1b8Name00.length() == 10) {
													cout << "- " << r1b8Name00 << " -";
												}

												cout << "||- ";

												if(r1b8CurrentHealth00 >= 10000) {
													cout << "9999";
												} else if(r1b8CurrentHealth00 >= 1000 && r1b8CurrentHealth00 < 10000) {
													cout << r1b8CurrentHealth00;
												} else if(r1b8CurrentHealth00 >= 100 && r1b8CurrentHealth00 < 1000) {
													cout << "0" << r1b8CurrentHealth00;
												} else if(r1b8CurrentHealth00 >= 10 && r1b8CurrentHealth00 < 100) {
													cout << "00" << r1b8CurrentHealth00;
												} else if(r1b8CurrentHealth00 >= 1 && r1b8CurrentHealth00 < 10) {
													cout << "000" << r1b8CurrentHealth00;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b8Status00) {
													cout << "- ALIVE -";
												} else if(!r1b8Status00) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b8Active01) {
												cout << "||";

												if(r1b8Name01.length() == 1) {
													cout << "----- " << r1b8Name01 << " ------";
												} else if(r1b8Name01.length() == 2) {
													cout << "----- " << r1b8Name01 << " -----";
												} else if(r1b8Name01.length() == 3) {
													cout << "---- " << r1b8Name01 << " -----";
												} else if(r1b8Name01.length() == 4) {
													cout << "---- " << r1b8Name01 << " ----";
												} else if(r1b8Name01.length() == 5) {
													cout << "--- " << r1b8Name01 << " ----";
												} else if(r1b8Name01.length() == 6) {
													cout << "--- " << r1b8Name01 << " ---";
												} else if(r1b8Name01.length() == 7) {
													cout << "-- " << r1b8Name01 << " ---";
												} else if(r1b8Name01.length() == 8) {
													cout << "-- " << r1b8Name01 << " --";
												} else if(r1b8Name01.length() == 9) {
													cout << "- " << r1b8Name01 << " --";
												} else if(r1b8Name01.length() == 10) {
													cout << "- " << r1b8Name01 << " -";
												}

												cout << "||- ";

												if(r1b8CurrentHealth01 >= 10000) {
													cout << "9999";
												} else if(r1b8CurrentHealth01 >= 1000 && r1b8CurrentHealth01 < 10000) {
													cout << r1b8CurrentHealth01;
												} else if(r1b8CurrentHealth01 >= 100 && r1b8CurrentHealth01 < 1000) {
													cout << "0" << r1b8CurrentHealth01;
												} else if(r1b7CurrentHealth01 >= 10 && r1b8CurrentHealth01 < 100) {
													cout << "00" << r1b8CurrentHealth01;
												} else if(r1b8CurrentHealth01 >= 1 && r1b8CurrentHealth01 < 10) {
													cout << "000" << r1b8CurrentHealth01;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b8Status01) {
													cout << "- ALIVE -";
												} else if(!r1b8Status01) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b8Active02) {
												cout << "||";

												if(r1b8Name02.length() == 1) {
													cout << "----- " << r1b8Name02 << " ------";
												} else if(r1b8Name02.length() == 2) {
													cout << "----- " << r1b8Name02 << " -----";
												} else if(r1b8Name02.length() == 3) {
													cout << "---- " << r1b8Name02 << " -----";
												} else if(r1b8Name02.length() == 4) {
													cout << "---- " << r1b8Name02 << " ----";
												} else if(r1b8Name02.length() == 5) {
													cout << "--- " << r1b8Name02 << " ----";
												} else if(r1b8Name02.length() == 6) {
													cout << "--- " << r1b8Name02 << " ---";
												} else if(r1b8Name02.length() == 7) {
													cout << "-- " << r1b8Name02 << " ---";
												} else if(r1b8Name02.length() == 8) {
													cout << "-- " << r1b8Name02 << " --";
												} else if(r1b8Name02.length() == 9) {
													cout << "- " << r1b8Name02 << " --";
												} else if(r1b8Name02.length() == 10) {
													cout << "- " << r1b8Name02 << " -";
												}

												cout << "||- ";

												if(r1b8CurrentHealth02 >= 10000) {
													cout << "9999";
												} else if(r1b8CurrentHealth02 >= 1000 && r1b8CurrentHealth02 < 10000) {
													cout << r1b8CurrentHealth02;
												} else if(r1b8CurrentHealth02 >= 100 && r1b8CurrentHealth02 < 1000) {
													cout << "0" << r1b8CurrentHealth02;
												} else if(r1b8CurrentHealth02 >= 10 && r1b8CurrentHealth02 < 100) {
													cout << "00" << r1b8CurrentHealth02;
												} else if(r1b8CurrentHealth02 >= 1 && r1b8CurrentHealth02 < 10) {
													cout << "000" << r1b8CurrentHealth02;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b8Status02) {
													cout << "- ALIVE -";
												} else if(!r1b8Status02) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b8Active03) {
												cout << "||";

												if(r1b8Name03.length() == 1) {
													cout << "----- " << r1b8Name03 << " ------";
												} else if(r1b8Name03.length() == 2) {
													cout << "----- " << r1b8Name03 << " -----";
												} else if(r1b8Name03.length() == 3) {
													cout << "---- " << r1b8Name03 << " -----";
												} else if(r1b8Name03.length() == 4) {
													cout << "---- " << r1b8Name03 << " ----";
												} else if(r1b8Name03.length() == 5) {
													cout << "--- " << r1b8Name03 << " ----";
												} else if(r1b8Name03.length() == 6) {
													cout << "--- " << r1b8Name03 << " ---";
												} else if(r1b8Name03.length() == 7) {
													cout << "-- " << r1b8Name03 << " ---";
												} else if(r1b8Name03.length() == 8) {
													cout << "-- " << r1b8Name03 << " --";
												} else if(r1b8Name03.length() == 9) {
													cout << "- " << r1b8Name03 << " --";
												} else if(r1b8Name03.length() == 10) {
													cout << "- " << r1b8Name03 << " -";
												}

												cout << "||- ";

												if(r1b8CurrentHealth03 >= 10000) {
													cout << "9999";
												} else if(r1b8CurrentHealth03 >= 1000 && r1b8CurrentHealth03 < 10000) {
													cout << r1b8CurrentHealth03;
												} else if(r1b8CurrentHealth03 >= 100 && r1b8CurrentHealth03 < 1000) {
													cout << "0" << r1b8CurrentHealth03;
												} else if(r1b8CurrentHealth03 >= 10 && r1b8CurrentHealth03 < 100) {
													cout << "00" << r1b8CurrentHealth03;
												} else if(r1b8CurrentHealth03 >= 1 && r1b8CurrentHealth03 < 10) {
													cout << "000" << r1b8CurrentHealth03;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b8Status03) {
													cout << "- ALIVE -";
												} else if(!r1b8Status03) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b8Active04) {
												cout << "||";

												if(r1b8Name04.length() == 1) {
													cout << "----- " << r1b8Name04 << " ------";
												} else if(r1b8Name04.length() == 2) {
													cout << "----- " << r1b8Name04 << " -----";
												} else if(r1b8Name04.length() == 3) {
													cout << "---- " << r1b8Name04 << " -----";
												} else if(r1b8Name04.length() == 4) {
													cout << "---- " << r1b8Name04 << " ----";
												} else if(r1b8Name04.length() == 5) {
													cout << "--- " << r1b8Name04 << " ----";
												} else if(r1b8Name04.length() == 6) {
													cout << "--- " << r1b8Name04 << " ---";
												} else if(r1b8Name04.length() == 7) {
													cout << "-- " << r1b8Name04 << " ---";
												} else if(r1b8Name04.length() == 8) {
													cout << "-- " << r1b8Name04 << " --";
												} else if(r1b8Name04.length() == 9) {
													cout << "- " << r1b8Name04 << " --";
												} else if(r1b8Name04.length() == 10) {
													cout << "- " << r1b8Name04 << " -";
												}

												cout << "||- ";

												if(r1b8CurrentHealth04 >= 10000) {
													cout << "9999";
												} else if(r1b8CurrentHealth04 >= 1000 && r1b8CurrentHealth04 < 10000) {
													cout << r1b8CurrentHealth04;
												} else if(r1b8CurrentHealth04 >= 100 && r1b8CurrentHealth04 < 1000) {
													cout << "0" << r1b8CurrentHealth04;
												} else if(r1b8CurrentHealth04 >= 10 && r1b8CurrentHealth04 < 100) {
													cout << "00" << r1b8CurrentHealth04;
												} else if(r1b8CurrentHealth04 >= 1 && r1b8CurrentHealth04 < 10) {
													cout << "000" << r1b8CurrentHealth04;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b8Status04) {
													cout << "- ALIVE -";
												} else if(!r1b8Status04) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											cout << "||-----------------------------------||\n";

											cout << spacer;

											// Crappy timer to slow loop

											int num1 = 0;
											int num2 = 0;

											while(playing) {
												num1++;

												if(num1 >= 100000) {
													num2++;
													num1 = 0;
												}

												if(num2 >= 10000) {
													num1 = 0;
													num2 = 0;
													playing = false;
												}
											}

											playing = true;

											if(numHeroes <= 0 || r1b8Units <= 0) {
												playing = false;
											}
										}

										playing = true;

										// Update logic

										bool win = false;
										int losses = 0;
										int kills = 0;
										int population = 0;
										int currency = 0;

										if(numHeroes <= 0 && r1b8Units > 0) {
											win = false;
											conquestDefeats++;

											uniform_int_distribution<int> killed(5, (r1b8Units * 10));

											population = killed(randomGenerator);

											populationAlive -= population;
											populationDead += population;

											currency = (r1b8CurrentHealth00 + r1b8CurrentHealth01 + r1b8CurrentHealth02 + r1b8CurrentHealth03 + r1b8CurrentHealth04) * r1b8Units;

											lostCredits += currency;

											if((currentCredits - currency) <= 0) {
												currentCredits = 0;
											} else {
												currentCredits -= currency;
											}

										} else if(numHeroes > 0 && r1b8Units <= 0) {
											win = true;

											r1b8Active = false;
											r1b9Active = true;

											conquestWins++;

											currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

											wonCredits += currency;
											currentCredits += wonCredits;
										}

										if(!heroStatus00 && heroActive00) {
											heroCurrentHealth00 = heroTotalHealth00;
											heroStatus00 = true;
											numHeroes++;
										} else {
											heroCurrentHealth00 = heroTotalHealth00;
											heroStatus00 = true;
										}

										if(!heroStatus01 && heroActive01) {
											heroTotalHealth01 = 0;
											heroCurrentHealth01 = heroTotalHealth01;
											heroAttack01 = 0;
											heroActive01 = false;
											losses++;
										} else {
											heroCurrentHealth01 = heroTotalHealth01;
											heroStatus01 = true;
										}

										if(!heroStatus02 && heroActive02) {
											heroTotalHealth02 = 0;
											heroCurrentHealth02 = heroTotalHealth02;
											heroAttack02 = 0;
											heroActive02 = false;
											losses++;
										} else {
											heroCurrentHealth02 = heroTotalHealth02;
											heroStatus02 = true;
										}

										if(!heroStatus03 && heroActive03) {
											heroTotalHealth03 = 0;
											heroCurrentHealth03 = heroTotalHealth;
											heroAttack03 = 0;
											heroActive03 = false;
											losses++;
										} else {
											heroCurrentHealth03 = heroTotalHealth03;
											heroStatus03 = true;
										}

										if(!heroStatus04 && heroActive04) {
											heroTotalHealth04 = 0;
											heroCurrentHealth04 = heroTotalHealth04;
											heroAttack04 = 0;
											heroActive04 = false;
											losses++;
										} else {
											heroCurrentHealth04 = heroTotalHealth04;
											heroStatus04 = true;
										}

										if(!r1b8Status00 && r1b8Active00) {
											r1b8TotalHealth00 = 0;
											r1b8CurrentHealth00 = r1b8TotalHealth00;
											r1b8Attack00 = 0;
											r1b8Active = false;
											kills++;
										} else {
											r1b8CurrentHealth00 = r1b8TotalHealth00;
											r1b8Status00 = true;
										}

										if(!r1b8Status01 && r1b8Active01) {
											r1b8TotalHealth01 = 0;
											r1b8CurrentHealth01 = r1b8TotalHealth01;
											r1b8Attack01 = 0;
											r1b8Active = false;
											kills++;
										} else {
											r1b8CurrentHealth01 = r1b8TotalHealth01;
											r1b8Status01 = true;
										}

										if(!r1b8Status02 && r1b8Active02) {
											r1b8TotalHealth02 = 0;
											r1b8CurrentHealth02 = r1b8TotalHealth02;
											r1b8Attack02 = 0;
											r1b8Active = false;
											kills++;
										} else {
											r1b8CurrentHealth02 = r1b8TotalHealth02;
											r1b8Status02 = true;
										}

										if(!r1b8Status03 && r1b8Active03) {
											r1b8TotalHealth03 = 0;
											r1b8CurrentHealth03 = r1b8TotalHealth03;
											r1b8Attack03 = 0;
											r1b8Active = false;
											kills++;
										} else {
											r1b8CurrentHealth03 = r1b8TotalHealth03;
											r1b8Status03 = true;
										}

										if(!r1b8Status04 && r1b8Active04) {
											r1b8TotalHealth04 = 0;
											r1b8CurrentHealth04 = r1b8TotalHealth04;
											r1b8Attack04 = 0;
											r1b8Active = false;
											kills++;
										} else {
											r1b8CurrentHealth04 = r1b8TotalHealth04;
											r1b8Status00 = true;
										}

										deadHeroes += losses;
										enemiesKilled += kills;

										// Display end results to user

										cout << border;
										cout << "||-------------------------- Battle Results -----------------------------||\n";
										cout << border;

										cout << spacer;

										cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

										cout << spacer;

										if(win) {
											cout << "||- After a long and exhausting battle you come out victorious. You\n";
											cout << "||- have successfully destroyed the base and all monsters within it.\n";
											cout << "||- It's now time to take whatever loot is available and continue \n";
											cout << "||- onto the next base.\n";

											cout << spacer;

											cout << "||- Credits won:       " << currency << "\n";
										} else if(!win) {
											cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
											cout << "||- at the hands of the monsters. ";

											if(numHeroes > 1) {
												cout << "You and your recruited heroes\n";
												cout << "||- fought bravely but proved no match for the base.\n";
											} else {
												cout << "You fought bravely on your own but\n";
												cout << "||- proved no match for the base.\n";
											}
											cout << spacer;

											cout << "||- Defeated there is little that stands in the way of the monsters as\n";
											cout << "||- they lay slaughter to the population.\n";

											cout << spacer;

											cout << "||- Credits lost:      " << currency << "\n";
										}

										cout << spacer;

										cout << "||- Heroes killed:     " << losses << "\n";
										cout << "||- Enemies killed:    " << kills << "\n";
										cout << "||- Population killed: " << population << "\n";

										cout << spacer;

										cout << "|| [1] Continue\n";

										cout << spacer;

										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection != 1) {
											menuError = true;
										}

										while(menuError) {
											cout << spacer;
											cout << "|| " << error << "Number must be 1.\n";
											cout << spacer;
											cout << "|| Please enter a number: ";
											cin >> menuSelection;

											if(menuSelection == 1) {
												menuError = false;
											}
										}

									}
								}
							} else if(menuSelection == 9 && r1b9Active) {
								// Base 9

								{
									cout << border;
									cout << "||------------------------------ Base 9 ---------------------------------||\n";
									cout << border;
									cout << spacer;

									cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

									cout << spacer;

									// Create a for loop to loop through each hero and display it
									// to the player

									for(int i = 0; i < numHeroes; i++) {

										// This variable will be used to store the heros health and attack bars

										int hashCount = 0;
										int equalCount = 0;

										if(i == 0) {
											cout << "||--- Heroes ---||\n";
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth00 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
												cout << "00" << heroTotalHealth00;
											} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
												cout << "0" << heroTotalHealth00;
											} else {
												cout << heroTotalHealth00;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName00.length() == 1) {
												cout << "----- " << heroName00 << " ------";
											} else if(heroName00.length() == 2) {
												cout << "----- " << heroName00 << " -----";
											} else if(heroName00.length() == 3) {
												cout << "---- " << heroName00 << " -----";
											} else if(heroName00.length() == 4) {
												cout << "---- " << heroName00 << " ----";
											} else if(heroName00.length() == 5) {
												cout << "--- " << heroName00 << " ----";
											} else if(heroName00.length() == 6) {
												cout << "--- " << heroName00 << " ---";
											} else if(heroName00.length() == 7) {
												cout << "-- " << heroName00 << " ---";
											} else if(heroName00.length() == 8) {
												cout << "-- " << heroName00 << " --";
											} else if(heroName00.length() == 9) {
												cout << "- " << heroName00 << " --";
											} else if(heroName00.length() == 10) {
												cout << "- " << heroName00 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack00 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack00 < 100 && heroAttack00 >= 10) {
												cout << "00" << heroAttack00;
											} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
												cout << "0" << heroAttack00;
											} else {
												cout << heroAttack00;
											}

											cout << " -||\n";
										} else if(i == 1) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth01 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
												cout << "00" << heroTotalHealth01;
											} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
												cout << "0" << heroTotalHealth01;
											} else {
												cout << heroTotalHealth01;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName01.length() == 1) {
												cout << "----- " << heroName01 << " ------";
											} else if(heroName01.length() == 2) {
												cout << "----- " << heroName01 << " -----";
											} else if(heroName01.length() == 3) {
												cout << "---- " << heroName01 << " -----";
											} else if(heroName01.length() == 4) {
												cout << "---- " << heroName01 << " ----";
											} else if(heroName01.length() == 5) {
												cout << "--- " << heroName01 << " ----";
											} else if(heroName01.length() == 6) {
												cout << "--- " << heroName01 << " ---";
											} else if(heroName01.length() == 7) {
												cout << "-- " << heroName01 << " ---";
											} else if(heroName01.length() == 8) {
												cout << "-- " << heroName01 << " --";
											} else if(heroName01.length() == 9) {
												cout << "- " << heroName01 << " --";
											} else if(heroName01.length() == 10) {
												cout << "- " << heroName01 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack01 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack01 < 100 && heroAttack01 >= 10) {
												cout << "00" << heroAttack01;
											} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
												cout << "0" << heroAttack01;
											} else {
												cout << heroAttack01;
											}

											cout << " -||\n";
										} else if(i == 2) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth02 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
												cout << "00" << heroTotalHealth02;
											} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
												cout << "0" << heroTotalHealth02;
											} else {
												cout << heroTotalHealth02;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName02.length() == 1) {
												cout << "----- " << heroName02 << " ------";
											} else if(heroName02.length() == 2) {
												cout << "----- " << heroName02 << " -----";
											} else if(heroName02.length() == 3) {
												cout << "---- " << heroName02 << " -----";
											} else if(heroName02.length() == 4) {
												cout << "---- " << heroName02 << " ----";
											} else if(heroName02.length() == 5) {
												cout << "--- " << heroName02 << " ----";
											} else if(heroName02.length() == 6) {
												cout << "--- " << heroName02 << " ---";
											} else if(heroName02.length() == 7) {
												cout << "-- " << heroName02 << " ---";
											} else if(heroName02.length() == 8) {
												cout << "-- " << heroName02 << " --";
											} else if(heroName02.length() == 9) {
												cout << "- " << heroName02 << " --";
											} else if(heroName02.length() == 10) {
												cout << "- " << heroName02 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack02 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack02 < 100 && heroAttack02 >= 10) {
												cout << "00" << heroAttack02;
											} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
												cout << "0" << heroAttack02;
											} else {
												cout << heroAttack02;
											}

											cout << " -||\n";
										} else if(i == 3) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth03 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
												cout << "00" << heroTotalHealth03;
											} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
												cout << "0" << heroTotalHealth03;
											} else {
												cout << heroTotalHealth03;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName03.length() == 1) {
												cout << "----- " << heroName03 << " ------";
											} else if(heroName03.length() == 2) {
												cout << "----- " << heroName03 << " -----";
											} else if(heroName03.length() == 3) {
												cout << "---- " << heroName03 << " -----";
											} else if(heroName03.length() == 4) {
												cout << "---- " << heroName03 << " ----";
											} else if(heroName03.length() == 5) {
												cout << "--- " << heroName03 << " ----";
											} else if(heroName03.length() == 6) {
												cout << "--- " << heroName03 << " ---";
											} else if(heroName03.length() == 7) {
												cout << "-- " << heroName03 << " ---";
											} else if(heroName03.length() == 8) {
												cout << "-- " << heroName03 << " --";
											} else if(heroName03.length() == 9) {
												cout << "- " << heroName03 << " --";
											} else if(heroName03.length() == 10) {
												cout << "- " << heroName03 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack03 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack03 < 100 && heroAttack03 >= 10) {
												cout << "00" << heroAttack03;
											} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
												cout << "0" << heroAttack03;
											} else {
												cout << heroAttack03;
											}

											cout << " -||\n";
										} else if(i == 4) {
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = heroTotalHealth04 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
												cout << "00" << heroTotalHealth04;
											} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
												cout << "0" << heroTotalHealth04;
											} else {
												cout << heroTotalHealth04;
											}

											cout << " -||\n";

											cout << "||";

											if(heroName04.length() == 1) {
												cout << "----- " << heroName04 << " ------";
											} else if(heroName04.length() == 2) {
												cout << "----- " << heroName04 << " -----";
											} else if(heroName04.length() == 3) {
												cout << "---- " << heroName04 << " -----";
											} else if(heroName04.length() == 4) {
												cout << "---- " << heroName04 << " ----";
											} else if(heroName04.length() == 5) {
												cout << "--- " << heroName04 << " ----";
											} else if(heroName04.length() == 6) {
												cout << "--- " << heroName04 << " ---";
											} else if(heroName04.length() == 7) {
												cout << "-- " << heroName04 << " ---";
											} else if(heroName04.length() == 8) {
												cout << "-- " << heroName04 << " --";
											} else if(heroName04.length() == 9) {
												cout << "- " << heroName04 << " --";
											} else if(heroName04.length() == 10) {
												cout << "- " << heroName04 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = heroAttack04 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroAttack04 < 100 && heroAttack04 >= 10) {
												cout << "00" << heroAttack04;
											} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
												cout << "0" << heroAttack04;
											} else {
												cout << heroAttack04;
											}

											cout << " -||\n";
										}

										cout << "||--------------------------------------------------------------||\n";
									}

									cout << spacer;

									// Display monsters to player

									if(!r1b9Counted) {
										if(r1b9Active00) r1b9Units++;
										if(r1b9Active01) r1b9Units++;
										if(r1b9Active02) r1b9Units++;
										if(r1b9Active03) r1b9Units++;
										if(r1b9Active04) r1b9Units++;

										r1b9Counted = true;
									}

									for(int i = 0; i < r1b9Units; i++) {

										int hashCount = 0;
										int equalCount = 0;

										if(i == 0) {
											cout << "||-- Monsters --||\n";
											cout << "||--------------------------------------------------------------||\n";

											cout << "||";

											if(r1b9Name00.length() == 1) {
												cout << "----- " << r1b9Name00 << " ------";
											} else if(r1b9Name00.length() == 2) {
												cout << "----- " << r1b9Name00 << " -----";
											} else if(r1b9Name00.length() == 3) {
												cout << "---- " << r1b9Name00 << " -----";
											} else if(r1b9Name00.length() == 4) {
												cout << "---- " << r1b9Name00 << " ----";
											} else if(r1b9Name00.length() == 5) {
												cout << "--- " << r1b9Name00 << " ----";
											} else if(r1b9Name00.length() == 6) {
												cout << "--- " << r1b9Name00 << " ---";
											} else if(r1b9Name00.length() == 7) {
												cout << "-- " << r1b9Name00 << " ---";
											} else if(r1b9Name00.length() == 8) {
												cout << "-- " << r1b9Name00 << " --";
											} else if(r1b9Name00.length() == 9) {
												cout << "- " << r1b9Name00 << " --";
											} else if(r1b9Name00.length() == 10) {
												cout << "- " << r1b9Name00 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b9TotalHealth00 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9TotalHealth00 < 100 && r1b9TotalHealth00 >= 10) {
												cout << "00" << r1b9TotalHealth00;
											} else if(r1b9TotalHealth00 < 1000 && r1b9TotalHealth00 >= 100) {
												cout << "0" << r1b9TotalHealth00;
											} else {
												cout << r1b9TotalHealth00;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b9Name00.length() == 1) {
												cout << "----- " << r1b9Name00 << " ------";
											} else if(r1b9Name00.length() == 2) {
												cout << "----- " << r1b9Name00 << " -----";
											} else if(r1b9Name00.length() == 3) {
												cout << "---- " << r1b9Name00 << " -----";
											} else if(r1b9Name00.length() == 4) {
												cout << "---- " << r1b9Name00 << " ----";
											} else if(r1b9Name00.length() == 5) {
												cout << "--- " << r1b9Name00 << " ----";
											} else if(r1b9Name00.length() == 6) {
												cout << "--- " << r1b9Name00 << " ---";
											} else if(r1b9Name00.length() == 7) {
												cout << "-- " << r1b9Name00 << " ---";
											} else if(r1b9Name00.length() == 8) {
												cout << "-- " << r1b9Name00 << " --";
											} else if(r1b9Name00.length() == 9) {
												cout << "- " << r1b9Name00 << " --";
											} else if(r1b9Name00.length() == 10) {
												cout << "- " << r1b9Name00 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b9Attack00 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9Attack00 < 100 && r1b9Attack00 >= 10) {
												cout << "00" << r1b9Attack00;
											} else if(r1b9Attack00 < 1000 && r1b9Attack00 >= 100) {
												cout << "0" << r1b9Attack00;
											} else {
												cout << r1b9Attack00;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 1) {
											cout << "||";

											if(r1b9Name01.length() == 1) {
												cout << "----- " << r1b9Name01 << " ------";
											} else if(r1b9Name01.length() == 2) {
												cout << "----- " << r1b9Name01 << " -----";
											} else if(r1b9Name01.length() == 3) {
												cout << "---- " << r1b9Name01 << " -----";
											} else if(r1b9Name01.length() == 4) {
												cout << "---- " << r1b9Name01 << " ----";
											} else if(r1b9Name01.length() == 5) {
												cout << "--- " << r1b9Name01 << " ----";
											} else if(r1b9Name01.length() == 6) {
												cout << "--- " << r1b9Name01 << " ---";
											} else if(r1b9Name01.length() == 7) {
												cout << "-- " << r1b9Name01 << " ---";
											} else if(r1b9Name01.length() == 8) {
												cout << "-- " << r1b9Name01 << " --";
											} else if(r1b9Name01.length() == 9) {
												cout << "- " << r1b9Name01 << " --";
											} else if(r1b9Name01.length() == 10) {
												cout << "- " << r1b9Name01 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b9TotalHealth01 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9TotalHealth01 < 100 && r1b9TotalHealth01 >= 10) {
												cout << "00" << r1b9TotalHealth01;
											} else if(r1b9TotalHealth01 < 1000 && r1b9TotalHealth01 >= 100) {
												cout << "0" << r1b9TotalHealth01;
											} else {
												cout << r1b9TotalHealth01;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b9Name01.length() == 1) {
												cout << "----- " << r1b9Name01 << " ------";
											} else if(r1b9Name01.length() == 2) {
												cout << "----- " << r1b9Name01 << " -----";
											} else if(r1b9Name01.length() == 3) {
												cout << "---- " << r1b9Name01 << " -----";
											} else if(r1b9Name01.length() == 4) {
												cout << "---- " << r1b9Name01 << " ----";
											} else if(r1b9Name01.length() == 5) {
												cout << "--- " << r1b9Name01 << " ----";
											} else if(r1b9Name01.length() == 6) {
												cout << "--- " << r1b9Name01 << " ---";
											} else if(r1b9Name01.length() == 7) {
												cout << "-- " << r1b9Name01 << " ---";
											} else if(r1b9Name01.length() == 8) {
												cout << "-- " << r1b9Name01 << " --";
											} else if(r1b9Name01.length() == 9) {
												cout << "- " << r1b9Name01 << " --";
											} else if(r1b9Name01.length() == 10) {
												cout << "- " << r1b9Name01 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b9Attack01 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9Attack01 < 100 && r1b9Attack01 >= 10) {
												cout << "00" << r1b9Attack01;
											} else if(r1b9Attack01 < 1000 && r1b9Attack01 >= 100) {
												cout << "0" << r1b9Attack01;
											} else {
												cout << r1b9Attack01;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 2) {
											cout << "||";

											if(r1b9Name02.length() == 1) {
												cout << "----- " << r1b9Name02 << " ------";
											} else if(r1b9Name02.length() == 2) {
												cout << "----- " << r1b9Name02 << " -----";
											} else if(r1b9Name02.length() == 3) {
												cout << "---- " << r1b9Name02 << " -----";
											} else if(r1b9Name02.length() == 4) {
												cout << "---- " << r1b9Name02 << " ----";
											} else if(r1b9Name02.length() == 5) {
												cout << "--- " << r1b9Name02 << " ----";
											} else if(r1b9Name02.length() == 6) {
												cout << "--- " << r1b9Name02 << " ---";
											} else if(r1b9Name02.length() == 7) {
												cout << "-- " << r1b9Name02 << " ---";
											} else if(r1b9Name02.length() == 8) {
												cout << "-- " << r1b9Name02 << " --";
											} else if(r1b9Name02.length() == 9) {
												cout << "- " << r1b9Name02 << " --";
											} else if(r1b9Name02.length() == 10) {
												cout << "- " << r1b9Name02 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b9TotalHealth02 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9TotalHealth02 < 100 && r1b9TotalHealth02 >= 10) {
												cout << "00" << r1b9TotalHealth02;
											} else if(r1b9TotalHealth02 < 1000 && r1b9TotalHealth02 >= 100) {
												cout << "0" << r1b9TotalHealth02;
											} else {
												cout << r1b9TotalHealth02;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b9Name02.length() == 1) {
												cout << "----- " << r1b9Name02 << " ------";
											} else if(r1b9Name02.length() == 2) {
												cout << "----- " << r1b9Name02 << " -----";
											} else if(r1b9Name02.length() == 3) {
												cout << "---- " << r1b9Name02 << " -----";
											} else if(r1b9Name02.length() == 4) {
												cout << "---- " << r1b9Name02 << " ----";
											} else if(r1b9Name02.length() == 5) {
												cout << "--- " << r1b9Name02 << " ----";
											} else if(r1b9Name02.length() == 6) {
												cout << "--- " << r1b9Name02 << " ---";
											} else if(r1b9Name02.length() == 7) {
												cout << "-- " << r1b9Name02 << " ---";
											} else if(r1b9Name02.length() == 8) {
												cout << "-- " << r1b9Name02 << " --";
											} else if(r1b9Name02.length() == 9) {
												cout << "- " << r1b9Name02 << " --";
											} else if(r1b9Name02.length() == 10) {
												cout << "- " << r1b9Name02 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b9Attack02 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9Attack02 < 100 && r1b9Attack02 >= 10) {
												cout << "00" << r1b9Attack02;
											} else if(r1b9Attack02 < 1000 && r1b9Attack02 >= 100) {
												cout << "0" << r1b9Attack02;
											} else {
												cout << r1b9Attack02;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 3) {
											cout << "||";

											if(r1b9Name03.length() == 1) {
												cout << "----- " << r1b9Name03 << " ------";
											} else if(r1b9Name03.length() == 2) {
												cout << "----- " << r1b9Name03 << " -----";
											} else if(r1b9Name03.length() == 3) {
												cout << "---- " << r1b9Name03 << " -----";
											} else if(r1b9Name03.length() == 4) {
												cout << "---- " << r1b9Name03 << " ----";
											} else if(r1b9Name03.length() == 5) {
												cout << "--- " << r1b9Name03 << " ----";
											} else if(r1b9Name03.length() == 6) {
												cout << "--- " << r1b9Name03 << " ---";
											} else if(r1b9Name03.length() == 7) {
												cout << "-- " << r1b9Name03 << " ---";
											} else if(r1b9Name03.length() == 8) {
												cout << "-- " << r1b9Name03 << " --";
											} else if(r1b9Name03.length() == 9) {
												cout << "- " << r1b9Name03 << " --";
											} else if(r1b9Name03.length() == 10) {
												cout << "- " << r1b9Name03 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b9TotalHealth03 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9TotalHealth03 < 100 && r1b9TotalHealth03 >= 10) {
												cout << "00" << r1b9TotalHealth03;
											} else if(r1b9TotalHealth03 < 1000 && r1b9TotalHealth03 >= 100) {
												cout << "0" << r1b9TotalHealth03;
											} else {
												cout << r1b9TotalHealth03;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b9Name03.length() == 1) {
												cout << "----- " << r1b9Name03 << " ------";
											} else if(r1b9Name03.length() == 2) {
												cout << "----- " << r1b9Name03 << " -----";
											} else if(r1b9Name03.length() == 3) {
												cout << "---- " << r1b9Name03 << " -----";
											} else if(r1b9Name03.length() == 4) {
												cout << "---- " << r1b9Name03 << " ----";
											} else if(r1b9Name03.length() == 5) {
												cout << "--- " << r1b9Name03 << " ----";
											} else if(r1b9Name03.length() == 6) {
												cout << "--- " << r1b9Name03 << " ---";
											} else if(r1b9Name03.length() == 7) {
												cout << "-- " << r1b9Name03 << " ---";
											} else if(r1b9Name03.length() == 8) {
												cout << "-- " << r1b9Name03 << " --";
											} else if(r1b9Name03.length() == 9) {
												cout << "- " << r1b9Name03 << " --";
											} else if(r1b9Name03.length() == 10) {
												cout << "- " << r1b9Name03 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b9Attack03 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9Attack03 < 100 && r1b9Attack03 >= 10) {
												cout << "00" << r1b9Attack03;
											} else if(r1b9Attack03 < 1000 && r1b9Attack03 >= 100) {
												cout << "0" << r1b9Attack03;
											} else {
												cout << r1b9Attack03;
											}

											cout << " -||\n";

											cout << "||--------------------------------------------------------------||\n";
										} else if(i == 4) {
											cout << "||";

											if(r1b9Name04.length() == 1) {
												cout << "----- " << r1b9Name04 << " ------";
											} else if(r1b9Name04.length() == 2) {
												cout << "----- " << r1b9Name04 << " -----";
											} else if(r1b9Name04.length() == 3) {
												cout << "---- " << r1b9Name04 << " -----";
											} else if(r1b9Name04.length() == 4) {
												cout << "---- " << r1b9Name04 << " ----";
											} else if(r1b9Name04.length() == 5) {
												cout << "--- " << r1b9Name04 << " ----";
											} else if(r1b9Name04.length() == 6) {
												cout << "--- " << r1b9Name04 << " ---";
											} else if(r1b9Name04.length() == 7) {
												cout << "-- " << r1b9Name04 << " ---";
											} else if(r1b9Name04.length() == 8) {
												cout << "-- " << r1b9Name04 << " --";
											} else if(r1b9Name04.length() == 9) {
												cout << "- " << r1b9Name04 << " --";
											} else if(r1b9Name04.length() == 10) {
												cout << "- " << r1b9Name04 << " -";
											}

											cout << "||- Health -||- ";

											// Just some calculations

											hashCount = r1b9TotalHealth04 / 50;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9TotalHealth04 < 100 && r1b9TotalHealth04 >= 10) {
												cout << "00" << r1b9TotalHealth04;
											} else if(r1b9TotalHealth04 < 1000 && r1b9TotalHealth04 >= 100) {
												cout << "0" << r1b9TotalHealth04;
											} else {
												cout << r1b9TotalHealth04;
											}

											cout << " -||\n";

											cout << "||";

											if(r1b9Name04.length() == 1) {
												cout << "----- " << r1b9Name04 << " ------";
											} else if(r1b9Name04.length() == 2) {
												cout << "----- " << r1b9Name04 << " -----";
											} else if(r1b9Name04.length() == 3) {
												cout << "---- " << r1b9Name04 << " -----";
											} else if(r1b9Name04.length() == 4) {
												cout << "---- " << r1b9Name04 << " ----";
											} else if(r1b9Name04.length() == 5) {
												cout << "--- " << r1b9Name04 << " ----";
											} else if(r1b9Name04.length() == 6) {
												cout << "--- " << r1b9Name04 << " ---";
											} else if(r1b9Name04.length() == 7) {
												cout << "-- " << r1b9Name04 << " ---";
											} else if(r1b9Name04.length() == 8) {
												cout << "-- " << r1b9Name04 << " --";
											} else if(r1b9Name04.length() == 9) {
												cout << "- " << r1b9Name04 << " --";
											} else if(r1b9Name04.length() == 10) {
												cout << "- " << r1b9Name04 << " -";
											}

											cout << "||- Attack -||- ";

											// Just some calculations

											hashCount = r1b9Attack04 / 10;
											equalCount = 20 - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(r1b9Attack04 < 100 && r1b9Attack04 >= 10) {
												cout << "00" << r1b9Attack04;
											} else if(r1b9Attack04 < 1000 && r1b9Attack04 >= 100) {
												cout << "0" << r1b9Attack04;
											} else {
												cout << r1b9Attack04;
											}

											cout << " -||\n";
										}

										cout << "||--------------------------------------------------------------||\n";
									}

									cout << spacer;

									cout << "|| [1] Battle\n";

									cout << spacer;

									cout << "|| [2] Return\n";

									cout << spacer;

									cout << "|| Please enter a number: ";
									cin >> menuSelection;

									if(menuSelection < 1 || menuSelection > 2) {
										menuError = true;
									}

									while(menuError) {
										cout << spacer;
										cout << "|| " << error << "Number must be between 1 and 2.\n";
										cout << spacer;
										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection >= 1 && menuSelection <= 2) {
											menuError = false;
										}
									}

									if(menuSelection == 1 && r1b9Active) {
										// Battle time

										// Acquire total health points for heroes and monsters

										// Heroes

										if(heroActive00) heroTotalHealth += heroTotalHealth00;
										if(heroActive01) heroTotalHealth += heroTotalHealth01;
										if(heroActive02) heroTotalHealth += heroTotalHealth02;
										if(heroActive03) heroTotalHealth += heroTotalHealth03;
										if(heroActive04) heroTotalHealth += heroTotalHealth04;
										heroCurrentHealth = heroTotalHealth;

										// Monsters

										if(r1b9Active00) monsterTotalHealth += r1b9TotalHealth00;
										if(r1b9Active01) monsterTotalHealth += r1b9TotalHealth01;
										if(r1b9Active02) monsterTotalHealth += r1b9TotalHealth02;
										if(r1b9Active03) monsterTotalHealth += r1b9TotalHealth03;
										if(r1b9Active04) monsterTotalHealth += r1b9TotalHealth04;
										monsterCurrentHealth = monsterTotalHealth;

										// Used for choosing random units from either side

										uniform_int_distribution<int> theHero(1, numHeroes);
										uniform_int_distribution<int> theMonster(1, r1b9Units);

										// Loop battle until we have a winner

										while(playing) {
											uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b9Units));

											// Store names of two units that will be attacking

											string heroName = "";
											int    heroAttack = 0;
											string monsterName = "";
											int    monsterAttack = 0;
											int    heroUnit = 0;
											int    monsterUnit = 0;

											// Obtain hero details. If unit is not active loop through
											// until we find one that is.

											while(playing) {
												heroUnit = theHero(randomGenerator);

												if(heroUnit == 1 && heroStatus00) {
													heroName = heroName00;
													heroAttack = heroAttack00;
													playing = false;
												} else if(heroUnit == 2 && heroStatus01) {
													heroName = heroName01;
													heroAttack = heroAttack01;
													playing = false;
												} else if(heroUnit == 3 && heroStatus02) {
													heroName = heroName02;
													heroAttack = heroAttack02;
													playing = false;
												} else if(heroUnit == 4 && heroStatus03) {
													heroName = heroName03;
													heroAttack = heroAttack03;
													playing = false;
												} else if(heroUnit == 5 && heroStatus04) {
													heroName = heroName04;
													heroAttack = heroAttack04;
													playing = false;
												}
											}

											playing = true;

											// Obtain monster details. If unit is not active loop through
											// until we find one that is.

											while(playing) {
												monsterUnit = theMonster(randomGenerator);

												if(monsterUnit == 1 && r1b9Status00) {
													monsterName = r1b9Name00;
													monsterAttack = r1b9Attack00;
													playing = false;
												} else if(monsterUnit == 2 && r1b9Status01) {
													monsterName = r1b9Name01;
													monsterAttack = r1b9Attack01;
													playing = false;
												} else if(monsterUnit == 3 && r1b9Status02) {
													monsterName = r1b9Name02;
													monsterAttack = r1b9Attack02;
													playing = false;
												} else if(monsterUnit == 4 && r1b9Status03) {
													monsterName = r1b9Name03;
													monsterAttack = r1b9Attack03;
													playing = false;
												} else if(monsterUnit == 5 && r1b9Status04) {
													monsterName = r1b9Name04;
													monsterAttack = r1b9Attack04;
													playing = false;
												}
											}

											playing = true;

											// Time to choose who's attacking

											// 'int variable' will hold the total amount of units (heroes + monsters).
											// Whichever side has the most units will have a greater chance of being
											// selected to attack.

											int variable = totalUnits(randomGenerator);
											int attackingSide = 0;

											if(variable > 0 && variable <= numHeroes) {
												attackingSide = 0;
											} else if(variable > numHeroes || variable <= (numHeroes + r1b9Units)) {
												attackingSide = 1;
											}

											if(attackingSide == 0) {
												// Heroes attacking

												if(monsterUnit == 1) {
													if(heroAttack >= r1b9CurrentHealth00) {
														heroAttack = r1b9CurrentHealth00;
													}

													r1b9CurrentHealth00 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b9CurrentHealth00 <= 0) {
														r1b9TotalHealth00 = 0;
														r1b9Attack00 = 0;
														r1b9Status00 = false;
														r1b9Units--;
													}
												} else if(monsterUnit == 2) {
													if(heroAttack >= r1b9CurrentHealth01) {
														heroAttack = r1b9CurrentHealth01;
													}

													r1b9CurrentHealth01 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b9CurrentHealth01 <= 0) {
														r1b9TotalHealth01 = 0;
														r1b9Attack01 = 0;
														r1b9Status01 = false;
														r1b9Units--;
													}
												} else if(monsterUnit == 3) {
													if(heroAttack >= r1b9CurrentHealth02) {
														heroAttack = r1b9CurrentHealth02;
													}

													r1b9CurrentHealth02 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b9CurrentHealth02 <= 0) {
														r1b9TotalHealth02 = 0;
														r1b9Attack02 = 0;
														r1b9Status02 = false;
														r1b9Units--;
													}
												} else if(monsterUnit == 4) {
													if(heroAttack >= r1b9CurrentHealth03) {
														heroAttack = r1b9CurrentHealth03;
													}

													r1b9CurrentHealth03 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b9CurrentHealth03 <= 0) {
														r1b9TotalHealth03 = 0;
														r1b9Attack03 = 0;
														r1b9Status03 = false;
														r1b9Units--;
													}
												} else if(monsterUnit == 5) {
													if(heroAttack >= r1b9CurrentHealth04) {
														heroAttack = r1b9CurrentHealth04;
													}

													r1b9CurrentHealth04 -= heroAttack;
													monsterCurrentHealth -= heroAttack;

													if(r1b9CurrentHealth04 <= 0) {
														r1b9TotalHealth04 = 0;
														r1b9Attack04 = 0;
														r1b9Status04 = false;
														r1b9Units--;
													}
												}
											} else if(attackingSide == 1) {
												// Monsters attacking

												if(heroUnit == 1) {
													if(monsterAttack >= heroCurrentHealth00) {
														monsterAttack = heroCurrentHealth00;
													}

													heroCurrentHealth00 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth00 <= 0) {
														heroStatus00 = false;
														numHeroes--;
													}
												} else if(heroUnit == 2) {
													if(monsterAttack >= heroCurrentHealth01) {
														monsterAttack = heroCurrentHealth01;
													}

													heroCurrentHealth01 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth01 <= 0) {
														heroTotalHealth01 = 0;
														heroAttack01 = 0;
														heroStatus01 = false;
														numHeroes--;
													}
												} else if(heroUnit == 3) {
													if(monsterAttack >= heroCurrentHealth02) {
														monsterAttack = heroCurrentHealth02;
													}

													heroCurrentHealth02 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth02 <= 0) {
														heroTotalHealth02 = 0;
														heroAttack02 = 0;
														heroStatus02 = false;
														numHeroes--;
													}
												} else if(heroUnit == 4) {
													if(monsterAttack >= heroCurrentHealth03) {
														monsterAttack = heroCurrentHealth03;
													}

													heroCurrentHealth03 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth03 <= 0) {
														heroTotalHealth03 = 0;
														heroAttack03 = 0;
														heroStatus03 = false;
														numHeroes--;
													}
												} else if(heroUnit == 5) {
													if(monsterAttack >= heroCurrentHealth04) {
														monsterAttack = heroCurrentHealth04;
													}

													heroCurrentHealth04 -= monsterAttack;
													heroCurrentHealth -= monsterAttack;

													if(heroCurrentHealth04 <= 0) {
														heroTotalHealth04 = 0;
														heroAttack04 = 0;
														heroStatus04 = false;
														numHeroes--;
													}
												}
											}

											// Display battle results to user

											float hashCount = 0;
											float equalCount = 0;

											cout << "||-------------------------------- HEALTH -------------------------------||\n";
											cout << "||-----------------------------------------------------------------------||\n";
											cout << "||-- Heroes --||- ";

											hashCount = (heroCurrentHealth / heroTotalHealth) * 43.0f;
											equalCount = 43.00f - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount - 1; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(heroCurrentHealth >= 10000) {
												cout << "9999";
											} else if(heroCurrentHealth >= 1000 && heroCurrentHealth < 10000) {
												cout << heroCurrentHealth;
											} else if(heroCurrentHealth >= 100 && heroCurrentHealth < 1000) {
												cout << "0" << heroCurrentHealth;
											} else if(heroCurrentHealth >= 10 && heroCurrentHealth < 100) {
												cout << "00" << heroCurrentHealth;
											} else if(heroCurrentHealth >= 1 && heroCurrentHealth < 10) {
												cout << "000" << heroCurrentHealth;
											} else {
												cout << "0000";
											}

											cout << " -||\n";

											cout << "||-----------------------------------------------------------------------||\n";
											cout << "||- Monsters -||- ";

											hashCount = (monsterCurrentHealth / monsterTotalHealth) * 43.0f;
											equalCount = 43.00f - hashCount;

											// Create bar

											for(int i = 0; i < hashCount; i++) {
												cout << "#";
											}
											for(int i = 0; i < equalCount - 1; i++) {
												cout << "=";
											}

											cout << " -||- ";

											if(monsterCurrentHealth >= 10000) {
												cout << "9999";
											} else if(monsterCurrentHealth >= 1000 && monsterCurrentHealth < 10000) {
												cout << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 100 && monsterCurrentHealth < 1000) {
												cout << "0" << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 10 && monsterCurrentHealth < 100) {
												cout << "00" << monsterCurrentHealth;
											} else if(monsterCurrentHealth >= 1 && monsterCurrentHealth < 10) {
												cout << "000" << monsterCurrentHealth;
											} else {
												cout << "0000";
											}

											cout << " -||\n";
											cout << "||-----------------------------------------------------------------------||\n";

											cout << spacer;

											cout << spacer;


											if(attackingSide == 0) {
												cout << "||- " << heroName << " attacked " << monsterName << " for " << heroAttack << " points.\n";
											} else if(attackingSide == 1) {
												cout << "||- " << monsterName << " attacked " << heroName << " for " << monsterAttack << " points.\n";
											}

											cout << spacer;

											cout << "||-------------- Heroes -------------||\n";
											cout << "||-----------------------------------||\n";

											if(heroActive00) {
												cout << "||";

												if(heroName00.length() == 1) {
													cout << "----- " << heroName00 << " ------";
												} else if(heroName00.length() == 2) {
													cout << "----- " << heroName00 << " -----";
												} else if(heroName00.length() == 3) {
													cout << "---- " << heroName00 << " -----";
												} else if(heroName00.length() == 4) {
													cout << "---- " << heroName00 << " ----";
												} else if(heroName00.length() == 5) {
													cout << "--- " << heroName00 << " ----";
												} else if(heroName00.length() == 6) {
													cout << "--- " << heroName00 << " ---";
												} else if(heroName00.length() == 7) {
													cout << "-- " << heroName00 << " ---";
												} else if(heroName00.length() == 8) {
													cout << "-- " << heroName00 << " --";
												} else if(heroName00.length() == 9) {
													cout << "- " << heroName00 << " --";
												} else if(heroName00.length() == 10) {
													cout << "- " << heroName00 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth00 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth00 >= 1000 && heroCurrentHealth00 < 10000) {
													cout << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 100 && heroCurrentHealth00 < 1000) {
													cout << "0" << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 10 && heroCurrentHealth00 < 100) {
													cout << "00" << heroCurrentHealth00;
												} else if(heroCurrentHealth00 >= 1 && heroCurrentHealth00 < 10) {
													cout << "000" << heroCurrentHealth00;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus00) {
													cout << "- ALIVE -";
												} else if(!heroStatus00) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive01) {
												cout << "||";

												if(heroName01.length() == 1) {
													cout << "----- " << heroName01 << " ------";
												} else if(heroName01.length() == 2) {
													cout << "----- " << heroName01 << " -----";
												} else if(heroName01.length() == 3) {
													cout << "---- " << heroName01 << " -----";
												} else if(heroName01.length() == 4) {
													cout << "---- " << heroName01 << " ----";
												} else if(heroName01.length() == 5) {
													cout << "--- " << heroName01 << " ----";
												} else if(heroName01.length() == 6) {
													cout << "--- " << heroName01 << " ---";
												} else if(heroName01.length() == 7) {
													cout << "-- " << heroName01 << " ---";
												} else if(heroName01.length() == 8) {
													cout << "-- " << heroName01 << " --";
												} else if(heroName01.length() == 9) {
													cout << "- " << heroName01 << " --";
												} else if(heroName01.length() == 10) {
													cout << "- " << heroName01 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth01 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth01 >= 1000 && heroCurrentHealth01 < 10000) {
													cout << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 100 && heroCurrentHealth01 < 1000) {
													cout << "0" << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 10 && heroCurrentHealth01 < 100) {
													cout << "00" << heroCurrentHealth01;
												} else if(heroCurrentHealth01 >= 1 && heroCurrentHealth01 < 10) {
													cout << "000" << heroCurrentHealth01;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus01) {
													cout << "- ALIVE -";
												} else if(!heroStatus01) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive02) {
												cout << "||";

												if(heroName02.length() == 1) {
													cout << "----- " << heroName02 << " ------";
												} else if(heroName02.length() == 2) {
													cout << "----- " << heroName02 << " -----";
												} else if(heroName02.length() == 3) {
													cout << "---- " << heroName02 << " -----";
												} else if(heroName02.length() == 4) {
													cout << "---- " << heroName02 << " ----";
												} else if(heroName02.length() == 5) {
													cout << "--- " << heroName02 << " ----";
												} else if(heroName02.length() == 6) {
													cout << "--- " << heroName02 << " ---";
												} else if(heroName02.length() == 7) {
													cout << "-- " << heroName02 << " ---";
												} else if(heroName02.length() == 8) {
													cout << "-- " << heroName02 << " --";
												} else if(heroName02.length() == 9) {
													cout << "- " << heroName02 << " --";
												} else if(heroName02.length() == 10) {
													cout << "- " << heroName02 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth02 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth02 >= 1000 && heroCurrentHealth02 < 10000) {
													cout << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 100 && heroCurrentHealth02 < 1000) {
													cout << "0" << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 10 && heroCurrentHealth02 < 100) {
													cout << "00" << heroCurrentHealth02;
												} else if(heroCurrentHealth02 >= 1 && heroCurrentHealth02 < 10) {
													cout << "000" << heroCurrentHealth02;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus02) {
													cout << "- ALIVE -";
												} else if(!heroStatus02) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive03) {
												cout << "||";

												if(heroName03.length() == 1) {
													cout << "----- " << heroName03 << " ------";
												} else if(heroName03.length() == 2) {
													cout << "----- " << heroName03 << " -----";
												} else if(heroName03.length() == 3) {
													cout << "---- " << heroName03 << " -----";
												} else if(heroName03.length() == 4) {
													cout << "---- " << heroName03 << " ----";
												} else if(heroName03.length() == 5) {
													cout << "--- " << heroName03 << " ----";
												} else if(heroName03.length() == 6) {
													cout << "--- " << heroName03 << " ---";
												} else if(heroName03.length() == 7) {
													cout << "-- " << heroName03 << " ---";
												} else if(heroName03.length() == 8) {
													cout << "-- " << heroName03 << " --";
												} else if(heroName03.length() == 9) {
													cout << "- " << heroName03 << " --";
												} else if(heroName03.length() == 10) {
													cout << "- " << heroName03 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth03 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth03 >= 1000 && heroCurrentHealth03 < 10000) {
													cout << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 100 && heroCurrentHealth03 < 1000) {
													cout << "0" << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 10 && heroCurrentHealth03 < 100) {
													cout << "00" << heroCurrentHealth03;
												} else if(heroCurrentHealth03 >= 1 && heroCurrentHealth03 < 10) {
													cout << "000" << heroCurrentHealth03;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus03) {
													cout << "- ALIVE -";
												} else if(!heroStatus03) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(heroActive04) {
												cout << "||";

												if(heroName04.length() == 1) {
													cout << "----- " << heroName04 << " ------";
												} else if(heroName04.length() == 2) {
													cout << "----- " << heroName04 << " -----";
												} else if(heroName04.length() == 3) {
													cout << "---- " << heroName04 << " -----";
												} else if(heroName04.length() == 4) {
													cout << "---- " << heroName04 << " ----";
												} else if(heroName04.length() == 5) {
													cout << "--- " << heroName04 << " ----";
												} else if(heroName04.length() == 6) {
													cout << "--- " << heroName04 << " ---";
												} else if(heroName04.length() == 7) {
													cout << "-- " << heroName04 << " ---";
												} else if(heroName04.length() == 8) {
													cout << "-- " << heroName04 << " --";
												} else if(heroName04.length() == 9) {
													cout << "- " << heroName04 << " --";
												} else if(heroName04.length() == 10) {
													cout << "- " << heroName04 << " -";
												}

												cout << "||- ";

												if(heroCurrentHealth04 >= 10000) {
													cout << "9999";
												} else if(heroCurrentHealth04 >= 1000 && heroCurrentHealth04 < 10000) {
													cout << heroCurrentHealth00;
												} else if(heroCurrentHealth04 >= 100 && heroCurrentHealth04 < 1000) {
													cout << "0" << heroCurrentHealth04;
												} else if(heroCurrentHealth04 >= 10 && heroCurrentHealth04 < 100) {
													cout << "00" << heroCurrentHealth04;
												} else if(heroCurrentHealth04 >= 1 && heroCurrentHealth04 < 10) {
													cout << "000" << heroCurrentHealth04;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(heroStatus04) {
													cout << "- ALIVE -";
												} else if(!heroStatus04) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											cout << "||-----------------------------------||\n";

											cout << spacer;

											cout << "||------------- Monsters ------------||\n";
											cout << "||-----------------------------------||\n";

											if(r1b9Active00) {
												cout << "||";

												if(r1b9Name00.length() == 1) {
													cout << "----- " << r1b9Name00 << " ------";
												} else if(r1b9Name00.length() == 2) {
													cout << "----- " << r1b9Name00 << " -----";
												} else if(r1b9Name00.length() == 3) {
													cout << "---- " << r1b9Name00 << " -----";
												} else if(r1b9Name00.length() == 4) {
													cout << "---- " << r1b9Name00 << " ----";
												} else if(r1b9Name00.length() == 5) {
													cout << "--- " << r1b9Name00 << " ----";
												} else if(r1b9Name00.length() == 6) {
													cout << "--- " << r1b9Name00 << " ---";
												} else if(r1b9Name00.length() == 7) {
													cout << "-- " << r1b9Name00 << " ---";
												} else if(r1b9Name00.length() == 8) {
													cout << "-- " << r1b9Name00 << " --";
												} else if(r1b9Name00.length() == 9) {
													cout << "- " << r1b9Name00 << " --";
												} else if(r1b9Name00.length() == 10) {
													cout << "- " << r1b9Name00 << " -";
												}

												cout << "||- ";

												if(r1b9CurrentHealth00 >= 10000) {
													cout << "9999";
												} else if(r1b9CurrentHealth00 >= 1000 && r1b9CurrentHealth00 < 10000) {
													cout << r1b9CurrentHealth00;
												} else if(r1b9CurrentHealth00 >= 100 && r1b9CurrentHealth00 < 1000) {
													cout << "0" << r1b9CurrentHealth00;
												} else if(r1b9CurrentHealth00 >= 10 && r1b9CurrentHealth00 < 100) {
													cout << "00" << r1b9CurrentHealth00;
												} else if(r1b9CurrentHealth00 >= 1 && r1b9CurrentHealth00 < 10) {
													cout << "000" << r1b9CurrentHealth00;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b9Status00) {
													cout << "- ALIVE -";
												} else if(!r1b9Status00) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b9Active01) {
												cout << "||";

												if(r1b9Name01.length() == 1) {
													cout << "----- " << r1b9Name01 << " ------";
												} else if(r1b9Name01.length() == 2) {
													cout << "----- " << r1b9Name01 << " -----";
												} else if(r1b9Name01.length() == 3) {
													cout << "---- " << r1b9Name01 << " -----";
												} else if(r1b9Name01.length() == 4) {
													cout << "---- " << r1b9Name01 << " ----";
												} else if(r1b9Name01.length() == 5) {
													cout << "--- " << r1b9Name01 << " ----";
												} else if(r1b9Name01.length() == 6) {
													cout << "--- " << r1b9Name01 << " ---";
												} else if(r1b9Name01.length() == 7) {
													cout << "-- " << r1b9Name01 << " ---";
												} else if(r1b9Name01.length() == 8) {
													cout << "-- " << r1b9Name01 << " --";
												} else if(r1b9Name01.length() == 9) {
													cout << "- " << r1b9Name01 << " --";
												} else if(r1b9Name01.length() == 10) {
													cout << "- " << r1b9Name01 << " -";
												}

												cout << "||- ";

												if(r1b9CurrentHealth01 >= 10000) {
													cout << "9999";
												} else if(r1b9CurrentHealth01 >= 1000 && r1b9CurrentHealth01 < 10000) {
													cout << r1b9CurrentHealth01;
												} else if(r1b9CurrentHealth01 >= 100 && r1b9CurrentHealth01 < 1000) {
													cout << "0" << r1b9CurrentHealth01;
												} else if(r1b7CurrentHealth01 >= 10 && r1b9CurrentHealth01 < 100) {
													cout << "00" << r1b9CurrentHealth01;
												} else if(r1b9CurrentHealth01 >= 1 && r1b9CurrentHealth01 < 10) {
													cout << "000" << r1b9CurrentHealth01;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b9Status01) {
													cout << "- ALIVE -";
												} else if(!r1b9Status01) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b9Active02) {
												cout << "||";

												if(r1b9Name02.length() == 1) {
													cout << "----- " << r1b9Name02 << " ------";
												} else if(r1b9Name02.length() == 2) {
													cout << "----- " << r1b9Name02 << " -----";
												} else if(r1b9Name02.length() == 3) {
													cout << "---- " << r1b9Name02 << " -----";
												} else if(r1b9Name02.length() == 4) {
													cout << "---- " << r1b9Name02 << " ----";
												} else if(r1b9Name02.length() == 5) {
													cout << "--- " << r1b9Name02 << " ----";
												} else if(r1b9Name02.length() == 6) {
													cout << "--- " << r1b9Name02 << " ---";
												} else if(r1b9Name02.length() == 7) {
													cout << "-- " << r1b9Name02 << " ---";
												} else if(r1b9Name02.length() == 8) {
													cout << "-- " << r1b9Name02 << " --";
												} else if(r1b9Name02.length() == 9) {
													cout << "- " << r1b9Name02 << " --";
												} else if(r1b9Name02.length() == 10) {
													cout << "- " << r1b9Name02 << " -";
												}

												cout << "||- ";

												if(r1b9CurrentHealth02 >= 10000) {
													cout << "9999";
												} else if(r1b9CurrentHealth02 >= 1000 && r1b9CurrentHealth02 < 10000) {
													cout << r1b9CurrentHealth02;
												} else if(r1b9CurrentHealth02 >= 100 && r1b9CurrentHealth02 < 1000) {
													cout << "0" << r1b9CurrentHealth02;
												} else if(r1b9CurrentHealth02 >= 10 && r1b9CurrentHealth02 < 100) {
													cout << "00" << r1b9CurrentHealth02;
												} else if(r1b9CurrentHealth02 >= 1 && r1b9CurrentHealth02 < 10) {
													cout << "000" << r1b9CurrentHealth02;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b9Status02) {
													cout << "- ALIVE -";
												} else if(!r1b9Status02) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b9Active03) {
												cout << "||";

												if(r1b9Name03.length() == 1) {
													cout << "----- " << r1b9Name03 << " ------";
												} else if(r1b9Name03.length() == 2) {
													cout << "----- " << r1b9Name03 << " -----";
												} else if(r1b9Name03.length() == 3) {
													cout << "---- " << r1b9Name03 << " -----";
												} else if(r1b9Name03.length() == 4) {
													cout << "---- " << r1b9Name03 << " ----";
												} else if(r1b9Name03.length() == 5) {
													cout << "--- " << r1b9Name03 << " ----";
												} else if(r1b9Name03.length() == 6) {
													cout << "--- " << r1b9Name03 << " ---";
												} else if(r1b9Name03.length() == 7) {
													cout << "-- " << r1b9Name03 << " ---";
												} else if(r1b9Name03.length() == 8) {
													cout << "-- " << r1b9Name03 << " --";
												} else if(r1b9Name03.length() == 9) {
													cout << "- " << r1b9Name03 << " --";
												} else if(r1b9Name03.length() == 10) {
													cout << "- " << r1b9Name03 << " -";
												}

												cout << "||- ";

												if(r1b9CurrentHealth03 >= 10000) {
													cout << "9999";
												} else if(r1b9CurrentHealth03 >= 1000 && r1b9CurrentHealth03 < 10000) {
													cout << r1b9CurrentHealth03;
												} else if(r1b9CurrentHealth03 >= 100 && r1b9CurrentHealth03 < 1000) {
													cout << "0" << r1b9CurrentHealth03;
												} else if(r1b9CurrentHealth03 >= 10 && r1b9CurrentHealth03 < 100) {
													cout << "00" << r1b9CurrentHealth03;
												} else if(r1b9CurrentHealth03 >= 1 && r1b9CurrentHealth03 < 10) {
													cout << "000" << r1b9CurrentHealth03;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b9Status03) {
													cout << "- ALIVE -";
												} else if(!r1b9Status03) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											if(r1b9Active04) {
												cout << "||";

												if(r1b9Name04.length() == 1) {
													cout << "----- " << r1b9Name04 << " ------";
												} else if(r1b9Name04.length() == 2) {
													cout << "----- " << r1b9Name04 << " -----";
												} else if(r1b9Name04.length() == 3) {
													cout << "---- " << r1b9Name04 << " -----";
												} else if(r1b9Name04.length() == 4) {
													cout << "---- " << r1b9Name04 << " ----";
												} else if(r1b9Name04.length() == 5) {
													cout << "--- " << r1b9Name04 << " ----";
												} else if(r1b9Name04.length() == 6) {
													cout << "--- " << r1b9Name04 << " ---";
												} else if(r1b9Name04.length() == 7) {
													cout << "-- " << r1b9Name04 << " ---";
												} else if(r1b9Name04.length() == 8) {
													cout << "-- " << r1b9Name04 << " --";
												} else if(r1b9Name04.length() == 9) {
													cout << "- " << r1b9Name04 << " --";
												} else if(r1b9Name04.length() == 10) {
													cout << "- " << r1b9Name04 << " -";
												}

												cout << "||- ";

												if(r1b9CurrentHealth04 >= 10000) {
													cout << "9999";
												} else if(r1b9CurrentHealth04 >= 1000 && r1b9CurrentHealth04 < 10000) {
													cout << r1b9CurrentHealth04;
												} else if(r1b9CurrentHealth04 >= 100 && r1b9CurrentHealth04 < 1000) {
													cout << "0" << r1b9CurrentHealth04;
												} else if(r1b9CurrentHealth04 >= 10 && r1b9CurrentHealth04 < 100) {
													cout << "00" << r1b9CurrentHealth04;
												} else if(r1b9CurrentHealth04 >= 1 && r1b9CurrentHealth04 < 10) {
													cout << "000" << r1b9CurrentHealth04;
												} else {
													cout << "0000";
												}

												cout << " -||";

												if(r1b9Status04) {
													cout << "- ALIVE -";
												} else if(!r1b9Status04) {
													cout << "- DEAD --";
												}

												cout << "||\n";
											}

											cout << "||-----------------------------------||\n";

											cout << spacer;

											// Crappy timer to slow loop

											int num1 = 0;
											int num2 = 0;

											while(playing) {
												num1++;

												if(num1 >= 100000) {
													num2++;
													num1 = 0;
												}

												if(num2 >= 10000) {
													num1 = 0;
													num2 = 0;
													playing = false;
												}
											}

											playing = true;

											if(numHeroes <= 0 || r1b9Units <= 0) {
												playing = false;
											}
										}

										playing = true;

										// Update logic

										bool win = false;
										int losses = 0;
										int kills = 0;
										int population = 0;
										int currency = 0;

										if(numHeroes <= 0 && r1b9Units > 0) {
											win = false;
											conquestDefeats++;

											uniform_int_distribution<int> killed(5, (r1b9Units * 10));

											population = killed(randomGenerator);

											populationAlive -= population;
											populationDead += population;

											currency = (r1b9CurrentHealth00 + r1b9CurrentHealth01 + r1b9CurrentHealth02 + r1b9CurrentHealth03 + r1b9CurrentHealth04) * r1b9Units;

											lostCredits += currency;

											if((currentCredits - currency) <= 0) {
												currentCredits = 0;
											} else {
												currentCredits -= currency;
											}

										} else if(numHeroes > 0 && r1b9Units <= 0) {
											win = true;

											r1b9Active = false;
											r1Active = false;
											r1Locked = true;
											r2Active = true;
											r2Locked = false;
											r2b1Active = true;

											conquestWins++;

											currency = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

											wonCredits += currency;
											currentCredits += wonCredits;
										}

										if(!heroStatus00 && heroActive00) {
											heroCurrentHealth00 = heroTotalHealth00;
											heroStatus00 = true;
											numHeroes++;
										} else {
											heroCurrentHealth00 = heroTotalHealth00;
											heroStatus00 = true;
										}

										if(!heroStatus01 && heroActive01) {
											heroTotalHealth01 = 0;
											heroCurrentHealth01 = heroTotalHealth01;
											heroAttack01 = 0;
											heroActive01 = false;
											losses++;
										} else {
											heroCurrentHealth01 = heroTotalHealth01;
											heroStatus01 = true;
										}

										if(!heroStatus02 && heroActive02) {
											heroTotalHealth02 = 0;
											heroCurrentHealth02 = heroTotalHealth02;
											heroAttack02 = 0;
											heroActive02 = false;
											losses++;
										} else {
											heroCurrentHealth02 = heroTotalHealth02;
											heroStatus02 = true;
										}

										if(!heroStatus03 && heroActive03) {
											heroTotalHealth03 = 0;
											heroCurrentHealth03 = heroTotalHealth;
											heroAttack03 = 0;
											heroActive03 = false;
											losses++;
										} else {
											heroCurrentHealth03 = heroTotalHealth03;
											heroStatus03 = true;
										}

										if(!heroStatus04 && heroActive04) {
											heroTotalHealth04 = 0;
											heroCurrentHealth04 = heroTotalHealth04;
											heroAttack04 = 0;
											heroActive04 = false;
											losses++;
										} else {
											heroCurrentHealth04 = heroTotalHealth04;
											heroStatus04 = true;
										}

										if(!r1b9Status00 && r1b9Active00) {
											r1b9TotalHealth00 = 0;
											r1b9CurrentHealth00 = r1b9TotalHealth00;
											r1b9Attack00 = 0;
											r1b9Active = false;
											kills++;
										} else {
											r1b9CurrentHealth00 = r1b9TotalHealth00;
											r1b9Status00 = true;
										}

										if(!r1b9Status01 && r1b9Active01) {
											r1b9TotalHealth01 = 0;
											r1b9CurrentHealth01 = r1b9TotalHealth01;
											r1b9Attack01 = 0;
											r1b9Active = false;
											kills++;
										} else {
											r1b9CurrentHealth01 = r1b9TotalHealth01;
											r1b9Status01 = true;
										}

										if(!r1b9Status02 && r1b9Active02) {
											r1b9TotalHealth02 = 0;
											r1b9CurrentHealth02 = r1b9TotalHealth02;
											r1b9Attack02 = 0;
											r1b9Active = false;
											kills++;
										} else {
											r1b9CurrentHealth02 = r1b9TotalHealth02;
											r1b9Status02 = true;
										}

										if(!r1b9Status03 && r1b9Active03) {
											r1b9TotalHealth03 = 0;
											r1b9CurrentHealth03 = r1b9TotalHealth03;
											r1b9Attack03 = 0;
											r1b9Active = false;
											kills++;
										} else {
											r1b9CurrentHealth03 = r1b9TotalHealth03;
											r1b9Status03 = true;
										}

										if(!r1b9Status04 && r1b9Active04) {
											r1b9TotalHealth04 = 0;
											r1b9CurrentHealth04 = r1b9TotalHealth04;
											r1b9Attack04 = 0;
											r1b9Active = false;
											kills++;
										} else {
											r1b9CurrentHealth04 = r1b9TotalHealth04;
											r1b9Status00 = true;
										}

										deadHeroes += losses;
										enemiesKilled += kills;

										// Display end results to user

										cout << border;
										cout << "||-------------------------- Battle Results -----------------------------||\n";
										cout << border;

										cout << spacer;

										cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

										cout << spacer;

										if(win) {
											cout << "||- After a long and exhausting battle you come out victorious. You\n";
											cout << "||- have successfully destroyed the base and all monsters within it.\n";
											cout << "||- It's now time to take whatever loot is available and continue \n";
											cout << "||- onto the next base.\n";

											cout << spacer;

											cout << "||- Credits won:       " << currency << "\n";
										} else if(!win) {
											cout << "||- After a long and exhausting battle you succumb to bitter defeat\n";
											cout << "||- at the hands of the monsters. ";

											if(numHeroes > 1) {
												cout << "You and your recruited heroes\n";
												cout << "||- fought bravely but proved no match for the base.\n";
											} else {
												cout << "You fought bravely on your own but\n";
												cout << "||- proved no match for the base.\n";
											}
											cout << spacer;

											cout << "||- Defeated there is little that stands in the way of the monsters as\n";
											cout << "||- they lay slaughter to the population.\n";

											cout << spacer;

											cout << "||- Credits lost:      " << currency << "\n";
										}

										cout << spacer;

										cout << "||- Heroes killed:     " << losses << "\n";
										cout << "||- Enemies killed:    " << kills << "\n";
										cout << "||- Population killed: " << population << "\n";

										cout << spacer;

										cout << "|| [1] Continue\n";

										cout << spacer;

										cout << "|| Please enter a number: ";
										cin >> menuSelection;

										if(menuSelection != 1) {
											menuError = true;
										}

										while(menuError) {
											cout << spacer;
											cout << "|| " << error << "Number must be 1.\n";
											cout << spacer;
											cout << "|| Please enter a number: ";
											cin >> menuSelection;

											if(menuSelection == 1) {
												menuError = false;
											}
										}

									}
								}
							} else if(menuSelection == 10) {
								playing = false;
							}
						}
						playing = true;
					} else if(menuSelection == 2 && r2Active) {
						// Region 2

					} else if(menuSelection == 3 && r3Active) {
						// Region 3

					} else if(menuSelection == 4 && r4Active) {
						// Region 4

					} else if(menuSelection == 5 && r5Active) {
						// Region 5

					} else if(menuSelection == 6) {
						playing = false;
					}
				}
				playing = true;
			} else if(menuSelection == 2) {
				// Friendly Battle
				cout << border;
				cout << "||-------------------------- Friendly Battle ----------------------------||\n";
				cout << border;
				cout << spacer;

				cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

				cout << spacer;
			}
		} else if(menuSelection == 2) {
			while(playing) {
				cout << border;
				cout << "||---------------------------- View Heroes ------------------------------||\n";
				cout << border;
				cout << spacer;

				cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

				cout << spacer;

				if(numHeroes == 0) {
					cout << "|| Here you can view your heroes. Unfortunately, you do not have any\n";
					cout << "|| heroes to view. Please go back to the main screen and play the\n";
					cout << "|| game to obtain your first hero.\n";

					cout << spacer;

					cout << "|| [1] Return\n";

					cout << spacer;

					cout << "|| Please enter a number: ";
					cin >> menuSelection;

					if(menuSelection != 1) {
						menuError = true;
					}

					while(menuError) {
						cout << spacer;
						cout << "|| " << error << "Number must be 1.\n";
						cout << spacer;
						cout << "|| Please enter a number: ";
						cin >> menuSelection;

						if(menuSelection == 1) {
							menuError = false;
						}
					}
				} else {
					cout << "|| Here you can view your heroes. You can also upgrade a hero's health\n";
					cout << "|| and attack points by entering in the numbers to the left of the hero\n";
					cout << "|| you wish to upgrade. All upgrades cost 100 credits\n";

					cout << spacer;

					// Create a for loop to loop through each hero and display it
					// to the player
					for(int i = 0; i < numHeroes; i++) {
						// This variable will be used to store the heros health and attack bars
						int hashCount = 0;
						int equalCount = 0;

						if(i == 0) {
							cout << "||-----------------------------------------------------------------------||\n";

							cout << "||- [0] -||";

							if(heroName00.length() == 1) {
								cout << "----- " << heroName00 << " ------";
							} else if(heroName00.length() == 2) {
								cout << "----- " << heroName00 << " -----";
							} else if(heroName00.length() == 3) {
								cout << "---- " << heroName00 << " -----";
							} else if(heroName00.length() == 4) {
								cout << "---- " << heroName00 << " ----";
							} else if(heroName00.length() == 5) {
								cout << "--- " << heroName00 << " ----";
							} else if(heroName00.length() == 6) {
								cout << "--- " << heroName00 << " ---";
							} else if(heroName00.length() == 7) {
								cout << "-- " << heroName00 << " ---";
							} else if(heroName00.length() == 8) {
								cout << "-- " << heroName00 << " --";
							} else if(heroName00.length() == 9) {
								cout << "- " << heroName00 << " --";
							} else if(heroName00.length() == 10) {
								cout << "- " << heroName00 << " -";
							}

							cout << "||- Health -||- ";

							// Just some calculations
							hashCount = heroTotalHealth00 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroTotalHealth00 < 100 && heroTotalHealth00 >= 10) {
								cout << "00" << heroTotalHealth00;
							} else if(heroTotalHealth00 < 1000 && heroTotalHealth00 >= 100) {
								cout << "0" << heroTotalHealth00;
							} else {
								cout << heroTotalHealth00;
							}

							cout << " -||\n";

							cout << "||- [1] -||";

							if(heroName00.length() == 1) {
								cout << "----- " << heroName00 << " ------";
							} else if(heroName00.length() == 2) {
								cout << "----- " << heroName00 << " -----";
							} else if(heroName00.length() == 3) {
								cout << "---- " << heroName00 << " -----";
							} else if(heroName00.length() == 4) {
								cout << "---- " << heroName00 << " ----";
							} else if(heroName00.length() == 5) {
								cout << "--- " << heroName00 << " ----";
							} else if(heroName00.length() == 6) {
								cout << "--- " << heroName00 << " ---";
							} else if(heroName00.length() == 7) {
								cout << "-- " << heroName00 << " ---";
							} else if(heroName00.length() == 8) {
								cout << "-- " << heroName00 << " --";
							} else if(heroName00.length() == 9) {
								cout << "- " << heroName00 << " --";
							} else if(heroName00.length() == 10) {
								cout << "- " << heroName00 << " -";
							}

							cout << "||- Attack -||- ";

							// Just some calculations
							hashCount = heroAttack00 / 10;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroAttack00 < 100 && heroAttack00 >= 10) {
								cout << "00" << heroAttack00;
							} else if(heroAttack00 < 1000 && heroAttack00 >= 100) {
								cout << "0" << heroAttack00;
							} else {
								cout << heroAttack00;
							}

							cout << " -||\n";
						} else if(i == 1) {
							cout << "||-----------------------------------------------------------------------||\n";

							cout << "||- [2] -||";

							if(heroName01.length() == 1) {
								cout << "----- " << heroName01 << " ------";
							} else if(heroName01.length() == 2) {
								cout << "----- " << heroName01 << " -----";
							} else if(heroName01.length() == 3) {
								cout << "---- " << heroName01 << " -----";
							} else if(heroName01.length() == 4) {
								cout << "---- " << heroName01 << " ----";
							} else if(heroName01.length() == 5) {
								cout << "--- " << heroName01 << " ----";
							} else if(heroName01.length() == 6) {
								cout << "--- " << heroName01 << " ---";
							} else if(heroName01.length() == 7) {
								cout << "-- " << heroName01 << " ---";
							} else if(heroName01.length() == 8) {
								cout << "-- " << heroName01 << " --";
							} else if(heroName01.length() == 9) {
								cout << "- " << heroName01 << " --";
							} else if(heroName01.length() == 10) {
								cout << "- " << heroName01 << " -";
							}

							cout << "||- Health -||- ";

							// Just some calculations
							hashCount = heroTotalHealth01 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroTotalHealth01 < 100 && heroTotalHealth01 >= 10) {
								cout << "00" << heroTotalHealth01;
							} else if(heroTotalHealth01 < 1000 && heroTotalHealth01 >= 100) {
								cout << "0" << heroTotalHealth01;
							} else {
								cout << heroTotalHealth01;
							}

							cout << " -||\n";

							cout << "||- [3] -||";

							if(heroName01.length() == 1) {
								cout << "----- " << heroName01 << " ------";
							} else if(heroName01.length() == 2) {
								cout << "----- " << heroName01 << " -----";
							} else if(heroName01.length() == 3) {
								cout << "---- " << heroName01 << " -----";
							} else if(heroName01.length() == 4) {
								cout << "---- " << heroName01 << " ----";
							} else if(heroName01.length() == 5) {
								cout << "--- " << heroName01 << " ----";
							} else if(heroName01.length() == 6) {
								cout << "--- " << heroName01 << " ---";
							} else if(heroName01.length() == 7) {
								cout << "-- " << heroName01 << " ---";
							} else if(heroName01.length() == 8) {
								cout << "-- " << heroName01 << " --";
							} else if(heroName01.length() == 9) {
								cout << "- " << heroName01 << " --";
							} else if(heroName01.length() == 10) {
								cout << "- " << heroName01 << " -";
							}

							cout << "||- Attack -||- ";

							// Just some calculations
							hashCount = heroAttack01 / 10;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroAttack01 < 100 && heroAttack01 >= 10) {
								cout << "00" << heroAttack01;
							} else if(heroAttack01 < 1000 && heroAttack01 >= 100) {
								cout << "0" << heroAttack01;
							} else {
								cout << heroAttack01;
							}

							cout << " -||\n";
						} else if(i == 2) {
							cout << "||-----------------------------------------------------------------------||\n";

							cout << "||- [4] -||";

							if(heroName02.length() == 1) {
								cout << "----- " << heroName02 << " ------";
							} else if(heroName02.length() == 2) {
								cout << "----- " << heroName02 << " -----";
							} else if(heroName02.length() == 3) {
								cout << "---- " << heroName02 << " -----";
							} else if(heroName02.length() == 4) {
								cout << "---- " << heroName02 << " ----";
							} else if(heroName02.length() == 5) {
								cout << "--- " << heroName02 << " ----";
							} else if(heroName02.length() == 6) {
								cout << "--- " << heroName02 << " ---";
							} else if(heroName02.length() == 7) {
								cout << "-- " << heroName02 << " ---";
							} else if(heroName02.length() == 8) {
								cout << "-- " << heroName02 << " --";
							} else if(heroName02.length() == 9) {
								cout << "- " << heroName02 << " --";
							} else if(heroName02.length() == 10) {
								cout << "- " << heroName02 << " -";
							}

							cout << "||- Health -||- ";

							// Just some calculations
							hashCount = heroTotalHealth02 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroTotalHealth02 < 100 && heroTotalHealth02 >= 10) {
								cout << "00" << heroTotalHealth02;
							} else if(heroTotalHealth02 < 1000 && heroTotalHealth02 >= 100) {
								cout << "0" << heroTotalHealth02;
							} else {
								cout << heroTotalHealth02;
							}

							cout << " -||\n";

							cout << "||- [5] -||";

							if(heroName02.length() == 1) {
								cout << "----- " << heroName02 << " ------";
							} else if(heroName02.length() == 2) {
								cout << "----- " << heroName02 << " -----";
							} else if(heroName02.length() == 3) {
								cout << "---- " << heroName02 << " -----";
							} else if(heroName02.length() == 4) {
								cout << "---- " << heroName02 << " ----";
							} else if(heroName02.length() == 5) {
								cout << "--- " << heroName02 << " ----";
							} else if(heroName02.length() == 6) {
								cout << "--- " << heroName02 << " ---";
							} else if(heroName02.length() == 7) {
								cout << "-- " << heroName02 << " ---";
							} else if(heroName02.length() == 8) {
								cout << "-- " << heroName02 << " --";
							} else if(heroName02.length() == 9) {
								cout << "- " << heroName02 << " --";
							} else if(heroName02.length() == 10) {
								cout << "- " << heroName02 << " -";
							}

							cout << "||- Attack -||- ";

							// Just some calculations
							hashCount = heroAttack02 / 10;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroAttack02 < 100 && heroAttack02 >= 10) {
								cout << "00" << heroAttack02;
							} else if(heroAttack02 < 1000 && heroAttack02 >= 100) {
								cout << "0" << heroAttack02;
							} else {
								cout << heroAttack02;
							}

							cout << " -||\n";
						} else if(i == 3) {
							cout << "||-----------------------------------------------------------------------||\n";

							cout << "||- [6] -||";

							if(heroName03.length() == 1) {
								cout << "----- " << heroName03 << " ------";
							} else if(heroName03.length() == 2) {
								cout << "----- " << heroName03 << " -----";
							} else if(heroName03.length() == 3) {
								cout << "---- " << heroName03 << " -----";
							} else if(heroName03.length() == 4) {
								cout << "---- " << heroName03 << " ----";
							} else if(heroName03.length() == 5) {
								cout << "--- " << heroName03 << " ----";
							} else if(heroName03.length() == 6) {
								cout << "--- " << heroName03 << " ---";
							} else if(heroName03.length() == 7) {
								cout << "-- " << heroName03 << " ---";
							} else if(heroName03.length() == 8) {
								cout << "-- " << heroName03 << " --";
							} else if(heroName03.length() == 9) {
								cout << "- " << heroName03 << " --";
							} else if(heroName03.length() == 10) {
								cout << "- " << heroName03 << " -";
							}

							cout << "||- Health -||- ";

							// Just some calculations
							hashCount = heroTotalHealth03 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroTotalHealth03 < 100 && heroTotalHealth03 >= 10) {
								cout << "00" << heroTotalHealth03;
							} else if(heroTotalHealth03 < 1000 && heroTotalHealth03 >= 100) {
								cout << "0" << heroTotalHealth03;
							} else {
								cout << heroTotalHealth03;
							}

							cout << " -||\n";

							cout << "||- [7] -||";

							if(heroName03.length() == 1) {
								cout << "----- " << heroName03 << " ------";
							} else if(heroName03.length() == 2) {
								cout << "----- " << heroName03 << " -----";
							} else if(heroName03.length() == 3) {
								cout << "---- " << heroName03 << " -----";
							} else if(heroName03.length() == 4) {
								cout << "---- " << heroName03 << " ----";
							} else if(heroName03.length() == 5) {
								cout << "--- " << heroName03 << " ----";
							} else if(heroName03.length() == 6) {
								cout << "--- " << heroName03 << " ---";
							} else if(heroName03.length() == 7) {
								cout << "-- " << heroName03 << " ---";
							} else if(heroName03.length() == 8) {
								cout << "-- " << heroName03 << " --";
							} else if(heroName03.length() == 9) {
								cout << "- " << heroName03 << " --";
							} else if(heroName03.length() == 10) {
								cout << "- " << heroName03 << " -";
							}

							cout << "||- Attack -||- ";

							// Just some calculations
							hashCount = heroAttack03 / 10;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroAttack03 < 100 && heroAttack03 >= 10) {
								cout << "00" << heroAttack03;
							} else if(heroAttack03 < 1000 && heroAttack03 >= 100) {
								cout << "0" << heroAttack03;
							} else {
								cout << heroAttack03;
							}

							cout << " -||\n";
						} else if(i == 4) {
							cout << "||-----------------------------------------------------------------------||\n";

							cout << "||- [8] -||";

							if(heroName04.length() == 1) {
								cout << "----- " << heroName04 << " ------";
							} else if(heroName04.length() == 2) {
								cout << "----- " << heroName04 << " -----";
							} else if(heroName04.length() == 3) {
								cout << "---- " << heroName04 << " -----";
							} else if(heroName04.length() == 4) {
								cout << "---- " << heroName04 << " ----";
							} else if(heroName04.length() == 5) {
								cout << "--- " << heroName04 << " ----";
							} else if(heroName04.length() == 6) {
								cout << "--- " << heroName04 << " ---";
							} else if(heroName04.length() == 7) {
								cout << "-- " << heroName04 << " ---";
							} else if(heroName04.length() == 8) {
								cout << "-- " << heroName04 << " --";
							} else if(heroName04.length() == 9) {
								cout << "- " << heroName04 << " --";
							} else if(heroName04.length() == 10) {
								cout << "- " << heroName04 << " -";
							}

							cout << "||- Health -||- ";

							// Just some calculations
							hashCount = heroTotalHealth04 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroTotalHealth04 < 100 && heroTotalHealth04 >= 10) {
								cout << "00" << heroTotalHealth04;
							} else if(heroTotalHealth04 < 1000 && heroTotalHealth04 >= 100) {
								cout << "0" << heroTotalHealth04;
							} else {
								cout << heroTotalHealth04;
							}

							cout << " -||\n";

							cout << "||- [9] -||";

							if(heroName04.length() == 1) {
								cout << "----- " << heroName04 << " ------";
							} else if(heroName04.length() == 2) {
								cout << "----- " << heroName04 << " -----";
							} else if(heroName04.length() == 3) {
								cout << "---- " << heroName04 << " -----";
							} else if(heroName04.length() == 4) {
								cout << "---- " << heroName04 << " ----";
							} else if(heroName04.length() == 5) {
								cout << "--- " << heroName04 << " ----";
							} else if(heroName04.length() == 6) {
								cout << "--- " << heroName04 << " ---";
							} else if(heroName04.length() == 7) {
								cout << "-- " << heroName04 << " ---";
							} else if(heroName04.length() == 8) {
								cout << "-- " << heroName04 << " --";
							} else if(heroName04.length() == 9) {
								cout << "- " << heroName04 << " --";
							} else if(heroName04.length() == 10) {
								cout << "- " << heroName04 << " -";
							}

							cout << "||- Attack -||- ";

							// Just some calculations
							hashCount = heroAttack04 / 10;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroAttack04 < 100 && heroAttack04 >= 10) {
								cout << "00" << heroAttack04;
							} else if(heroAttack04 < 1000 && heroAttack04 >= 100) {
								cout << "0" << heroAttack04;
							} else {
								cout << heroAttack04;
							}

							cout << " -||\n";
						}

					}

					cout << border;
					cout << spacer;

					cout << "|| [" << numHeroes * 2 << "] Return\n";

					cout << spacer;

					cout << "|| Please enter a number: ";
					cin >> menuSelection;

					if(menuSelection < 0 || menuSelection > numHeroes * 2) {
						menuError = true;
					}

					while(menuError) {
						cout << spacer;
						cout << "|| " << error << "Number must be between 0 and " << numHeroes * 2 << ".\n";
						cout << spacer;
						cout << "|| Please enter a number: ";
						cin >> menuSelection;

						if(menuSelection >= 0 && menuSelection <= numHeroes * 2) {
							menuError = false;
						}
					}

					if(currentCredits >= 100) {
						if(menuSelection == 0 && heroTotalHealth00 < 1000) {
							heroTotalHealth00   += 50;
							heroCurrentHealth00 = heroTotalHealth00;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 1 && heroAttack00 < 200) {
							heroAttack00        += 10;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 2 && heroActive01 && heroTotalHealth01 < 1000) {
							heroTotalHealth01   += 50;
							heroCurrentHealth01 = heroTotalHealth01;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 3 && heroActive01 && heroAttack01 < 200) {
							heroAttack01        += 10;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 4 && heroActive02 && heroTotalHealth02 < 1000) {
							heroTotalHealth02   += 50;
							heroCurrentHealth02 = heroTotalHealth02;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 5 && heroActive02 && heroAttack02 < 200) {
							heroAttack02        += 10;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 6 && heroActive03 && heroTotalHealth03 < 1000) {
							heroTotalHealth03   += 50;
							heroCurrentHealth03 = heroTotalHealth03;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 7 && heroActive03 && heroAttack03 < 200) {
							heroAttack03        += 10;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 8 && heroActive04 && heroTotalHealth04 < 1000) {
							heroTotalHealth04   += 50;
							heroCurrentHealth04 = heroTotalHealth04;
							currentCredits      -= 100;
							spentCredits        += 100;
						} else if(menuSelection == 9 && heroActive04 && heroAttack04 < 200) {
							heroAttack04        += 10;
							currentCredits      -= 100;
							spentCredits        += 100;
						} 
					}

					if(menuSelection == numHeroes * 2) {
						playing = false;
					}
				}
			}
			playing = true;
		} else if(menuSelection == 3) {

			bool recruited = false;

			while(playing) {
				// Recruit Hero
				cout << border;
				cout << "||---------------------------- Recruit Hero -----------------------------||\n";
				cout << border;

				cout << spacer;

				cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

				cout << spacer;

				if(recruited) {
					cout << "|| CONGRATULATIONS: You have just recruited a new hero.\n";
				}

				cout << spacer;

				cout << "|| Here you can recruit a new hero. Every new hero will be 500 credits\n";
				cout << "|| more expensive than the last.\n";

				cout << spacer;

				if(numHeroes == 1) {
					cout << "|| You currently have " << numHeroes << " hero.";
				} else {
					cout << "|| You currently have " << numHeroes << " heroes.";
				}

				if(numHeroes == 5) {
					cout << " You cannot recruit anymore heroes.\n";
				} else {
					cout << " You can recruit a new hero for " << 500 * numHeroes << "\n";
					cout << "|| credits.\n";
				}

				if(numHeroes == 5) {
					cout << spacer;

					cout << "|| [-] Cannot recruit anymore heroes\n";

					cout << spacer;

					cout << "|| [1] Return\n";

					cout << spacer;

					cout << "|| Please enter a number: ";
					cin >> menuSelection;

					if(menuSelection < 1) {
						menuError = true;
					}

					while(menuError) {
						cout << spacer;
						cout << "|| " << error << "Number must be 1.\n";
						cout << spacer;
						cout << "|| Please enter a number: ";
						cin >> menuSelection;

						if(menuSelection == 1) {
							menuError = false;
						}
					}
					playing = false;
				} else if(currentCredits < 500 * numHeroes) {
					cout << spacer;

					cout << "|| [-] You don't have enough credits\n";

					cout << spacer;

					cout << "|| [1] Return\n";

					cout << spacer;

					cout << "|| Please enter a number: ";
					cin >> menuSelection;

					if(menuSelection != 1) {
						menuError = true;
					}

					while(menuError) {
						cout << spacer;
						cout << "|| " << error << "Number must be 1.\n";
						cout << spacer;
						cout << "|| Please enter a number: ";
						cin >> menuSelection;

						if(menuSelection == 1) {
							menuError = false;
							playing = false;
						}
					}
					playing = false;
				} else {
					cout << spacer;

					cout << "|| [1] Recruit hero for " << 500 * numHeroes << " credits\n";

					cout << spacer;

					cout << "|| [2] Return\n";

					cout << spacer;

					cout << "|| Please enter a number: ";
					cin >> menuSelection;

					if(menuSelection < 1 || menuSelection > 2) {
						menuError = true;
					}

					while(menuError) {
						cout << spacer;
						cout << "|| " << error << "Number must be between 1 and 2.\n";
						cout << spacer;
						cout << "|| Please enter a number: ";
						cin >> menuSelection;

						if(menuSelection == 1 || menuSelection == 2) {
							menuError = false;
						}
					}

					if(menuSelection == 1) {
						cout << spacer;
						cout << "|| You just recruited a new hero.\n";
						cout << spacer;
						cout << "|| What name would you like to give it: ";
						cin >> menuString;

						if(menuString.length() < 1 || menuString.length() > 10) {
							menuError = true;
						}

						while(menuError) {
							cout << spacer;
							cout << "|| " << error << nameErrorMessage << "\n";
							cout << "|| " << error << "[Name: " << menuString << "] - [Characters: " << menuString.length() << "].\n";
							cout << spacer;
							cout << "|| What would you like us to call you? ";
							cin >> menuString;

							if(menuString.length() >= 1 && menuString.length() <= 10) {
								menuError = false;
							}
						}

						if(!heroActive01) {
							heroName01          = menuString;
							heroTotalHealth01   = 50;
							heroCurrentHealth01 = heroTotalHealth01;
							heroAttack01        = 10;
							heroStatus01        = true;
							heroActive01        = true;
						} else if(!heroActive02) {
							heroName02          = menuString;
							heroTotalHealth02   = 50;
							heroCurrentHealth02 = heroTotalHealth02;
							heroAttack02        = 10;
							heroStatus02        = true;
							heroActive02        = true;
						} else if(!heroActive03) {
							heroName03          = menuString;
							heroTotalHealth03   = 50;
							heroCurrentHealth03 = heroTotalHealth03;
							heroAttack03        = 10;
							heroStatus03        = true;
							heroActive03        = true;
						} else if(!heroActive04) {
							heroName04          = menuString;
							heroTotalHealth04   = 50;
							heroCurrentHealth04 = heroTotalHealth04;
							heroAttack04        = 10;
							heroStatus04        = true;
							heroActive04        = true;
						}

						recruited = true;

						currentCredits = currentCredits - (500 * numHeroes);
						spentCredits   = spentCredits + (500 * numHeroes);

						numHeroes++;
					} else if(menuSelection == 2) {
						playing = false;
					}
				}
			}

			playing = true;

		} else if(menuSelection == 4) {
			// Statistics
			cout << border;
			cout << "||----------------------------- Statistics ------------------------------||\n";
			cout << border;

			cout << spacer;

			cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

			cout << spacer;

			cout << "|| Here you can view your current game statistics.\n";

			cout << spacer;

			cout << "|| Total credits won:                         " << wonCredits << "\n";
			cout << "|| Total credits lost:                        " << lostCredits << "\n";
			cout << "|| Total credits spent:                       " << spentCredits << "\n";
			cout << "|| Number of heroes:                          " << numHeroes << "\n";
			cout << "|| Number of heroes that have died:           " << deadHeroes << "\n";
			cout << "|| Population still alive:                    " << populationAlive << "\n";
			cout << "|| Population that have been killed:          " << populationDead << "\n";
			cout << "|| Number of conquest battles won:            " << conquestWins << "\n";
			cout << "|| Number of conquest battles lost:           " << conquestDefeats << "\n";
			cout << "|| Number of friendly battles won:            " << friendlyWins << "\n";
			cout << "|| Number of friendly battles lost:           " << friendlyDefeats << "\n";
			cout << "|| Number of regions destroyed:               " << regionsDestroyed << "\n";

			cout << spacer;

			cout << "|| [1] Return\n";

			cout << spacer;

			cout << "|| Please enter a number: ";
			cin >> menuSelection;

			if(menuSelection != 1) {
				menuError = true;
			}

			while(menuError) {
				cout << spacer;
				cout << "|| " << error << "Number must be between 1.\n";
				cout << spacer;
				cout << "|| Please enter a number: ";
				cin >> menuSelection;

				if(menuSelection == 1) {
					menuError = false;
				}
			}
		} else if(menuSelection == 5) {
			// About Game
			cout << border;
			cout << "||----------------------------- About Game ------------------------------||\n";
			cout << border;

			cout << spacer;

			cout << "|| Credits: " << currentCredits << " || Heroes: " << numHeroes << " || Population: " << populationAlive << " || Wins: " << conquestWins << " || Defeats: " << conquestDefeats << "\n";

			cout << spacer;

			cout << "|| Your species has lived in peace for hundreds of years. Living alone\n";
			cout << "|| in a small region far from any other civilisation. However, another\n";
			cout << "|| species has began to divide and conquer neighbouring lands. They are\n";
			cout << "|| relentless in their pursue for ultimate domination and have destroyed\n";
			cout << "|| everything in their path. For this, they have been nicknamed\n";
			cout << "|| Monsters.\n";

			cout << spacer;

			cout << "|| A council meeting has been held. They have decided that you are their\n";
			cout << "|| best hope for your species. As the meeting was taking place the\n";
			cout << "|| Monsters have established bases in 5 different regions. You are to\n";
			cout << "|| take them out.\n";

			cout << spacer;

			cout << "|| Enter Friendly Battles to win additional credits. In these battles you\n";
			cout << "|| can win or lose credits and if you lose you do not lose your heroes.\n";

			cout << spacer;

			cout << "|| Than when you think you are ready you can battle the Monsters in\n";
			cout << "|| Conquest. But be warned, any recruited hero that dies in battle will be\n";
			cout << "|| lost forever. So make sure you know what you are doing before beginning\n";
			cout << "|| a fight.\n";

			cout << spacer;

			cout << "|| If you have plenty of credits you can recruit more heroes (a total of 5\n";
			cout << "|| can be recruited) or upgrade your heroes individually to improve your\n";
			cout << "|| chances of winning.\n";

			cout << spacer;

			cout << "|| Good luck, hero.\n";

			cout << spacer;

			cout << "|| [1] Return\n";

			cout << spacer;

			cout << "|| Please enter a number: ";
			cin >> menuSelection;

			if(menuSelection != 1) {
				menuError = true;
			}

			while(menuError) {
				cout << spacer;
				cout << "|| " << error << "Number must be between 1.\n";
				cout << spacer;
				cout << "|| Please enter a number: ";
				cin >> menuSelection;

				if(menuSelection == 1) {
					menuError = false;
				}
			}
		} else if(menuSelection == 6) {
			// Stop looping game.
			playing = false;
			cout << spacer;
			cout << "|| Thank you for playing. ";
		}
	}

	// Pause the system. Press any key to continue
	system("PAUSE");
	return 0;
}