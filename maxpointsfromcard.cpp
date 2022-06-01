class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int scoref = 0;
        for(int i=0; i<k; i++)
            scoref+= card[i];
        
        int maxans = scoref, curr_score = scoref, j = card.size()-1;
        for(int i = k-1;i>=0;i--){
            int scoreR = card[j];
            curr_score +=  scoreR - card[i];
            maxans = max(maxans,curr_score);
            j--;
        }
        return maxans;
    }
};