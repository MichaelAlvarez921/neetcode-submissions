class Solution {
public:
    
    stack<char> valid;
    
    bool isValid(string s) {

        for(int i = 0; i < s.length(); i++){
            char c = s[i];

            //if its an opening bracket
            if(c == '(' || c == '{' || c == '['){
                valid.push(c);
            }
            // if its a closing bracket
            else{
                //check if empty, return false no closing bracket
                if(valid.empty()){
                    return false;
                }

                //check top of stack to see if it matches open bracket
                char top = valid.top();
                if((c == ')'  && top == '(' ) || (c == '}' && top == '{') || (c == ']' && top == '[')){
                    //remove from stack
                    valid.pop();
                }else{
                    //mismatch
                    return false;
                }
            }
        }

        return valid.empty();


    }
};
