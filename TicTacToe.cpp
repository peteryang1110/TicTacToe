#include <iostream>
#include <vector>
#include <string>

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

vector<vector<int>> PlaceMarker(int i, bool marker, vector<vector<int>> board) {
   switch (i) {
   case 1:
      board[0][0] = marker + 1;
      return board;
      break;
   case 2:
      board[0][1] = marker + 1;
      return board;
      break;
   case 3:
      board[0][2] = marker + 1;
      return board;
      break;
   case 4:
      board[1][0] = marker + 1;
      return board;
      break;
   case 5:
      board[1][1] = marker + 1;
      return board;
      break;
   case 6:
      board[1][2] = marker + 1;
      return board;
      break;
   case 7:
      board[2][0] = marker + 1;
      return board;
      break;
   case 8:
      board[2][1] = marker + 1;
      return board;
      break;
   case 9:
      board[2][2] = marker + 1;
      return board;
      break;
   default:
      return board;
   }
}

void Play(vector<vector<int>> board) {

   DisplayBoard(board);

   bool player = true;

   for (int i = 0; i < 9; i++) {
      board = PlaceMarker(GetPlayerChoice(), player, board);

      if (player) {
         player = false;
      } else {
         player = true;
      }

      DisplayBoard(board);
   }
}



int main() {
   vector<vector<int> > board = CreateBoard();
   Play(board);
}