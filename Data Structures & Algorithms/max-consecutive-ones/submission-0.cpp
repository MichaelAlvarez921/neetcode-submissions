class Solution {
public:
    int tally = 0;
    int max_tally = 0;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                tally++;
            }
            else{
                tally = 0;
            }
            if (tally > max_tally) max_tally = tally;
        }
        return max_tally;


    }
};