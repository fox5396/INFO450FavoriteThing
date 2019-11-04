#include<iostream>
#include<string>
#include"MyGames.h"
#include"GamesList.h"
using namespace std;

GamesList::GamesList()
{
	gameNo = 0;
	totalGames = 0;
	answer = 0;
}

void GamesList::AddGame()
{
	games[gameNo].getGameInput();

	if ()
	{
	
		
		totalGames += games[gameNo].getQuantity();
	}
}
void GamesList::ShowList()
{
	int i;
	for (i = 0; i < gameNo; i++)
		cout << games[i];
	cout << games[i] << endl;
	cout << "The total number of games is " << totalGames << endl;
}
void GamesList::AnotherGame()
{
	;
	cout << "Would you like to enter another game? if so, enter 'y' " << endl;
	cin >> answer;
	while (answer == 'y' || answer == 'Y')
	{
		return;
	}
	exit;
	
}