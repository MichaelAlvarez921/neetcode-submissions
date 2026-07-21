#include <cctype>

class Solution {
public:
    

    bool isPalindrome(string s) {
    int left = 0;  //left 
    int right = s.length() - 1;  //right 

    while(left < right){  //Stop when left !< right should stop at middle
    
    while(left < right && !isalnum(s[left])){
        left++;   //Increment if invalid character and left is still < right
    }
    
    while(left < right && !isalnum(s[right])){
        right--;   //Decrement if invalid character and left is still < right
    }
    //If mismatch, not palindrome end loop
    if(tolower(s[left]) != tolower(s[right])){
        return false;
    }
    
    left++;
    right--;
    }

    
    return true;
    }
};
