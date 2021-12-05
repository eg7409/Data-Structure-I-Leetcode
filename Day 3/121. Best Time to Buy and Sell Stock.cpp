class Solution {
public:
    int maxProfit(vector<int>& v) {
        
    int n = v.size();
        
        vector<int> a(n);
        int res = v[n-1];
        
        
        for(int i=n-1;i>=0;i--){
            res = max(res,v[i]);
            a[i] = res;
        }
       
        int ans = 0;
        
        for(int i=0;i<n;i++){
            ans = max(ans,a[i] - v[i]);
        }
        
        return ans;
    }
};
