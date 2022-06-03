class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total =  row*col;
        
        // directions or inder initaliztions
        int strow = 0;
        int stcol = 0;
        int endrow = row -1;
        int endcol = col -1;
        //return type
        vector<int> ans;
        
        while(count<total)
        {
            for(int i = stcol; i<=endcol;i++){
                ans.push_back(matrix[strow][i]);
                count++;
            }
            strow++;
        
        for(int i = strow; i<=endrow;i++){
            ans.push_back(matrix[i][endcol]);
            count++;
        }
            endcol--;
        
        for(int i = endcol; i>=stcol;i--){
            ans.push_back(matrix[endrow][i]);
            count++;
        }
            endrow--;
            
        for(int i = endrow;i>=strow;i--){
            ans.push_back(matrix[i][stcol]);
            count++;
        }
            stcol++;
            
        }
        
        return ans;
    }
};