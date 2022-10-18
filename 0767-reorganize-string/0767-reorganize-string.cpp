class Solution {
public:
    string reorganizeString(string s) {
        string res;
        
        unordered_map<char, int> hist;
        priority_queue<pair<int, char>> queue;
        
        for (auto c : s)
            hist[c]++;
        
        for (auto h : hist)
            queue.push(make_pair(h.second, h.first));
        
        while (queue.size() > 1) {
            auto first = queue.top();
            queue.pop();
            auto second = queue.top();
            queue.pop();
            
            res += first.second;
            res += second.second;
            
            first.first--;
            second.first--;
            
            if (first.first > 0)
                queue.push(first);
            if (second.first > 0)
                queue.push(second);
        }
        
        if (!queue.empty())
        {
            if (queue.top().first > 1)
                return "";
            else
                res += queue.top().second;
        }
        
        return res;
    }
};