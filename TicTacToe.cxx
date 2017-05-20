/*
 Brain Storm
 Functions I need:
 * Board
 * Players Turn
 * Checking to see if game is over (whether tie game or one of the two players have won)
*/

void playTicTacToe();
void renderBoard();
void playerSelection();
void checkWin();

#include <iomanip>
#include <iostream>
using namespace std;
char square[9];
char piece = ' ';
bool pt = true; // player's Turn, true = player One and false = player Two
int result; // Use to check if the game is finish or not. 1 = Game Over and someone won, 2 = Game Over and tie game, 3 = Moves are still available.


int main()
{
	playTicTacToe();
	return 0;
}

// print the board that looks like a 3x3 matric with 9 slots
	// and no outside border. Board can be made with | and - symbols.
	// should look something like:
	//           |           |           
	//           |           | 
	//           |           | 
	//           |           | 
	//           |           | 
	// ---------------------------------- 
	//           |           | 
	//           |           | 
	//           |           | 
	//           |           | 
	//           |           | 
	// ----------------------------------  
	//           |           |   
	//           |           | 
	//           |           | 
	//           |           | 
	//           |           | 


void renderBoard() {
		
	cout << "Player One - X       Player Two - O" << endl;
	cout << "           |           |           " << endl;
	cout << "           |           |           " << endl;
	cout << "     " << square[0] << "      |      " << square[1] << "     |      " << square[2] << "     " << endl;
	cout << "           |           |           " << endl;
	cout << "           |           |           " << endl;
	cout << "---------------------------------- " << endl;
	cout << "           |           |           " << endl;
	cout << "           |           |           " << endl;
	cout << "     " << square[3] << "      |      " << square[4] << "     |      " << square[5] << "     " << endl;
	cout << "           |           |           " << endl;
	cout << "           |           |           " << endl;
	cout << "---------------------------------- " << endl;
	cout << "           |           |           " << endl;
	cout << "           |           |           " << endl;
	cout << "     " << square[6] << "      |      " << square[7] << "     |      " << square[8] << "     " << endl;
	cout << "           |           |           " << endl;
	cout << "           |           |           " << endl;

	
}

// Two player game where players take turns placing their respective piece
	// ( X's or O's) in an available slot. If a player achieves three pieces in a 
	// row, then that player wins. If all slots get filled and neither of the players
	// achieve three pieces in a row, then the game is considered tied and players are prompted for a rematch.
	
	// For simplicity, the first player will be assigned X's and the second player O's
	
void playTicTacToe() {
	
	// set up
	result = 3;
	pt = true;
	for (int i = 0; i < 9; i++) {
		square[i] = 0;
	}
	
	
	//game play
	cout << "Time to play TicTacToe" << endl;
	cout << "The tiles are numbered 1 through 9. 1,2,3 are on the top row from left to right, 4,5,6 the middle row, and 7,8,9 on the bottom row. Player One starts." << endl;
	while (result == 3) {
		playerSelection();
		renderBoard(); 
		checkWin();
	}

	// rematch
	cout << "Do you want to play again? (y/n)" << endl;
	char input;
	cin >> input;
	if (input == 'y')
		playTicTacToe();
	else 
		cout << "Hope to see you again soon" << endl;
	
}

void playerSelection() {
	cout << "Please type in your move." << endl;
	char input;
	cin >> setw(1) >> input;
	
	if (pt) {
		piece = 'X';
	} else piece = 'O';
	
	switch(input) {
		case '1' : 
		if (!square[0]) {
			square[0] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '2' : 
		if (!square[1]) {
			square[1] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '3' : 
		if (!square[2]) {
			square[2] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '4' : 
		if (!square[3]) {
			square[3] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '5' : 
		if (!square[4]) {
			square[4] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '6' : 
		if (!square[5]) {
			square[5] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '7' : 
		if (!square[6]) {
			square[6] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '8' : 
		if (!square[7]) {
			square[7] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		case '9' : 
		if (!square[8]) {
			square[8] = piece;
			pt = !pt;
			break;
		} else {
			cout << "this slot has already been choosen" << endl;
			playerSelection();
			break;
		}
		default :
			cout << "please choose a number between 1-9" << endl;
			playerSelection();
	}
}

	// this function will take the current state of the board an check if 
	// case 1 : one of the two players have won and scored three consecutive pieces, resulting  in returning number "1", thus indicating a win
	// case 2 : the slots are completely filled which results in returning the number "2", thus indicating a tie.
	// case 3 : Neither players have won and slots are still available to play, resulting in returning the number "3", indicating players to keep playing.
void checkWin() {
	if (((square[0] && square[1] && square[2]) && (square[0] == square[1] && square[1] == square[2])) || 
	((square[0] && square[3] && square[6]) && (square[0] == square[3] && square[3] == square[6])) || 
	((square[0] && square[4] && square[8]) && (square[0] == square[4] && square[4] == square[8])) ||
	((square[1] && square[4] && square[7]) && (square[1] == square[4] && square[4] == square[7])) || 
	((square[2] && square[5] && square[8]) && (square[2] == square[5] && square[5] == square[8])) || 
	((square[2] && square[4] && square[6]) && (square[2] == square[4] && square[4] == square[6])) ||
	((square[3] && square[4] && square[5]) && (square[3] == square[4] && square[4] == square[5])) || 
	((square[6] && square[7] && square[8]) && (square[6] == square[7] && square[7] == square[8]))) {
			if (!pt) {
				cout << "Congratulations! Player One Wins" << endl;
				result = 1;
			} else  {
				cout << "Congratulations! Player Two Wins" << endl;
				result = 1;
			}
	}
	else if (square[0] && square[1] && square[2] && square[3] && square[4] && square[5] && square[6] && square[7] && square[8]) {
		cout << "Tie Game" << endl;
		result = 2;
	}	
}

