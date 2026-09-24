class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Sort all the strings in alphabetical order
        // then store the same ones 

        unordered_map<string, vector<string>> groups;
        for (string word:strs){
            string sorted = word;

            sort(sorted.begin(),sorted.end());

            groups[sorted].push_back(word);
        }

        vector<vector<string>> result;

        for(auto pair: groups){
            result.push_back(pair.second);
        }

        return result;
    }
};
