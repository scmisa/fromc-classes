#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

int main()
{
	int a, player;

	cout << "Choose rock paper or scissors \n";
	cout << "0. Rock \n";
	cout << "1. Paper \n";
	cout << "2. Scissors \n";
	cout << "Any other number = Exit Game \n";

	cin >> player;
	if (player == 0) {
		cout << "You chose rock \n";
	}
	else if (player == 1) {
		cout << "You chose paper \n";

	}
	else if(player==2){
		cout << "You chose scissors \n";

	}
	else {
		return 1;
	}

	srand(time(0));
	for (int i = 0; i < 1; i++) {
		a = rand()%3;
		if (a == 0) {
			cout << "Enemy chose rock \n";
		}
		else if (a == 1) {
			cout << "Enemy chose paper \n";

		}
		else {
			cout << "Enemy chose scissors \n";

		}
	}
	
	if (a == player) {
		cout << "Draw\n";
	}
	else if (player == 0 && a != 1) {
		cout << "You won\n";
	}
	else if (player == 0 && a == 1) {
		cout << "You lost\n";
	}
	else if (player == 1 && a != 2) {
		cout << "You won\n";
	}
	else if (player == 1 && a == 2) {
		cout << "You lost\n";
	}
	else if (player == 2 && a != 1) {
		cout << "You won\n";
	}
	else if (player == 2 && a == 1) {
		cout << "You lost\n";
	}
	
	return 0;
}

