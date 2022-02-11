#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > CreateBoard() {
  return vector<vector<int> >(3, vector<int>(3, 0));
}

void DisplayBoard(vector<vector<int> > board) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      switch (board[i][j]) {
        case 1:
          cout << " O";
          break;
        case 2:
          cout << " X";
          break;
        default:
          cout << " " << j + i * 3 + 1;
      }
      if (j != 2) {
        cout << " |";
      }
    }
    if (i != 2) {
      cout << endl
           << "--- --- ---"
           << endl;
    }
  }
  cout << endl;
}

int GetPlayerChoice() {
  string choice = "";
  cout << "Please enter your choice: ";
  cin >> choice;
  return stoi(choice);
}

int main() {
  vector<vector<int> > board = CreateBoard();
  DisplayBoard(board);
}