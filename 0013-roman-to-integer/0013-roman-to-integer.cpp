class Solution {
public:
    int romanToInt(string s)
    {
        int res = 0;
        unsigned long i = 0;
        while (i < s.length())
        {
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V')
                {
                    res += 4;
                    i += 2;
                }
                else if (s[i + 1] == 'X')
                {
                    res += 9;
                    i += 2;
                }
                else
                {
                    res++;
                    i++;
                }
            }
            
            if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    res += 40;
                    i += 2;
                }
                else if (s[i + 1] == 'C')
                {
                    res += 90;
                    i += 2;
                }
                else
                {
                    res += 10;
                    i++;
                }
            }
            
            if (s[i] == 'C')
            {
                if (s[i + 1] == 'D')
                {
                    res += 400;
                    i += 2;
                }
                else if (s[i + 1] == 'M')
                {
                    res += 900;
                    i += 2;
                }
                else
                {
                    res += 100;
                    i++;
                }
            }
            
            if (s[i] == 'V')
            {
                res += 5;
                i++;
            }
            
            if (s[i] == 'L')
            {
                res += 50;
                i++;
            }
            
            if (s[i] == 'D')
            {
                res += 500;
                i++;
            }
            
            if (s[i] == 'M')
            {
                res += 1000;
                i++;
            }
        }
        
        return res;
    }
};