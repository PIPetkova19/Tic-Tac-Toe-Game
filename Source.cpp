#include <iostream>
using namespace std;
void GameName() {
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << endl;
	cout << "    ///////    /////////     ////////         ////////     ////     ///////" << endl;
	cout << "      //          //        //                  //       //  //    //" << endl;
	cout << "     //          //        //                  //      //   //    //" << endl;
	cout << "    //          //        //                  //     ////////    //   " << endl;
	cout << "   //       ////////     ////////            //    //     //    ///////" << endl;
	cout << endl;
	cout << "                       ///////     //////      ///////" << endl;
	cout << "                         //      //    //     //" << endl;
	cout << "                        //      //    //     /////// " << endl;
	cout << "                       //      //    //     //" << endl;
	cout << "                      //       //////      ////////" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << endl;
}
char GameBoard(char GameBoardPlaces[]) {
	cout << endl;
	cout << "                     ----------------------------- " << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |    " << GameBoardPlaces[0] << "    |    " << GameBoardPlaces[1] << "    |    " << GameBoardPlaces[2] << "    |" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |-----------------------------|" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |    " << GameBoardPlaces[3] << "    |    " << GameBoardPlaces[4] << "    |    " << GameBoardPlaces[5] << "    |" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |-----------------------------|" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |    " << GameBoardPlaces[6] << "    |    " << GameBoardPlaces[7] << "    |    " << GameBoardPlaces[8] << "    |" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                     -----------------------------" << endl;
	return 1;
}
void GameBetween2Players() {
	cout << "\n" << "                   Player 1 (X) ------- Player 2 (O)" << endl;
	char GameBoardPlaces[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	GameBoard(GameBoardPlaces);
	int Player1, Player2;
	int Counter = 0;
	for (int i = 0; i < 100; i++) {
		if (Counter == 3) {
			if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6])) ||
				((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8])) ||
				((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8])) || ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5])) || ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]))) {
				if (GameBoardPlaces[0] == 'X' || GameBoardPlaces[8] == 'X' || GameBoardPlaces[4] == 'X' || GameBoardPlaces[2] == 'X') {
					cout << "Player 1 wins!!!" << endl;
				}
				break;
			}
			else if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6])) ||
				((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8])) ||
				((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8])) || ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5])) || ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]))) {
				if (GameBoardPlaces[0] == 'O' || GameBoardPlaces[8] == 'O' || GameBoardPlaces[4] == 'O' || GameBoardPlaces[2] == 'O') {
					cout << "Player 2 wins!!!" << endl;
				}
				break;
			}
		}
		else {
			cout << "Player 1, enters a number:";
			cin >> Player1;
			int CaseDefault1 = 0;
			for (int k = 0; k < 100; k++) {
				if (CaseDefault1 == 1) {
					cout << "Incorrect Input!" << endl;
					cout << "Try again and enter a valid number from the board.\n" << endl;
					cin >> Player1;
					CaseDefault1 = 0;
				}
				switch (Player1) {
				case 1: {
					GameBoardPlaces[0] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 2: {
					GameBoardPlaces[1] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 3: {
					GameBoardPlaces[2] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 4: {
					GameBoardPlaces[3] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 5: {
					GameBoardPlaces[4] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 6: {
					GameBoardPlaces[5] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 7: {
					GameBoardPlaces[6] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 8: {
					GameBoardPlaces[7] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 9: {
					GameBoardPlaces[8] = 'X';
					GameBoard(GameBoardPlaces);
					break;
				}

				}
				if (CaseDefault1 == 0) {
					if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6])) ||
						((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8])) ||
						((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8])) || ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5])) || ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]))) {
						if (GameBoardPlaces[0] == 'X' || GameBoardPlaces[8] == 'X' || GameBoardPlaces[4] == 'X' || GameBoardPlaces[2] == 'X') {
							cout << "Player 1 wins!!!" << endl;
						}
					}
					break;
				}
			}
			cout << "Player 2, enters a number:";
			cin >> Player2;
			int CaseDefault2 = 0;
			for (int j = 0; j < 1; j++) {
				if (CaseDefault2 == 1) {
					cout << "Incorrect Input!" << endl;
					cout << "Try again and enter a valid number from the board.\n" << endl;
					cin >> Player2;
					CaseDefault2 = 0;
				}
				switch (Player2) {
				case 1: {
					GameBoardPlaces[0] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 2: {
					GameBoardPlaces[1] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 3: {
					GameBoardPlaces[2] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 4: {
					GameBoardPlaces[3] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 5: {
					GameBoardPlaces[4] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 6: {
					GameBoardPlaces[5] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 7: {
					GameBoardPlaces[6] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 8: {
					GameBoardPlaces[7] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}
				case 9: {
					GameBoardPlaces[8] = 'O';
					GameBoard(GameBoardPlaces);
					break;
				}

				default: {
					CaseDefault2++;
					if (((((GameBoardPlaces[0] == 'O') == (GameBoardPlaces[1] == 'O')) && ((GameBoardPlaces[1] == 'O') == (GameBoardPlaces[2] == 'O'))) || (((GameBoardPlaces[0] == 'O') == (GameBoardPlaces[4] == 'O')) && (GameBoardPlaces[4] == 'O') == (GameBoardPlaces[8] == 'O')) || (((GameBoardPlaces[0] == 'O') == (GameBoardPlaces[3] == 'O')) && (GameBoardPlaces[3] == 'O') == (GameBoardPlaces[6] == 'O')) ||
						(((GameBoardPlaces[1] == 'O') == (GameBoardPlaces[4] == 'O')) && ((GameBoardPlaces[4] == 'O') == (GameBoardPlaces[7] == 'O'))) || (((GameBoardPlaces[0] == 'O') == (GameBoardPlaces[4] == 'O')) && (GameBoardPlaces[4] == 'O') == (GameBoardPlaces[8] == 'O')) || (((GameBoardPlaces[2] == 'O') == (GameBoardPlaces[5] == 'O')) && (GameBoardPlaces[5] == 'O') == (GameBoardPlaces[8] == 'O')) ||
						(((GameBoardPlaces[6] == 'O') == (GameBoardPlaces[7] == 'O')) && ((GameBoardPlaces[7] == 'O') == (GameBoardPlaces[8] == 'O'))) || (((GameBoardPlaces[3] == 'O') == (GameBoardPlaces[4] == 'O')) && (GameBoardPlaces[4] == 'O') == (GameBoardPlaces[5] == 'O')) || (((GameBoardPlaces[2] == 'O') == (GameBoardPlaces[4] == 'O')) && (GameBoardPlaces[4] == 'O') == (GameBoardPlaces[6] == 'O')))) {
						cout << "Player 2 wins!!!" << endl;
					}
					break;
				}
					   if (CaseDefault2 == 0) {
						   if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6])) ||
							   ((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7])) || ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8])) || ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8])) ||
							   ((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8])) || ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5])) || ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]))) {
							   if (GameBoardPlaces[0] == 'O' || GameBoardPlaces[8] == 'O' || GameBoardPlaces[4] == 'O' || GameBoardPlaces[2] == 'O') {
								   cout << "Player 2 wins!!!" << endl;
							   }
						   }
						   break;
					   }
				}
			}
			Counter++;
		}
	}
}
void GameBetweenComputerAnd1Player() {
	cout << "\n" << "                   Player 1 (X) ------- Computer (O)" << endl;
	char GameBoardPlaces[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	GameBoard(GameBoardPlaces);
}
int main()
{
	GameName();
	int NumberChoice;
	cout << "                Enter number '2' for game between 2 Players." << endl;
	cout << "           Enter number '1' for game between 1 Player and Computer." << endl;
	cout << "                            Enter number: ";
	cin >> NumberChoice;
	cout << endl;
	if (NumberChoice == 1) {
		GameBetweenComputerAnd1Player();
	}
	else if (NumberChoice == 2) {
		GameBetween2Players();
	}
	else {
		cout << "Incorrect input!";
	}
}