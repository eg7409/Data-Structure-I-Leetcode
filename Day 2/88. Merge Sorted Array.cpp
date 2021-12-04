class Solution {
public:
    void merge(vector<int>& v, int n, vector<int>& a, int m) {
        
        int i = n - 1,j= m - 1,k = n + m - 1;
        
        while(i>=0 && j>=0){
            
            if(v[i] < a[j]){
                v[k--] = a[j--];
            }
            else{
                v[k--] = v[i--];
            }
        }
        
        while(j >= 0){
            v[k--] = a[j--];
        }
    }
};
