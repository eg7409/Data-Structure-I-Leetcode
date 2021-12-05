class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& v) {
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                
                if(v[i][j] != '.'){
                     char n = v[i][j];
                    v[i][j] = '.';
                    
                    int r = (i/3)*3, c = (j/3)*3;
                    
                    for(int k=0;k<9;k++){
                        if(v[i][k] == n || v[k][j] == n || v[r + k/3][c + k%3] == n){
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
