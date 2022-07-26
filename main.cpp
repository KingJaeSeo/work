#include <iostream>
#include "Input.h"
#include "Draw.h"
#include "Process.h"
#include "Player.h"
#include "Map.h"

using namespace std;

int main()
{
	MyPlayer = new struct Player();
	struct Player* MyPlayer2 = MyPlayer;

	if (MyPlayer)
	{
		MyPlayer->X = 1;
		MyPlayer->Y = 1;
	}

	while (true)
	{
		int KeyCode = Input();
		Process(KeyCode);
		Draw();
	}

	delete MyPlayer;
	MyPlayer = nullptr;

	//dangling pointer
	//MyPlayer2->X++;


	

	return 0;
}






