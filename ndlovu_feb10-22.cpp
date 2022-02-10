// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstring>
#include <ctime>
#include <windows.h>

using namespace std;

string secrets[5][5] = { {"car", "cheque($1000)", "debt($1000)", "donation($1000)","insuarance"},
							{"trip(Orlando)","girlfriend","job","house","scholarship"},
							{"loan($2000)","factory","company","nothing","lottery($25000)"},
							{"beer", "host a party", "good fortune","bad luck","bankrupt"},
							{"convict","dumped","loser","genuis","chill"} };
void line0(int row, int col) {
	if (col == 0) {
		cout << "secret unveiled " << secrets[0][0] << endl;
		cout << "Congaratulations!, you just won a car!" << endl;
	}
	else if (col == 1) {
		cout << "secret unveiled " << secrets[0][1] << endl;
		cout << "You have been awarded a cheque!" << endl;
	}
	else if (col == 2) {
		cout << "secret unveiled " << secrets[0][2] << endl;
		cout << "Oops, you now have a debt of $1000" << endl;
	}
	else if (col == 3) {
		cout << "secret unveiled " << secrets[0][3] << endl;
		cout << "Oh no! you have to donate $1000 tomorrow" << endl;
	}
	else if (col == 4) {
		cout << "secret unveiled " << secrets[0][4] << endl;
		cout << "Awesome, you now have free health insuarance for one full year" << endl;
	}
	
}
void line1(int row, int col) {
	if (col == 0) {
		cout << "secret unveiled" << secrets[1][0] << endl;
		cout << "Awesome!, you got yourself a free trip to Orlando" << endl;
	}
	else if (col == 1) {
		cout << "secret unveiled " << secrets[1][1] << endl;
		cout << "You got yourself a girlfriend/boyfriend" << endl;
	}
	else if (col == 2) {
		cout << "secret unveiled " << secrets[1][2] << endl;
		cout << "Now you got a job, Congratulations" << endl;
	}
	else if (col == 3) {
		cout << "secret unveiled " << secrets[1][3] << endl;
		cout << "You just won a house" << endl;
	}
	else if (col == 4) {
		cout << "secret unveiled " << secrets[1][4] << endl;
		cout << "You got a scholarship" << endl;
	}

}
void line2(int row, int col) {
	if (col == 0) {
		cout << "secret unveiled " << secrets[2][0] << endl;
		cout << "Oops, now you have a loan to pay for" << endl;
	}
	else if (col == 1) {
		cout << "secret unveiled " << secrets[2][1] << endl;
		cout << "Now you own a factory" << endl;
	}
	else if (col == 2) {
		cout << "secret unveiled " << secrets[2][2] << endl;
		cout << "Wonderful!, now you have a company" << endl;
	}
	else if (col == 3) {
		cout << "secret unveiled " << secrets[2][3] << endl;
		cout << "oops, there is nothing in here" << endl;
	}
	else if (col == 4) {
		cout << "secret unveiled " << secrets[2][4] << endl;
		cout << "yes!, you haave won the lottery($25000)" << endl;
	}

}
void line3(int row, int col) {
	if (col == 0) {
		cout << "secrets unveiled " << secrets[3][0] << endl;
		cout << "hahaha, you just won a truck of beer" << endl;
	}
	else if (col == 1) {
		cout << "secret unveiled " << secrets[3][1] << endl;
		cout << "you  should host a party tonight" << endl;
	}
	else if (col == 2) {
		cout << "secret unveiled " << secrets[3][1] << endl;
		cout << "you shaall have good fortune in life" << endl;
	}
	else if (col == 3) {
		cout << "secret unveiled " << secrets[3][1] << endl;
		cout << "You shall have bad luck very soon" << endl;
	}
	else if (col == 4) {
		cout << "secret unveiled " << secrets[3][1] << endl;
		cout << "Now you are bankrupt, sad isn't it?" << endl;
	}
}
void line4(int row, int col) {
	if (col == 0) {
		cout << "secret unveiled " << secrets[4][0] << endl;
		cout << "You are a convict, the police is looking for you" << endl;
	}
	else if (col == 1) {
		cout << "secret unveiled " << secrets[4][1] << endl;
		cout << "oh shame, you have been dumped by your girlfriend/boyfriend" << endl;
	}
	else if (col == 2) {
		cout << "secret unveiled " << secrets[4][2] << endl;
		cout << "You are officially a loser from today henceforth" << endl;
	}
	else if (col == 3) {
		cout << "secret unveiled " << secrets[4][3] << endl;
		cout << "you will be a genuis soon" << endl;
	}
	else if (col == 4) {
		cout << "secret unveiled " << secrets[4][4] << endl;
		cout << "You really need to take a chill pill you know, ten chil pills if possible" << endl;
	}
}

int main() {
	char x;
	do {
		srand(unsigned(time(0)));
		int comprow = rand() % 5;
		int compcol = rand() % 5;

		int row, col;
		cout << "Hi, this is Rubicon, I am a bot in the game you are about to play" << endl;
		cout << "Please enter the row and colum number to unveil a secret about your fate" << endl;
		cin >> row >> col;
		while ((row > 4 || row < 0) && (col > 4 || col < 0)) {
			cout << "index out of bounds" << endl;
			cout << "Please enter the row and column number to unveil a secret about your fate" << endl;
			cin >> row >> col;

		}
		{
			cout << "Rubicon has chosen " << comprow << " " << compcol << ": " << secrets[comprow][compcol] << endl;
			if (row == comprow && col == compcol) {
				cout << "It is a match, you and Rubicon have the same fate!" << endl;
			}
		}
		{
			if (row == 0) { line0(row, col); }
			else if (row == 1) { line1(row, col); }
			else if (row == 2) { line1(row, col); }
			else if (row == 3) { line1(row, col); }
			else if (row == 4) { line1(row, col); }
		}
		cout << "Rubicon wants to display the all the secrets for you, wait a few seconds please......" << endl;
		Sleep(3000);
		cout << "Hold on he is retrievng the information, hold on a moment......" << endl;
		Sleep(4000);
		for (int a = 0; a < 5; a++) {
			for (int b = 0; b < 5; b++) {
				cout << left << setw(20) <<secrets[a][b] << "  ";
				
			}
			cout << endl;
		}
		cout << "Do you want to play the game again?(y/n)" << endl;
		cin >> x;
	} while (x == 'y' || x == 'Y');

	
	return 0;
}
	

	


