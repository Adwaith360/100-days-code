class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int i=0;int j=0;
        int n=0;


        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[i].size();j++) {

                    if(grid[i][j]== '1')
                    {
                        dfs(i,j,grid);
                        n++;
                    }
                
            }
        }
        return n;

    }


    void dfs(int a,int b, vector<vector<char>>& c){

        if(a<0 || a>=c.size() || b<0 || b>=c[a].size() || c[a][b]=='0')
        return;
        
        c[a][b]='0';

        dfs(a-1,b,c);
        dfs(a+1,b,c);
        dfs(a,b-1,c);
        dfs(a,b+1,c);

    }
};

