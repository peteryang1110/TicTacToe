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

void PlaceMarker(int i, int marker) {

   switch (i) {
   case 1:
      break;
   case 2:
      break;
   case 3:
      break;
   case 4:
      break;
   case 5:
      break;
   case 6:
      break;
   case 7:
      break;
   case 8:
      break;
   case 9:
      break;

   }
}

int main() {
  vector<vector<int> > board = CreateBoard();
  DisplayBoard(board);
}