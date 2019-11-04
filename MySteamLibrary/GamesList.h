#pragma once
#include<iostream>
#include<string>
#include"MyGames.h"
using namespace std;

class GamesList
{
	MyGames games[100];
	int gameNo;
	int totalGames;
	char answer;

public:
	GamesList();
	void AddGame();
	void ShowList();
	void AnotherGame();
};