class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int letters[126];
        
        int max = 0;

        if (s.empty())
            return 0;
    

        for(int i = 0; i <= s.length() - 1; i++)
        {
            for (int k = 0; k < 126; k++)
            {
                letters[k] = 0;
            }

            int sum = 0;
            for (int j = i; j < s.length(); j++)
            {
                if (letters[s[j] - ' '] == 0) 
                {
                    letters[s[j] - ' '] += 1;
                    sum++;
                    cout << s[j];
                }
                else
                    break;
            }

            max = sum > max? sum: max;
        }

        return max;
    }
};