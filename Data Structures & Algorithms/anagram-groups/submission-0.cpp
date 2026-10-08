class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;

    for (int i = 0; i < strs.size(); i++)
    {
        vector<int> encode(26, 0);
        string code = "";
        string current = strs[i];

        for (int j = 0; j < current.length(); j++)
        {
            int index = current[j] - 'a';
            encode[index]++;
        }

        for (int k = 0; k < encode.size(); k++)
        {
            code += to_string(encode[k]) + "#";
        }

        hash[code].push_back(current);
    }

    vector<vector<string>> result;

    for (auto item : hash){
       result.push_back(item.second);
    }

    return result;

    }
};
