#include<iostream>
#include<string>
#include"MyGames.h"
#include"GamesList.h"
using namespace std;

int main()
{
	MyGames newGame;
	newGame.getGameInput();
	cout << newGame << endl;
	

	GamesList theList;
	theList.AddGame();
	theList.ShowList();

	

	system("pause");
	return 0;
}