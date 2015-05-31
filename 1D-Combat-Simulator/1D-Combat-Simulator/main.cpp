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

	// Variables for Region 1

	bool   r1Active  = true;
	bool   r1locked  = false;
	
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
	bool   r1b1Status01        = true;
	bool   r1b1Active01        = true;
	string r1b1Name02          = "Monster 3";
	int    r1b1TotalHealth02   = 50;
	int    r1b1CurrentHealth02 = r1b1TotalHealth02;
	int    r1b1Attack02        = 10;
	bool   r1b1Status02        = true;
	bool   r1b1Active02        = true;
	string r1b1Name03          = "Monster 4";
	int    r1b1TotalHealth03   = 50;
	int    r1b1CurrentHealth03 = r1b1TotalHealth03;
	int    r1b1Attack03        = 10;
	bool   r1b1Status03        = true;
	bool   r1b1Active03        = true;
	string r1b1Name04          = "Monster 5";
	int    r1b1TotalHealth04   = 50;
	int    r1b1CurrentHealth04 = r1b1TotalHealth04;
	int    r1b1Attack04        = 10;
	bool   r1b1Status04        = true;
	bool   r1b1Active04        = true;

	// Base 2

	int    r1b2Units = 0;
	bool   r1b2Counted = false;
	bool   r1b2Active = true;
	bool   r1b2Defeated = false;
	string r1b2Name00 = "Monster 1";
	int    r1b2TotalHealth00 = 50;
	int    r1b2CurrentHealth00 = r1b1TotalHealth00;
	int    r1b2Attack00 = 10;
	bool   r1b2Active00 = true;
	string r1b2Name01 = "Monster 2";
	int    r1b2TotalHealth01 = 50;
	int    r1b2CurrentHealth01 = r1b1TotalHealth01;
	int    r1b2Attack01 = 10;
	bool   r1b2Active01 = true;
	string r1b2Name02 = "Monster 3";
	int    r1b2TotalHealth02 = 50;
	int    r1b2CurrentHealth02 = r1b1TotalHealth02;
	int    r1b2Attack02 = 10;
	bool   r1b2Active02 = true;
	string r1b2Name03 = "Monster 4";
	int    r1b2TotalHealth03 = 50;
	int    r1b2CurrentHealth03 = r1b1TotalHealth03;
	int    r1b2Attack03 = 10;
	bool   r1b2Active03 = true;
	string r1b2Name04 = "Monster 5";
	int    r1b2TotalHealth04 = 50;
	int    r1b2CurrentHealth04 = r1b1TotalHealth04;
	int    r1b2Attack04 = 10;
	bool   r1b2Active04 = true;

	// Base 3

	int    r1b3Units = 0;
	bool   r1b3Counted = false;
	bool   r1b3Active = true;
	bool   r1b3Defeated = false;
	string r1b3Name00 = "Monster 1";
	int    r1b3TotalHealth00 = 50;
	int    r1b3CurrentHealth00 = r1b1TotalHealth00;
	int    r1b3Attack00 = 10;
	bool   r1b3Active00 = true;
	string r1b3Name01 = "Monster 2";
	int    r1b3TotalHealth01 = 50;
	int    r1b3CurrentHealth01 = r1b1TotalHealth01;
	int    r1b3Attack01 = 10;
	bool   r1b3Active01 = true;
	string r1b3Name02 = "Monster 3";
	int    r1b3TotalHealth02 = 50;
	int    r1b3CurrentHealth02 = r1b1TotalHealth02;
	int    r1b3Attack02 = 10;
	bool   r1b3Active02 = true;
	string r1b3Name03 = "Monster 4";
	int    r1b3TotalHealth03 = 50;
	int    r1b3CurrentHealth03 = r1b1TotalHealth03;
	int    r1b3Attack03 = 10;
	bool   r1b3Active03 = true;
	string r1b3Name04 = "Monster 5";
	int    r1b3TotalHealth04 = 50;
	int    r1b3CurrentHealth04 = r1b1TotalHealth04;
	int    r1b3Attack04 = 10;
	bool   r1b3Active04 = true;

	// Base 4

	int    r1b4Units    = 0;
	bool   r1b4Counted  = false;
	bool   r1b4Active   = false;
	bool   r1b4Defeated = false;
	string r1b4Name00   = "";
	int    r1b4Health00 = 50;
	int    r1b4Attack00 = 10;
	bool   r1b4Active00 = true;
	string r1b4Name01   = "";
	int    r1b4Health01 = 50;
	int    r1b4Attack01 = 10;
	bool   r1b4Active01 = true;
	string r1b4Name02   = "";
	int    r1b4Health02 = 50;
	int    r1b4Attack02 = 10;
	bool   r1b4Active02 = true;
	string r1b4Name03   = "";
	int    r1b4Health03 = 50;
	int    r1b4Attack03 = 10;
	bool   r1b4Active03 = true;
	string r1b4Name04   = "";
	int    r1b4Health04 = 50;
	int    r1b4Attack04 = 10;
	bool   r1b4Active04 = true;

	// Base 5

	int    r1b5Units    = 0;
	bool   r1b5Counted  = false;
	bool   r1b5Active   = false;
	bool   r1b5Defeated = false;
	string r1b5Name00   = "";
	int    r1b5Health00 = 50;
	int    r1b5Attack00 = 10;
	bool   r1b5Active00 = true;
	string r1b5Name01   = "";
	int    r1b5Health01 = 50;
	int    r1b5Attack01 = 10;
	bool   r1b5Active01 = true;
	string r1b5Name02   = "";
	int    r1b5Health02 = 50;
	int    r1b5Attack02 = 10;
	bool   r1b5Active02 = true;
	string r1b5Name03   = "";
	int    r1b5Health03 = 50;
	int    r1b5Attack03 = 10;
	bool   r1b5Active03 = true;
	string r1b5Name04   = "";
	int    r1b5Health04 = 50;
	int    r1b5Attack04 = 10;
	bool   r1b5Active04 = true;

	// Base 6

	int    r1b6Units    = 0;
	bool   r1b6Counted  = false;
	bool   r1b6Active   = false;
	bool   r1b6Defeated = false;
	string r1b6Name00   = "";
	int    r1b6Health00 = 50;
	int    r1b6Attack00 = 10;
	bool   r1b6Active00 = true;
	string r1b6Name01   = "";
	int    r1b6Health01 = 50;
	int    r1b6Attack01 = 10;
	bool   r1b6Active01 = true;
	string r1b6Name02   = "";
	int    r1b6Health02 = 50;
	int    r1b6Attack02 = 10;
	bool   r1b6Active02 = true;
	string r1b6Name03   = "";
	int    r1b6Health03 = 50;
	int    r1b6Attack03 = 10;
	bool   r1b6Active03 = true;
	string r1b6Name04   = "";
	int    r1b6Health04 = 50;
	int    r1b6Attack04 = 10;
	bool   r1b6Active04 = true;

	// Base 7

	int    r1b7Units    = 0;
	bool   r1b7Counted  = false;
	bool   r1b7Active   = false;
	bool   r1b7Defeated = false;
	string r1b7Name00   = "";
	int    r1b7Health00 = 50;
	int    r1b7Attack00 = 10;
	bool   r1b7Active00 = true;
	string r1b7Name01   = "";
	int    r1b7Health01 = 50;
	int    r1b7Attack01 = 10;
	bool   r1b7Active01 = true;
	string r1b7Name02   = "";
	int    r1b7Health02 = 50;
	int    r1b7Attack02 = 10;
	bool   r1b7Active02 = true;
	string r1b7Name03   = "";
	int    r1b7Health03 = 50;
	int    r1b7Attack03 = 10;
	bool   r1b7Active03 = true;
	string r1b7Name04   = "";
	int    r1b7Health04 = 50;
	int    r1b7Attack04 = 10;
	bool   r1b7Active04 = true;

	// Base 8

	int    r1b8Units    = 0;
	bool   r1b8Counted  = false;
	bool   r1b8Active   = false;
	bool   r1b8Defeated = false;
	string r1b8Name00   = "";
	int    r1b8Health00 = 50;
	int    r1b8Attack00 = 10;
	bool   r1b8Active00 = true;
	string r1b8Name01   = "";
	int    r1b8Health01 = 50;
	int    r1b8Attack01 = 10;
	bool   r1b8Active01 = true;
	string r1b8Name02   = "";
	int    r1b8Health02 = 50;
	int    r1b8Attack02 = 10;
	bool   r1b8Active02 = true;
	string r1b8Name03   = "";
	int    r1b8Health03 = 50;
	int    r1b8Attack03 = 10;
	bool   r1b8Active03 = true;
	string r1b8Name04   = "";
	int    r1b8Health04 = 50;
	int    r1b8Attack04 = 10;
	bool   r1b8Active04 = true;

	// Base 9 - Boss

	int    r1b9Units    = 0;
	bool   r1b9Counted  = false;
	bool   r1b9Active   = false;
	bool   r1b9Defeated = false;
	string r1b9Name00   = "";
	int    r1b9Health00 = 50;
	int    r1b9Attack00 = 10;
	bool   r1b9Active00 = true;
	string r1b9Name01   = "";
	int    r1b9Health01 = 50;
	int    r1b9Attack01 = 10;
	bool   r1b9Active01 = true;
	string r1b9Name02   = "";
	int    r1b9Health02 = 50;
	int    r1b9Attack02 = 10;
	bool   r1b9Active02 = true;
	string r1b9Name03   = "";
	int    r1b9Health03 = 50;
	int    r1b9Attack03 = 10;
	bool   r1b9Active03 = true;
	string r1b9Name04   = "";
	int    r1b9Health04 = 50;
	int    r1b9Attack04 = 10;
	bool   r1b9Active04 = true;

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

					cout << "|| [1] Region 1\n";
					cout << "|| [2] Region 2\n";
					cout << "|| [3] Region 3\n";
					cout << "|| [4] Region 4\n";
					cout << "|| [5] Region 5\n";

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

							if(menuSelection == 1) {

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

								if(menuSelection == 1) {
									// Battle time

									// Acquire total health points for heroes and monsters

									// Heroes

									heroTotalHealth += heroTotalHealth00;
									heroTotalHealth += heroTotalHealth01;
									heroTotalHealth += heroTotalHealth02;
									heroTotalHealth += heroTotalHealth03;
									heroTotalHealth += heroTotalHealth04;
									heroCurrentHealth = heroTotalHealth;

									// Monsters

									monsterTotalHealth += r1b1TotalHealth00;
									monsterTotalHealth += r1b1TotalHealth01;
									monsterTotalHealth += r1b1TotalHealth02;
									monsterTotalHealth += r1b1TotalHealth03;
									monsterTotalHealth += r1b1TotalHealth04;
									monsterCurrentHealth = monsterTotalHealth;

									// Loop battle until we have a winner

									while(playing) {
										// Get the random generation going

										uniform_int_distribution<int> theHero(1, numHeroes);
										uniform_int_distribution<int> theMonster(1, r1b1Units);
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
												r1b1CurrentHealth00  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth00 <= 0) {
													r1b1TotalHealth00 = 0;
													r1b1Attack01      = 0;
													r1b1Status00      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 2) {
												r1b1CurrentHealth01  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth01 <= 0) {
													r1b1TotalHealth01 = 0;
													r1b1Attack01      = 0;
													r1b1Status01      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 3) {
												r1b1CurrentHealth02  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth02 <= 0) {
													r1b1TotalHealth02 = 0;
													r1b1Attack02      = 0;
													r1b1Status02      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 4) {
												r1b1CurrentHealth03  -= heroAttack;
												monsterCurrentHealth -= heroAttack;

												if(r1b1CurrentHealth03 <= 0) {
													r1b1TotalHealth03 = 0;
													r1b1Attack03      = 0;
													r1b1Status03      = false;
													r1b1Units--;
												}
											} else if(monsterUnit == 5) {
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
												heroCurrentHealth00 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth00 <= 0) {
													heroStatus00 = false;
													numHeroes--;
												}
											} else if(heroUnit == 2) {
												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth01 <= 0) {
													heroTotalHealth01 = 0;
													heroAttack01      = 0;
													heroStatus01      = false;
													heroUnit--;
												}
											} else if(heroUnit == 3) {
												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth02 <= 0) {
													heroTotalHealth02 = 0;
													heroAttack02      = 0;
													heroStatus02      = false;
													heroUnit--;
												}
											} else if(heroUnit == 4) {
												heroCurrentHealth01 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth03 <= 0) {
													heroTotalHealth03 = 0;
													heroAttack03      = 0;
													heroStatus03      = false;
													heroUnit--;
												}
											} else if(heroUnit == 5) {
												heroCurrentHealth04 -= monsterAttack;
												heroCurrentHealth   -= monsterAttack;

												if(heroCurrentHealth04 <= 0) {
													heroTotalHealth04 = 0;
													heroAttack04      = 0;
													heroStatus04      = false;
													heroUnit--;
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

										cout << "||---------- Heroes -----------------||\n";
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

										currency       = (heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00 + heroCurrentHealth00) * numHeroes;

										wonCredits     += currency;
										currentCredits += wonCredits;
									}

									uniform_int_distribution<int> killed(5, (r1b1Units * 10));

									population = killed(randomGenerator);

									populationAlive -= population;
									populationDead  += population;

									if(!heroStatus00 && heroActive00) {
										heroCurrentHealth00 = heroTotalHealth00;
										heroStatus00        = true;
										numHeroes++;
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
										cout << "||- After a long and exhausting battle you come out victorious. You have\n";
										cout << "||- successfully destroyed the base and all monsters within it.";

										cout << spacer;

										cout << "||- Credits won:       " << currency << "\n";
									} else if(!win) {
										cout << "||- After a long and exhausting battle you succumb to bitter defeat at the\n";
										cout << "||- hands of the monsters. With all of your recruited heroes dead, and you\n";
										cout << "||- defeated there is little that stands in the way of the monsters as they\n";
										cout << "||- lay slaughter to the population.\n";

										cout << spacer;

										cout << "||- Credits lost:      " << currency << "\n";
									}

									cout << spacer;

									cout << "||- Heroes killed:     " << losses << "\n";
									cout << "||- Enemies killed:    " << kills << "\n";
									cout << "||- Population killed: " << population << "\n";

									cout << spacer;

								}
							} else if(menuSelection == 2) {
								// Base 2
							} else if(menuSelection == 3) {
								// Base 3
							} else if(menuSelection == 4) {
								// Base 4
							} else if(menuSelection == 5) {
								// Base 5
							} else if(menuSelection == 6) {
								// Base 6
							} else if(menuSelection == 7) {
								// Base 7
							} else if(menuSelection == 8) {
								// Base 8
							} else if(menuSelection == 9) {
								// Base 9
							} else if(menuSelection == 10) {
								playing = false;
							}
						}
						playing = true;
					} else if(menuSelection == 2) {
						// Region 2
					} else if(menuSelection == 3) {
						// Region 3
					} else if(menuSelection == 4) {
						// Region 4
					} else if(menuSelection == 5) {
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
						cout << "|| " << error << "Number must be between 1.\n";
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

					if(menuSelection == 0 && heroTotalHealth00 < 1000) {
						heroTotalHealth00   += 50;
				        heroCurrentHealth00 = heroTotalHealth00;
						currentCredits      -= 100;
						spentCredits        += 100;
					} else if(menuSelection == 1 && heroAttack00 < 200) {
						heroAttack00   += 10;
						currentCredits -= 100;
						spentCredits   += 100;
					} else if(menuSelection == 2 && heroActive01 && heroTotalHealth01 < 1000) {
						heroTotalHealth01   += 50;
						heroCurrentHealth01 = heroTotalHealth01;
					    currentCredits      -= 100;
						spentCredits        += 100;
					} else if(menuSelection == 3 && heroActive01 && heroAttack01 < 200) {
						heroAttack01   += 10;
						currentCredits -= 100;
						spentCredits   += 100;
					} else if(menuSelection == 4 && heroActive02 && heroTotalHealth02 < 1000) {
						heroTotalHealth02   += 50;
						heroCurrentHealth02 = heroTotalHealth02;
						currentCredits      -= 100;
						spentCredits        += 100;
					} else if(menuSelection == 5 && heroActive02 && heroAttack02 < 200) {
						heroAttack02   += 10;
						currentCredits -= 100;
						spentCredits   += 100;
					} else if(menuSelection == 6 && heroActive03 && heroTotalHealth03 < 1000) {
						heroTotalHealth03   += 50;
						heroCurrentHealth03 = heroTotalHealth03;
						currentCredits      -= 100;
						spentCredits        += 100;
					} else if(menuSelection == 7 && heroActive03 && heroAttack03 < 200) {
						heroAttack03   += 10;
						currentCredits -= 100;
						spentCredits   += 100;
					} else if(menuSelection == 8 && heroActive04 && heroTotalHealth04 < 1000) {
						heroTotalHealth04   += 50;
						heroCurrentHealth04 = heroTotalHealth04;
						currentCredits      -= 100;
						spentCredits        += 100;
					} else if(menuSelection == 9 && heroActive04 && heroAttack04 < 200) {
						heroAttack04   += 10;
						currentCredits -= 100;
						spentCredits   += 100;
					} else if(menuSelection == numHeroes * 2) {
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
							heroName01 = menuString;
							heroTotalHealth01 = 50;
							heroCurrentHealth01 = heroTotalHealth01;
							heroAttack01 = 10;
							heroActive01 = true;
						} else if(!heroActive02) {
							heroName02 = menuString;
							heroTotalHealth02 = 50;
							heroCurrentHealth02 = heroTotalHealth02;
							heroAttack02 = 10;
							heroActive02 = true;
						} else if(!heroActive03) {
							heroName03 = menuString;
							heroTotalHealth03 = 50;
							heroCurrentHealth03 = heroTotalHealth03;
							heroAttack03 = 10;
							heroActive03 = true;
						} else if(!heroActive04) {
							heroName04 = menuString;
							heroTotalHealth04 = 50;
							heroCurrentHealth04 = heroTotalHealth04;
							heroAttack04 = 10;
							heroActive04 = true;
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