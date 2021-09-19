#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void drawBoard(string Data[]);
void userChoice(string Data[]);
void gkDebug(string Data[]);
bool winCondition(string Data[], string test);
void gameOver();
bool checkWinner(string Data[]);

int main()
{
	int size = 9;
	string Data[size] = { " ", " ", " ", " ", " ", " ", " ", " ", " "};
	bool gameComplete = false;

	while (!gameComplete) {
		drawBoard(Data);
		gameComplete = checkWinner(Data);
		if (!gameComplete) {
			userChoice(Data);
		}
	}
	return (0);
} // main

void drawBoard(string Data[]) {
	//system ( "CLS" );
	// gkDebug(Data);
	cout << endl << "  gk's TicTacToe" << endl << endl;
	cout << "   " << Data[7] << "  |  " << Data[8] << "  |  " << Data[9] << endl;
	cout << "  " << "---" << "-+-" << "---" << "-+-" << "---" << endl;
	cout << "   " << Data[3] << "  |  " << Data[4] << "  |  " << Data[5] << endl;
	cout << "  " << "---" << "-+-" << "---" << "-+-" << "---" << endl;
	cout << "   " << Data[0] << "  |  " << Data[1] << "  |  " << Data[2] << endl;
} // drawBoard
void userChoice(string Data[]) {
	int choice;
	cout << endl << " Choose: ";
	cin >> choice;
	if (Data[(choice - 1)] == " ") {
		Data[(choice - 1)] = "X";
	} else {
		cout << "You failed to choose wisely!" << endl;
		system("pause");
	}
} // userChoice
void gkDebug(string Data[]) {
	cout << endl;
	cout << " *-------------------* " << endl;
	cout << " |Array Debug Tracker|" << endl;
	cout << " | 1 2 3 4 5 6 7 8 9 |" << endl;
	cout << " | ";
	for (size_t i = 0; i < 9; i++) {
		cout << Data[i] << " ";
	}
	cout << "|" << endl << " *-------------------*" << endl;
} // gkDebug

bool winCondition(string Data[], string test) {
	test = "X";

	// cout << "incoming complete: " << test << endl;
	if ((Data[1 - 1] == test) && (Data[2 - 1] == test) && (Data[3 - 1] == test)) {
		gameOver();
		return(true);
	} else if ((Data[4 - 1] == test) && (Data[5 - 1] == test) && (Data[6 - 1] == test)) {
		gameOver();
		return(true);
	} else if ((Data[7 - 1] == test) && (Data[8 - 1] == test) && (Data[9 - 1] == test)) {
		gameOver();
		return(true);
	} else if ((Data[1 - 1] == test) && (Data[4 - 1] == test) && (Data[7 - 1] == test)) {
		gameOver();
		return(true);
	} else if ((Data[2 - 1] == test) && (Data[5 - 1] == test) && (Data[8 - 1] == test)) {
		gameOver();
		return(true);
	} else if ((Data[3 - 1] == test) && (Data[6 - 1] == test) && (Data[9 - 1] == test)) {
		gameOver();
		return(true);
	} else if ((Data[1 - 1] == test) && (Data[5 - 1] == test) && (Data[9 - 1] == test)) {
		gameOver();
		return(true);
	} else if ((Data[7 - 1] == test) && (Data[5 - 1] == test) && (Data[3 - 1] == test)) {
		gameOver();
		return(true);
	} else {
		return(false);
	}
} // winCondition


void gameOver() {
	cout << endl << "  Victory!!!  ";
	cout << '\a';
}         // gameOver

bool checkWinner(string Data[]) {
	if (winCondition(Data, "X")) {
		cout << "Player X has won!";
		return(1);
	}else if (winCondition(Data, "O")) {
		cout << "Player O has won!";
		return(1);
	} else {
		return(0);
	}
} // checkWinner