#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > CreateBoard() {
  return vector<vector<int> >(3, vector<int>(3, 0));
}

int main() {
  vector<vector<int> > board = CreateBoard();
}