class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        
        int n = v.size();
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            int t = k - v[i];
            if(m.find(t) != m.end()){
                return {i,m[t]};
            }
            m[v[i]] = i;
        }
        return {-1,-1};
    }
};
