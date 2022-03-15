class Solution {
 public:
  void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    /*for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n / 2; j++) {
                swap(matrix[i][j], matrix[i][n - 1 - j]);
            }
        }*/

    int m = n - 1;
    for (int i = 0; i <= n / 2; i++) {
      for (int j = i; j < m - i; j++) {
        //cout << i << " " << j << "\n";
        //cout << m - j << " " << i << "\n";
        //cout << m - i << " " << m - j << "\n";
        //cout << j << " " << m - i << "\n";
        //cout << "\n";
        int tmp = matrix[i][j];
        matrix[i][j] = matrix[m - j][i];
        matrix[m - j][i] = matrix[m - i][m - j];
        matrix[m - i][m - j] = matrix[j][m - i];
        matrix[j][m - i] = tmp;
      }
    }

    /*for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }*/
  }
};