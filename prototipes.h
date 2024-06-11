#pragma once
// генерация колоды карт
int** generateCardsSet();
// отображение колоды
void showCards(int** array);
//перемешиввание колоды
void shuffle(int** array);
// создание игроков (max 6, min 3)
string* createPlayers(int count);
// стартовая раздача денег
int* createCash(int countPlayers, int countMoney);
// отображение инфе о игроках
void showPlayers(string*& players, int*& cash, int count);