class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         //Right most significant digit

        //loop through vector 
        for(int i = digits.size() - 1; i >= 0; i--){

            digits[i] += 1;  //adding one to RSD

            if(digits[i] < 10){
               return digits;  //Return digits no carry required
            }

            

            digits[i] = 0; //set digit to zero, iterate through and repeat the process

        }
        //insert the out of bounds 1 to index 0 of vector
        digits.insert(digits.begin(), 1);   //begin() 
        return digits;  //return the vector
    }
};
