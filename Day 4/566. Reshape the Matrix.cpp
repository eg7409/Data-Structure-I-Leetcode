class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& v, int r, int c) {
        
        
        int n = v.size(), m = v[0].size();
        
        if(n*m != r*c){
            return v;
        }
        
        vector<vector<int> > res(r,vector<int>(c,0));
        
        for(int i=0;i<r*c;i++){
            res[i/c][i%c] = v[i/m][i%m];
        }
        
        return res;
    }
};
