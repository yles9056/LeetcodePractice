class Solution {
 public:
  /*void discover(vector<vector<char>>& grid, vector<vector<bool>>& discovered, int x, int y, int m, int n) {
        if (x < 0 || x >= m || y < 0 || y >= n) {
            return;
        }
        
        if (discovered[x][y]) {
            return;
        }
        
        //cout << x << ", " << y << "\n";
        discovered[x][y] = true;
        if (grid[x][y] == '0') {
            return;
        }
        
        discover(grid, discovered, x, y + 1, m, n);
        discover(grid, discovered, x, y - 1, m, n);
        discover(grid, discovered, x + 1, y, m, n);
        discover(grid, discovered, x - 1, y, m, n);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> discovered(m, vector<bool> (n, false));
        int count = 0;
        
        for(int x = 0; x < m; x++) {
            for(int y = 0; y < n; y++) {
                if (discovered[x][y]) {
                    continue;
                }
                
                if (grid[x][y] == '1') {
                    discover(grid, discovered, x, y, m, n);
                    count++;
                }
            }
        }
        
        return count;
    }*/

  void discover(vector<vector<char>>& grid, int x, int y, int m, int n) {
    if (x < 0 || x >= m || y < 0 || y >= n) {
      return;
    }

    if (grid[x][y] == '1') {
      grid[x][y] = '0';
      discover(grid, x, y + 1, m, n);
      discover(grid, x, y - 1, m, n);
      discover(grid, x + 1, y, m, n);
      discover(grid, x - 1, y, m, n);
    }
  }

  int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int count = 0;

    for (int x = 0; x < m; x++) {
      for (int y = 0; y < n; y++) {
        if (grid[x][y] == '1') {
          discover(grid, x, y, m, n);
          count++;
        }
      }
    }

    return count;
  }
};