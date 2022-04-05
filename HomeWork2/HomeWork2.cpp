#include <iostream>
#include <string>
using namespace std;

// Задание 2
enum symbols {
	X = 'X',
	O = 'O',
	null = ' '
};

//Задание 4
struct plan {
	// переменные для никнеймов игроков, их id, в случае победы или ничьи для вывода на экран, массив для обозначения хода игры, логическая переменная bool для определения победителя
	unsigned char board[3][3] = { {X, O, null}, {X, null, O}, {O, X, null} };
	string name1, name2; 
	short id;
	string Owin = " win!";
	string Xwin = " win!";
	string draw = "Draw!";
	short turn[9];
	bool isname1Win;

};



int main() {
	// Задание 1
	short int num1 = 234;
	int num2 = 4895;
	long long bignum = 350.000;
	char symbol = 'V';
	bool logic = true;
	float num3 = 3.5;
	double longFloat = 456.789;
	unsigned char shortNum = 10;


	//Задание 3

	//unsigned char gameboard[3][3] = {{X, O, null}, {X, null, O}, {O, X, null}};
	plan game;
	cout << game.board[0][0] << " " << game.board[0][1] << " " << game.board[0][2] << endl;
	cout << game.board[1][0] << " " << game.board[1][1] << " " << game.board[1][2] << endl;
	cout << game.board[2][0] << " " << game.board[2][1] << " " << game.board[2][2] << endl;

}