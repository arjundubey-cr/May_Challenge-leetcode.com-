class Solution {
public:
    bool collinear(int x1, int y1, int x2,  int y2, int x3, int y3) 
    { 
    if ((y3 - y2) * (x2 - x1) ==  
        (y2 - y1) * (x3 - x2)) 
       return true;
    else
        return 0; 
            } 
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        
        for(int i=0;i<coordinates.size()-2;i++)
        {
            
            int x1 = coordinates[i][0], x2 =  coordinates[i+1][0], x3 =  coordinates[i+2][0],
            y1 =  coordinates[i][1], y2 =  coordinates[i+1][1], y3 =  coordinates[i+2][1];
            
            if(collinear(x1, y1, x2, y2, x3, y3)==0)return false; 
        }
        
        return true;
    }
};
