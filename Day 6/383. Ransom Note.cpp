class Solution {
public:
    bool canConstruct(string s1, string s2) {
        
        vector<int> m1(26);
        vector<int> m2(26);
        
        int n = s1.size(),m=s2.size();
        
        for(int i=0;i<n;i++){
            m1[s1[i]-'a']++;
        }
        
        for(int i=0;i<m;i++){
            m2[s2[i]-'a']++;
        }
        
        
        for(int i=0;i<26;i++){
            if(m1[i]>m2[i]){
                return false;
            }
        }
        return true;
    }
};
