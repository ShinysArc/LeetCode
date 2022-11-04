class Solution {
public:
    unordered_map<char, string> Letters = {{'2',"abc"}, {'3',"def"}, {'4',"ghi"},
    {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}};
    
    vector<string> letterCombinations(string digits)
    {
        int len = digits.size();
        vector<string> res;
        
        if (len == 0)
            return res;
        
        bfs(0, len, "", res, digits);
        return res;
    }
    
    void bfs(int pos, int &len, string str, vector<string> &res, string &digits)
    {
        if (pos == len)
            res.push_back(str);
        else
        {
            string letters = Letters[digits[pos]];
            for (int i = 0; i < letters.size(); i++)
                bfs(pos + 1, len, str + letters[i], res, digits);
        }
    }
};