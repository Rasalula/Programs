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
	
	string playerNames[2];
	
	// seed the random number generator
	srand(time(0));
	
	// ask thenplayers for their namers, then store in array
	cout << "Player 1, Please enter your name : ";
	cin >> playerNames[0];
	cout << "\n Thanks, and good luck! \n\n";
	cout << "Player 2, Please enter your name : ";
	cin >> playerNames[1];
	cout << "\n Thanks, and good luck! \n\n";
	
	//start the game with a random number of chips in the pile
	
	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout << "This round will start with " << chipsInPile << " chips in the pile\n\n";
	if (player1Turn)
	{
		cout << playerNames[0] << ", how many chips would you like?\n";
	}
	else
	{
		cout << playerNames[1] << ", how many chips would you like?\n";
	}	
	cout << "You can only take upto " << static_cast<int>(MAX_TURN * chipsInPile) << endl;
	cin >> chipsTaken;

return 0;
}
