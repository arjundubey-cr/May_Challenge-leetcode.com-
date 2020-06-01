class Solution {
    void dfs(int& numCourses, vector<vector<int>>& must, vector<bool>& vis) {
        for (int i = 0; i < numCourses; ++i) { 
            if (!vis[i]) {
                bool ok = 1;
                for (auto& x : must[i]) 
                    if (!vis[x]) {
                        ok = 0;
                        break;
                    }
                if (ok) {
                    vis[i] = 1;
                    dfs(numCourses, must, vis);
                }
            }
        }
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> must(numCourses);
        vector<bool> vis(numCourses);
        for (auto& v : prerequisites) must[v[0]].push_back(v[1]);
        dfs(numCourses, must, vis);
        return accumulate(vis.begin(), vis.end(), 0) == numCourses;
    }
};
