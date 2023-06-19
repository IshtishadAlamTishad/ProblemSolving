
class Solution {
public:
    void Mutliply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        int n = matrixA.size();
        
        vector<vector<int> > ans(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) {
                ans[i][j]=0;
                for(int k=0;k<n;k++) {
                    ans[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                matrixA[i][j] = ans[i][j];
            }
        }
    }
};
