class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int k) {
        
        
        int n = v.size(), m =v[0].size();
        
        if(n ==0){
            return false;
        }
        int start = 0,end = n*m-1;
        
        while(start <= end){
            
            int mid = (start+end)/2;
            
            if(v[mid/m][mid%m] == k){
                return true;
            }
            
            if(v[mid/m][mid%m] < k){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return false;
    }
};
