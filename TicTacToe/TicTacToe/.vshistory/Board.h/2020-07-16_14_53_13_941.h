#ifndef BOARD_H
#define BOARD_H
#include<string>
class Board {
	char matriz[3][3];
	int spaceAvailable;
public:
	Board();
	bool setSimb(int, int, char);
	char getSimb(int, int);
	bool haveWinner();
	bool haveTie();
};
#endif // !BOARD_H