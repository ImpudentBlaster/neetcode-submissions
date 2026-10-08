class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.length() != t.length())
    {
        return false;
    }

    unordered_map<char, int> hash_s;
    unordered_map<char, int> hash_t;

    for (int i = 0; i < s.length(); i++)
    {
        hash_s[s[i]]++;
        hash_t[t[i]]++;
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if(hash_s[ch] != hash_t[ch]){
            return false;
        }
    }

    return true;
    }
};
