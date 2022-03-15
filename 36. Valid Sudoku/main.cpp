class Solution {
 public:
  bool verify(vector<bool>& rec, char current) {
    int asciiNum = int(current);
    if (asciiNum != 46) {
      asciiNum -= 49;
      if (rec[asciiNum]) {
        return false;
      }
      rec[asciiNum] = true;
    }
    return true;
  }

  bool isValidSudoku(vector<vector<char>>& board) {
    // row
    for (int i = 0; i < 9; i++) {
      vector<bool> rec(9, false);
      for (int j = 0; j < 9; j++) {
        if (!verify(rec, board[i][j])) {
          return false;
        }
      }
    }

    // column
    for (int i = 0; i < 9; i++) {
      vector<bool> rec(9, false);
      for (int j = 0; j < 9; j++) {
        if (!verify(rec, board[j][i])) {
          return false;
        }
      }
    }

    // box
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        vector<bool> rec(3, false);
        for (int p = 0; p < 3; p++) {
          for (int q = 0; q < 3; q++) {
            if (!verify(rec, board[i * 3 + p][j * 3 + q])) {
              return false;
            }
          }
        }
      }
    }

    return true;
  }
};

/*
//cout << board[i][j] << " " << int(board[i][j]) << "\n";

int asciiNum = int(board[i][j]);
if (asciiNum == 46) {
    continue;
}
asciiNum -= 49;
//cout << asciiNum << " " << vect[asciiNum] << "\n";
if (vect[asciiNum]) {
    return false;
}
vect[asciiNum] = true;
*/