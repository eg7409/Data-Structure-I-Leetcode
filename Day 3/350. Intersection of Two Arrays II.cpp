class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        
        int n = v1.size(), m = v2.size();
        
        vector<int> v;
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        int d = max(v1[n-1]+1,v2[m-1]+1);
        
        
        
        vector<int> m1(d,0);
        vector<int> m2(d,0);
        
        for(int i=0;i<n;i++){
            m1[v1[i]]++;
        }
        
        for(int i=0;i<m;i++){
            m2[v2[i]]++;
        }
        
        
        
        for(int i=0;i<d;i++){
            int w = min(m1[i],m2[i]);
            
            for(int j=0;j<w;j++){
                v.push_back(i);
            }
        }
        return v;
    }
};
