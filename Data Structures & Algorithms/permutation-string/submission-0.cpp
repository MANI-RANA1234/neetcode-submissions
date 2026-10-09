class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char, int> hasht1,hasht2;

        if (s1.size()>s2.size()){
            return false;
        }

        for (int i = 0; i < s1.size(); i++) {
            hasht1[s1[i]]++;
        }

        int left=0;

        for (int right = 0 ; right<s2.size(); right++){

            hasht2[s2[right]]++;       

            if (right-left+1>s1.size()){
                hasht2[s2[left]]--;     

            if (hasht2[s2[left]] == 0) {
                    hasht2.erase(s2[left]);
                }
            left++;
            }




            if(right-left+1==s1.size() && hasht1==hasht2){
                return true;
            }

        }
    return false;
 
    }
};
