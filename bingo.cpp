#include <iostream>
#include<string>
#include<time.h>

using namespace std;

float main() {
		
	char board[3][3] = { ' ' };
	int x, y, k, i ;
	
	for (x = 0; x < 3;x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	for (k = 0; k < 5; k++) {
		
		int comx = rand() % 3;
		int comy = rand() % 3;
		
		cout << "(x,y) x좌표: ";
		cin >> x ;
		cout << "      y좌표: ";
		cin >> y;
		//board[x][y] =  (k % 2 == 0) ? 'X' : '0'; 
		board[x][y] = 'X';
		
		if (k != 4) {
			do {
				int comx = rand() % 3;
				int comy = rand() % 3;

			} while (board[comx][comy] == 'X' || board[comx][comy] == 'O');

			board[comx][comy] = 'O';
		}
		
		for (i = 0; i < 3; i++) {
			cout << "---ㅣ---ㅣ---" << endl;
			cout << board[i][0] << "  ㅣ " << board[i][1] << " ㅣ " << board[i][2] << endl;
		}

		cout << "---ㅣ---ㅣ---" << endl;

	}
	
	return 0;
}
