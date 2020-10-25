class Solution {
public:
    int lengthOfLastWord(string s) {
        int siz = s.size();
        int count = 0;
        for (int i = siz-1; i >=0 ; i--){
            if(s[i] != ' '){
                count++;
            }
            else if(s[i]==' ' and count != 0){
                break;
            }
        }
        return count;
    }
};