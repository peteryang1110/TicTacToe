#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > CreateBoard() {
  return vector<vector<int> >(3, vector<int>(3, 0));
}

void DisplayBoard(vector<vector<int>> board) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
  vector<vector<int> > board = CreateBoard();
  DisplayBoard(board);
}