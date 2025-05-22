/* Brute force solutions can be that comapring the charcters after reversing the string*/
class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        for(char c: s){
            if(isalnum(c)){
                new_s += tolower(c);
            }
        }
        return new_s == string(new_s.rbegin(), new_s.rend());
    }
};


\* And we can also do this problem by using the two pointer approach which can reduce the sapace complexity and in worst case takes O(n) time complexity*/
class Solution {
public:
    bool isPalindrome(string s) {
       return new_s == string(new_s.rbegin(), new_s.rend());
        int i=0, j=s.size()-1;
        while(i < j){
            while(i<j && !isalnum(s[i])){
                i++;
            }
            while(i<j && !isalnum(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j]))
              return false;
        i++;
        j--;
        }
        return true;
    }
};
