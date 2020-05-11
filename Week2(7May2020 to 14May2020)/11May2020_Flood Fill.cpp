class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue <pair<int, int>> q;
        q.push({sr, sc});
        while(q.size() > 0){
            int i = q.front().first;
            int j = q.front().second;
            int old = image[i][j];
            image[i][j] = newColor;
            q.pop();
            if(i<image.size()-1)
            if(old == image[i+1][j] && image[i+1][j] != newColor){
                q.push({i+1, j});
            }
            if(i>0)
            if(old == image[i-1][j] && image[i-1][j] != newColor){
                q.push({i-1, j});
            }
            if(j<image[0].size()-1)
            if(old == image[i][j+1] && image[i][j+1] != newColor){
                q.push({i, j+1});
            }
            if(j>0)
            if(old == image[i][j-1] && image[i][j-1] != newColor){
                q.push({i, j-1});
            }
        }
        return image;
    }
};
