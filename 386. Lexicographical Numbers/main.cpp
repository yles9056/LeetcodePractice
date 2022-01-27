class Solution {
public:
    vector<int> ans;
    
    void helper(int n, int head = 0) {
        for (int i = 0; i < 10 && head * 10 + i <= n; i++) {
            int current = head * 10 + i;
            if (current == 0) {
                continue;
            }
            ans.push_back(current);
            
            helper(n, current);
        }
    }
    
    vector<int> lexicalOrder(int n) {
        /*for (int i = 1; i < 10 && i <= n; i++) {
            ans.push_back(i);
            for (int j = 0; j < 10 && i * 10 + j <= n; j++) {
                ans.push_back(i * 10 + j);
            }
        }*/
        helper(n);
        
        return ans;
    }
};