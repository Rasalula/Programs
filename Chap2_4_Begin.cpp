#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;
int main()
{

	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	int maxPerTurn = 0;
	string playerNames[2];
	
	srand(time(0));
	
	
	cout << "Player 1, Please enter your name : \n";
	cin >> playerNames[0];
	cout << "Player 2, Please enter your name : \n";
	cin >> playerNames[1];
	
	
	
	
	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
	
	maxPerTurn = (MAX_TURN * chipsInPile);
	
	cout << "You can only take upto " << maxPerTurn << endl;


return 0;
}
