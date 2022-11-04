class Solution {
public:
    bool isValid(string s)
    {
        std::vector<char> lparentheses;
        for (auto c : s)
        {
            if (c == '(' || c == '[' || c == '{')
                lparentheses.push_back(c);
            else if (c == ')' && lparentheses.size() != 0 && lparentheses[lparentheses.size() - 1] == '(')
                lparentheses.pop_back();
            else if (c == ']' && lparentheses.size() != 0 && lparentheses[lparentheses.size() - 1] == '[')
                lparentheses.pop_back();
            else if (c == '}' && lparentheses.size() != 0 && lparentheses[lparentheses.size() - 1] == '{')
                lparentheses.pop_back();
            else
                return false;
        }
        
        return lparentheses.size() == 0;
    }
};