#include <iostream>
using namespace std;

int main(){
	int scores[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	string player1;
	string player2;
	cout << "Player one: ";
	cin >> player1;
	cout << "\nPlayer two: ";
	cin >> player2;
	int p1size = player1.size();
	int p2size = player2.size();
	int p1score = 0;
	int p2score = 0;
	for (int i=0; i<p1size; i++){
		p1score += (char)(toupper(player1[i])-65);
	}
	for (int i=0; i<p2size; i++){
		p2score += (char)(toupper(player2[i])-65);
	}
	if (p1score > p2score){
		cout << "Player 1 Wins\n";
	} else if (p2score > p1score){
		cout << "Player 2 Wins\n";
	} else {
		cout << "Tie\n";
	}
}
