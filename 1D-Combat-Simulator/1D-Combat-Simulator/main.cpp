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
	bool newGame = true;

	// If 'true' than the game will loop continuously
	bool playing = true;

	// This will store user input from menu selections
	int menuSelection = 0;
	string menuString;
	// This will be set to 'true' if user inputs an incorrect
	// selection number
	bool menuError = false;

	// This variable will be our error sign
	string error = "ERROR: ";

	// These variables will be used if characters names are too
	// short or too long
	string nameErrorMessage = "Names must be between 1 and 10 characters long. ";

	// These variables will store players statistics
	int wonCredits = 0;
	int spentCredits = 0;
	int currentCredits = 100000;
	int conquestWins = 0;
	int conquestDefeats = 0;
	int friendlyWins = 0;
	int friendlyDefeats = 0;
	int regionsDestroyed = 0;
	int regionsActive = 0;
	int numHeroes = 0;
	int deadHeroes = 0;
	int enemiesKilled = 0;
	int populationAlive = 5000;
	int populationDead = 0;

	// Variables for Hero 00
	string heroName00 = "Jelly Fish";
	int heroHealth00 = 50;
	int heroAttack00 = 10;
	bool heroActive00 = false;

	// Variables for Hero 01
	string heroName01 = "Hero 02";
	int heroHealth01 = 50;
	int heroAttack01 = 10;
	bool heroActive01 = false;

	// Variables for Hero 02
	string heroName02 = "Hero 03";
	int heroHealth02 = 50;
	int heroAttack02 = 10;
	bool heroActive02 = false;

	// Variables for Hero 03
	string heroName03 = "Hero 04";
	int heroHealth03 = 50;
	int heroAttack03 = 10;
	bool heroActive03 = false;

	// Variables for Hero 04
	string heroName04 = "Hero 05";
	int heroHealth04 = 50;
	int heroAttack04 = 10;
	bool heroActive04 = false;

	// Variables for Region 1
	bool r1Active = true;
	bool r1locked = false;

	// Base 1
	int r1b1Units = 1;
	bool r1b1Active = true;
	bool r1b1Defeated = false;
	string r1b1Name00 = "Wilhelmine";
	int r1b1Health00 = 50;
	int r1b1Attack00 = 10;
	bool r1b1Active00 = true;

	// Base 2
	int r1b2Units = 1;
	bool r1b2Active = false;
	bool r1b2Defeated = false;
	string r1b2Name00 = "Stansilaus";
	int r1b2Health00 = 100;
	int r1b2Attack00 = 20;
	bool r1b2Active00 = true;

	// Base 3
	int r1b3Units = 2;
	bool r1b3Active = false;
	bool r1b3Defeated = false;
	string r1b3Name00 = "Sanjuanita";
	int r1b3Health00 = 50;
	int r1b3Attack00 = 10;
	bool r1b3Active00 = true;
	string r1b3Name01 = "Montserrat";
	int r1b3Health01 = 50;
	int r1b3Attack01 = 10;
	bool r1b3Active01 = true;

	// Base 4
	int r1b4Units = 2;
	bool r1b4Active = false;
	bool r1b4Defeated = false;
	string r1b4Name00 = "";
	int r1b4Health00 = 100;
	int r1b4Attack00 = 20;
	bool r1b4Active00 = true;
	string r1b4Name01 = "";
	int r1b4Health01 = 100;
	int r1b4Attack01 = 20;
	bool r1b4Active01 = true;

	// Base 5
	int r1b5Units = 3;
	bool r1b5Active = false;
	bool r1b5Defeated = false;
	string r1b5Name00 = "";
	int r1b5Health00 = 50;
	int r1b5Attack00 = 20;
	bool r1b5Active00 = true;
	string r1b5Name01 = "";
	int r1b5Health01 = 50;
	int r1b5Attack01 = 20;
	bool r1b5Active01 = true;
	string r1b5Name02 = "";
	int r1b5Health02 = 50;
	int r1b5Attack02 = 20;
	bool r1b5Active02 = true;

	// Base 6
	int r1b6Units = 3;
	bool r1b6Active = false;
	bool r1b6Defeated = false;
	string r1b6Name00 = "";
	int r1b6Health00 = 50;
	int r1b6Attack00 = 20;
	bool r1b6Active00 = true;
	string r1b6Name01 = "";
	int r1b6Health01 = 200;
	int r1b6Attack01 = 10;
	bool r1b6Active01 = true;
	string r1b6Name02 = "";
	int r1b6Health02 = 50;
	int r1b6Attack02 = 20;
	bool r1b6Active02 = true;

	// Base 7
	int r1b7Units = 5;
	bool r1b7Active = false;
	bool r1b7Defeated = false;
	string r1b7Name00 = "";
	int r1b7Health00 = 50;
	int r1b7Attack00 = 10;
	bool r1b7Active00 = true;
	string r1b7Name01 = "";
	int r1b7Health01 = 50;
	int r1b7Attack01 = 10;
	bool r1b7Active01 = true;
	string r1b7Name02 = "";
	int r1b7Health02 = 50;
	int r1b7Attack02 = 10;
	bool r1b7Active02 = true;
	string r1b7Name03 = "";
	int r1b7Health03 = 50;
	int r1b7Attack03 = 10;
	bool r1b7Active03 = true;
	string r1b7Name04 = "";
	int r1b7Health04 = 50;
	int r1b7Attack04 = 10;
	bool r1b7Active04 = true;

	// Base 8
	int r1b8Units = 3;
	bool r1b8Active = false;
	bool r1b8Defeated = false;
	string r1b8Name00 = "";
	int r1b8Health00 = 150;
	int r1b8Attack00 = 20;
	bool r1b8Active00 = true;
	string r1b8Name01 = "";
	int r1b8Health01 = 150;
	int r1b8Attack01 = 20;
	bool r1b8Active01 = true;
	string r1b8Name02 = "";
	int r1b8Health02 = 150;
	int r1b8Attack02 = 20;
	bool r1b8Active02 = true;

	// Base 9 - Boss
	int r1b9Units = 5;
	bool r1b9Active = false;
	bool r1b9Defeated = false;
	string r1b9Name00 = "Little Boss";
	int r1b9Health00 = 200;
	int r1b9Attack00 = 40;
	bool r1b9Active00 = true;
	string r1b9Name01 = "";
	int r1b9Health01 = 100;
	int r1b9Attack01 = 20;
	bool r1b9Active01 = true;
	string r1b9Name02 = "";
	int r1b9Health02 = 100;
	int r1b9Attack02 = 20;
	bool r1b9Active02 = true;
	string r1b9Name03 = "";
	int r1b9Health03 = 100;
	int r1b9Attack03 = 20;
	bool r1b9Active03 = true;
	string r1b9Name04 = "";
	int r1b9Health04 = 100;
	int r1b9Attack04 = 20;
	bool r1b9Active04 = true;



	// Process of error checking

	while(playing) {

		// Reset setting (just in case it hasn't already been done)
		menuSelection = 0;
		menuError = false;

		// Create random generator
		default_random_engine randomGenerator;

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

			heroName00 = menuString;
			heroActive00 = true;
			numHeroes = 1;
			newGame = false;
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
										hashCount = heroHealth00 / 50;
										equalCount = 20 - hashCount;

										// Create bar
										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroHealth00 < 100 && heroHealth00 >= 10) {
											cout << "00" << heroHealth00;
										} else if(heroHealth00 < 1000 && heroHealth00 >= 100) {
											cout << "0" << heroHealth00;
										} else {
											cout << heroHealth00;
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
										hashCount = heroHealth01 / 50;
										equalCount = 20 - hashCount;

										// Create bar
										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroHealth01 < 100 && heroHealth01 >= 10) {
											cout << "00" << heroHealth01;
										} else if(heroHealth01 < 1000 && heroHealth01 >= 100) {
											cout << "0" << heroHealth01;
										} else {
											cout << heroHealth01;
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
										hashCount = heroHealth02 / 50;
										equalCount = 20 - hashCount;

										// Create bar
										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroHealth02 < 100 && heroHealth02 >= 10) {
											cout << "00" << heroHealth02;
										} else if(heroHealth02 < 1000 && heroHealth02 >= 100) {
											cout << "0" << heroHealth02;
										} else {
											cout << heroHealth02;
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
										hashCount = heroHealth03 / 50;
										equalCount = 20 - hashCount;

										// Create bar
										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroHealth03 < 100 && heroHealth03 >= 10) {
											cout << "00" << heroHealth03;
										} else if(heroHealth03 < 1000 && heroHealth03 >= 100) {
											cout << "0" << heroHealth03;
										} else {
											cout << heroHealth03;
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
										hashCount = heroHealth04 / 50;
										equalCount = 20 - hashCount;

										// Create bar
										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(heroHealth04 < 100 && heroHealth04 >= 10) {
											cout << "00" << heroHealth04;
										} else if(heroHealth04 < 1000 && heroHealth04 >= 100) {
											cout << "0" << heroHealth04;
										} else {
											cout << heroHealth04;
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

									cout << spacer;

									for(int i = 0; i < r1b1Units; i++) {
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
										hashCount = r1b1Health00 / 50;
										equalCount = 20 - hashCount;

										// Create bar
										for(int i = 0; i < hashCount; i++) {
											cout << "#";
										}
										for(int i = 0; i < equalCount; i++) {
											cout << "=";
										}

										cout << " -||- ";

										if(r1b1Health00 < 100 && r1b1Health00 >= 10) {
											cout << "00" << heroHealth00;
										} else if(r1b1Health00 < 1000 && r1b1Health00 >= 100) {
											cout << "0" << heroHealth00;
										} else {
											cout << r1b1Health00;
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
										hashCount = r1b1Attack00 / 10;
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
									}
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

									// Get the random generation going
									uniform_int_distribution<int> theHero(1, numHeroes);
									uniform_int_distribution<int> theMonster(1, r1b1Units);
									uniform_int_distribution<int> totalUnits(1, (numHeroes + r1b1Units);

									// Store names of two units that will be attacking
									string heroName;
									int heroAttack;
									string monsterName;
									int monsterAttack;
									int heroUnit = theHero(randomGenerator);
									int monsterUnit = theMonster(randomGenerator);

									// Obtain unit details
									if(heroUnit == 1) {
										heroName = heroName00;
										heroAttack = heroAttack00;
									}

									if(monsterUnit == 1) {
										monsterName = r1b1Name00;
										monsterAttack = r1b1Attack00;
									}

									// Time to choose who's attacking
									int variable = totalUnits(randomGenerator);
									int attackingSide;

									if(variable > 0 && variable <= numHeroes) {
										attackingSide = 0;
									} else if(variable > numHeroes <= r1b1Units) {
										attackingSide = 1;
									}


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
							hashCount = heroHealth00 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroHealth00 < 100 && heroHealth00 >= 10) {
								cout << "00" << heroHealth00;
							} else if(heroHealth00 < 1000 && heroHealth00 >= 100) {
								cout << "0" << heroHealth00;
							} else {
								cout << heroHealth00;
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
							hashCount = heroHealth01 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroHealth01 < 100 && heroHealth01 >= 10) {
								cout << "00" << heroHealth01;
							} else if(heroHealth01 < 1000 && heroHealth01 >= 100) {
								cout << "0" << heroHealth01;
							} else {
								cout << heroHealth01;
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
							hashCount = heroHealth02 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroHealth02 < 100 && heroHealth02 >= 10) {
								cout << "00" << heroHealth02;
							} else if(heroHealth02 < 1000 && heroHealth02 >= 100) {
								cout << "0" << heroHealth02;
							} else {
								cout << heroHealth02;
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
							hashCount = heroHealth03 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroHealth03 < 100 && heroHealth03 >= 10) {
								cout << "00" << heroHealth03;
							} else if(heroHealth03 < 1000 && heroHealth03 >= 100) {
								cout << "0" << heroHealth03;
							} else {
								cout << heroHealth03;
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
							hashCount = heroHealth04 / 50;
							equalCount = 20 - hashCount;

							// Create bar
							for(int i = 0; i < hashCount; i++) {
								cout << "#";
							}
							for(int i = 0; i < equalCount; i++) {
								cout << "=";
							}

							cout << " -||- ";

							if(heroHealth04 < 100 && heroHealth04 >= 10) {
								cout << "00" << heroHealth04;
							} else if(heroHealth04 < 1000 && heroHealth04 >= 100) {
								cout << "0" << heroHealth04;
							} else {
								cout << heroHealth04;
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

					if(menuSelection == 0) {
						if(heroHealth00 < 1000) {
							heroHealth00 += 50;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 1) {
						if(heroAttack00 < 200) {
							heroAttack00 += 10;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 2 && heroActive01) {
						if(heroHealth01 < 1000) {
							heroHealth01 += 50;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 3 && heroActive01) {
						if(heroAttack01 < 200) {
							heroAttack01 += 10;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 4 && heroActive02) {
						if(heroHealth02 < 1000) {
							heroHealth02 += 50;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 5 && heroActive02) {
						if(heroAttack02 < 200) {
							heroAttack02 += 10;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 6 && heroActive03) {
						if(heroHealth03 < 1000) {
							heroHealth03 += 50;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 7 && heroActive03) {
						if(heroAttack03 < 200) {
							heroAttack03 += 10;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 8 && heroActive04) {
						if(heroHealth04 < 1000) {
							heroHealth04 += 50;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == 9 && heroActive04) {
						if(heroAttack04 < 200) {
							heroAttack04 += 10;
							currentCredits -= 100;
							spentCredits += 100;
						}
					} else if(menuSelection == numHeroes * 2) {
						playing = false;
						cout << playing;
					}
					cout << playing;
				}
				cout << playing;
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

						if(numHeroes == 1) {
							heroName01 = menuString;
							heroActive01 = true;
						} else if(numHeroes == 2) {
							heroName02 = menuString;
							heroActive02 = true;
						} else if(numHeroes == 3) {
							heroName03 = menuString;
							heroActive03 = true;
						} else if(numHeroes == 4) {
							heroName04 = menuString;
							heroActive04 = true;
						}

						recruited = true;

						currentCredits = currentCredits - (500 * numHeroes);
						spentCredits = spentCredits + (500 * numHeroes);

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
			cout << "|| Number of regions still active:            " << regionsActive << "\n";

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