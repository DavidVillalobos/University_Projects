#ifndef GAME_H
#define GAME_H
#include"ViewConsole.h"
#include"Board.h"
#include"Player.h"
class Game{
	Board tablero;
	Player j1, j2;
public:
	Game();
	void start();
	void play();
	~Game();
};
#endif GAME_H