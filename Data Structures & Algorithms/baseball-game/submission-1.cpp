class Solution {
public:

    vector<int> score;
    
    int calPoints(vector<string>& operations) {

        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                score.push_back(score[score.size() - 1] + score[score.size() - 2]); //verify score size and pushback appends to end of vector
            }
            else if(operations[i] == "D"){
                score.push_back(score.back() * 2);
            }else if(operations[i] == "C"){
                score.pop_back();  //removes end of vector
            }else{
                score.push_back(stoi(operations[i])); //string to integer, 
            }
        }
        return accumulate(score.begin(), score.end(), 0);  //sums up value in range
    }
};