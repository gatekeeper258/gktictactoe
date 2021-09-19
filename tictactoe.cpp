#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void drawBoard(string Data[]);
void userChoice(string Data[]);
void gkDebug(string Data[]);

int main()
{
	int size = 9;
	string Data[size] = { " ", " ", " ", " ", " ", " ", " ", " ", " "};
	bool gameComplete = false;

	while (!gameComplete) {
		drawBoard(Data);
		userChoice(Data);
	}
	return (0);
} // main

void drawBoard(string Data[]) {
	system ( "CLS" );
	// gkDebug(Data);
	cout << endl << "  gk's TicTacToe" << endl << endl;
	cout << "   " << Data[0] << "  |  " << Data[1] << "  |  " << Data[2] << endl;
	cout << "  " << "---" << "-+-" << "---" << "-+-" << "---" << endl;
	cout << "   " << Data[3] << "  |  " << Data[4] << "  |  " << Data[5] << endl;
	cout << "  " << "---" << "-+-" << "---" << "-+-" << "---" << endl;
	cout << "   " << Data[6] << "  |  " << Data[7] << "  |  " << Data[8] << endl;
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