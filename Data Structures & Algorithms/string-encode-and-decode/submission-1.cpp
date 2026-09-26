class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (auto &str : strs){
            for(auto &ch : str){
                result.push_back(ch);
            }
            result.push_back((char)0xFFFFFF);
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string current ="";
        for (int i=0 ; i<s.length(); i++){
            if(s[i]==(char)0xFFFFFF){
                result.push_back(current);
                current="";
            }
            else{
                current.push_back(s[i]);
            }
        }
        return result;
    }
};
