#define ll long long
class Solution {
    int Min(int &a,int &b){
         if(a>b) return a;
         else return b;
    }
    private:
    int Helper(vector<vector<int>>&A){
          ll n=A.size();
          ll m=A[0].size();
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0)                                                    //Leftmost or first column
                A[i][j]+=min(A[i-1][j],A[i-1][j+1]);
                else if(j==m-1)A[i][j]+=min(A[i-1][j],A[i-1][j-1]);     //Rightmost or last column
                else A[i][j]+=min({A[i-1][j],A[i-1][j+1],A[i-1][j-1]}); //Remaining cases
            }
        }
        ll res=1e6;
        for(int i=0;i<m;i++){
            res=min(res,(ll)A[n-1][i]);                                      //Last row scan
        }
        return res;
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        return Helper(matrix);
    }
};
