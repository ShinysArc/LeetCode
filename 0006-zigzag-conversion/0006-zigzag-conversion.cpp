class Solution {
public:
    string convert(string s, int numRows)
    {
        if (s.empty() || numRows <= 0)
            return "";

        if (numRows == 1)
            return s;
        
        string res;
        
        int step = 2 * numRows - 2;
        
        for (auto i = 0; i < numRows; i++)
        {
            for (auto j = i; j < s.length(); j += step)
            {
                res += s[j];
                if (i != 0 && i != numRows - 1 && (j + step - 2 * i) < s.length())
                    res += s[j + step - 2 * i];
            }
        }
        
        return res;
    }
};