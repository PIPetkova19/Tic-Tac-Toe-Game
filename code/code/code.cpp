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

// this function places the name of the game

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
// this function places the game board

void GameBetween2Players() 

{
	cout << "\n" << "                   Player 1 (X) ------- Player 2 (O)" << endl;
	char GameBoardPlaces[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	GameBoard(GameBoardPlaces);
	int Player1, Player2;
	int Counter = 0;
	int winnerCounter = 0;
	
	for (int i = 0; i < 100; i++) {
		if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2]) && GameBoardPlaces[0] == 'X')
			|| ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8]) && GameBoardPlaces[0] == 'X') 
			|| ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6]) && GameBoardPlaces[0] == 'X') 
			|| ((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7]) && GameBoardPlaces[1] == 'X')
			|| ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8]) && GameBoardPlaces[2] == 'X')
			|| ((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8]) && GameBoardPlaces[6] == 'X')
			|| ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5]) && GameBoardPlaces[3] == 'X')
			|| ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]) && GameBoardPlaces[2] == 'X'))
		{
			cout << "\n                       !!!  Player 1 wins  !!!" << endl;
			winnerCounter = 1;
			break;
		}

		// this function shows when player 1 wins
		
		else if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2]) && GameBoardPlaces[0] == 'O')
			|| ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8]) && GameBoardPlaces[0] == 'O')
			|| ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6]) && GameBoardPlaces[0] == 'O')
			|| ((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7]) && GameBoardPlaces[1] == 'O')
			|| ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8]) && GameBoardPlaces[2] == 'O')
			|| ((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8]) && GameBoardPlaces[6] == 'O')
			|| ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5]) && GameBoardPlaces[3] == 'O')
			|| ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]) && GameBoardPlaces[2] == 'O')) 
		
		{
			cout << "\n                       !!!  Player 2 wins  !!!" << endl;
			winnerCounter = 1;
			break;
		}

		// this function shows when player 2 wins
		
		cout << "\n                     Player 1, enters a number : ";
		cin >> Player1;
		int CaseDefault1 = 0;
		
		for (int k = 0; k < 100; k++) {
			
			if (CaseDefault1 == 1) {
				cout << endl;
				cout << "\n                       !!!  Incorrect Input  !!!" << endl;
				cout << "           Try again and enter a valid number from the board\n" << endl;
				GameBoard(GameBoardPlaces);
				cout << "                     Player 1, enters a number : ";
				cin >> Player1;
				CaseDefault1 = 0;
			}
			
			switch (Player1) {
			
			case 1: {
				if (GameBoardPlaces[0] == '1') {
					GameBoardPlaces[0] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
			
			case 2: {
				if (GameBoardPlaces[1] == '2') {
					GameBoardPlaces[1] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
			
			case 3: {
				if (GameBoardPlaces[2] == '3') {
					GameBoardPlaces[2] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
			
			case 4: {
				if (GameBoardPlaces[3] == '4') {
					GameBoardPlaces[3] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
			
			case 5: {
				if (GameBoardPlaces[4] == '5') {
					GameBoardPlaces[4] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
			
			case 6: {
				if (GameBoardPlaces[5] == '6') {
					GameBoardPlaces[5] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
		
			case 7: {
				if (GameBoardPlaces[6] == '7') {
					GameBoardPlaces[6] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
		
			case 8: {
				if (GameBoardPlaces[7] == '8') {
					GameBoardPlaces[7] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
			
			case 9: {
				if (GameBoardPlaces[8] == '9') {
					GameBoardPlaces[8] = 'X';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault1++;
				}
				break;
			}
			
			default: {
				CaseDefault1++;
				break;
			}
			}
			
			// this function shows when it is time for player 1 to place the X's on the board
			
			if (CaseDefault1 == 0) {
				if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2]) && GameBoardPlaces[0] == 'X')
					|| ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8]) && GameBoardPlaces[0] == 'X')
					|| ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6]) && GameBoardPlaces[0] == 'X')
					|| ((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7]) && GameBoardPlaces[1] == 'X')
					|| ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8]) && GameBoardPlaces[2] == 'X')
					|| ((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8]) && GameBoardPlaces[6] == 'X')
					|| ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5]) && GameBoardPlaces[3] == 'X')
					|| ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]) && GameBoardPlaces[2] == 'X'))
				
				{
					cout << "\n                       !!!  Player 1 wins  !!!" << endl;
					winnerCounter = 1;
				}
				break;
			}
			
			// this command shows the situations, when player 1 will win
		}
		
		if (winnerCounter == 1) {
			break;
		}
		
		if (Counter == 9) {
			cout << "\n                          !!!  Game Draw  !!!" << endl;
			break;
		}
		
		// this is for the situation, when the game is draw
		
		cout << "\n                     Player 2, enters a number : ";
		cin >> Player2;
		int CaseDefault2 = 0;
		for (int j = 0; j < 100; j++) {
			
			if (CaseDefault2 == 1) 
			
			{
				cout << endl;
				cout << "\n                       !!!  Incorrect Input  !!!" << endl;
				cout << "           Try again and enter a valid number from the board\n" << endl;
				GameBoard(GameBoardPlaces);
				cout << "                     Player 2, enters a number : ";
				cin >> Player2;
				CaseDefault2 = 0;
			}
			
			switch (Player2) {
			case 1: 
			{
				if (GameBoardPlaces[0] == '1')
				{
					GameBoardPlaces[0] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else 
				{
					CaseDefault2++;
				}
				break;
			}
			case 2:
			{
				if (GameBoardPlaces[1] == '2')
				{
					GameBoardPlaces[1] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else
				{
					CaseDefault2++;
				}
				break;
			}
			case 3:
			{
				if (GameBoardPlaces[2] == '3') 
				{
					GameBoardPlaces[2] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else 
				{
					CaseDefault2++;
				}
				break;
			}
			case 4:
			{
				if (GameBoardPlaces[3] == '4') {
					GameBoardPlaces[3] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else {
					CaseDefault2++;
				}
				break;
			}
			case 5:
			{
				if (GameBoardPlaces[4] == '5') 
				{
					GameBoardPlaces[4] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else 
				{
					CaseDefault2++;
				}
				break;
			}
			case 6: 
			{
				if (GameBoardPlaces[5] == '6') 
				{
					GameBoardPlaces[5] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else
				{
					CaseDefault2++;
				}
				break;
			}
			case 7:
			{
				if (GameBoardPlaces[6] == '7') 
				{
					GameBoardPlaces[6] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else 
				{
					CaseDefault2++;
				}
				break;
			}
			case 8:
			{
				if (GameBoardPlaces[7] == '8') 
				{
					GameBoardPlaces[7] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else 
				{
					CaseDefault2++;
				}
				break;
			}
			
			case 9: 
			{
				if (GameBoardPlaces[8] == '9')
				{
					GameBoardPlaces[8] = 'O';
					GameBoard(GameBoardPlaces);
					Counter++;
				}
				else 
				{
					CaseDefault2++;
				}
				break;
			}
			default: 
			{
				CaseDefault2++;
				break;
			}
			}
			// this function is for when it is time for player 2 to make his moves
			if (CaseDefault2 == 0) {
				if (((GameBoardPlaces[0] == GameBoardPlaces[1]) && (GameBoardPlaces[1] == GameBoardPlaces[2]) && GameBoardPlaces[0] == 'O')
				|| ((GameBoardPlaces[0] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[8]) && GameBoardPlaces[0] == 'O')
				|| ((GameBoardPlaces[0] == GameBoardPlaces[3]) && (GameBoardPlaces[3] == GameBoardPlaces[6]) && GameBoardPlaces[0] == 'O')
				|| ((GameBoardPlaces[1] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[7]) && GameBoardPlaces[1] == 'O')
				|| ((GameBoardPlaces[2] == GameBoardPlaces[5]) && (GameBoardPlaces[5] == GameBoardPlaces[8]) && GameBoardPlaces[2] == 'O')
				|| ((GameBoardPlaces[6] == GameBoardPlaces[7]) && (GameBoardPlaces[7] == GameBoardPlaces[8]) && GameBoardPlaces[6] == 'O')
				|| ((GameBoardPlaces[3] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[5]) && GameBoardPlaces[3] == 'O')
				|| ((GameBoardPlaces[2] == GameBoardPlaces[4]) && (GameBoardPlaces[4] == GameBoardPlaces[6]) && GameBoardPlaces[2] == 'O')) 
				
				{
					cout << "\n                       !!!  Player 2 wins  !!!" << endl;
					winnerCounter = 1;
				}
				
				break;

			}
			
			// this function shows, in which situation player 2 need to place O's ion the board

		}
		if (winnerCounter == 1)
		
		{
			break;
		}
		
		if (Counter == 9) 
		
		{
			cout << "\n                          !!!  Game Draw  !!!" << endl;
			break;
		}
		
		// this is for the situation, when the game is draw

	}
}
int main()

{
	GameName();
	cout << endl;
	GameBetween2Players();
}

// this is the main function of the game