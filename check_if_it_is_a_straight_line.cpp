class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int dy = (coordinates[1][1] - coordinates[0][1]);
        int dx = (coordinates[1][0] - coordinates[0][0]);
        
        for(int i=1;i<coordinates.size()-1;i++){
            int x2_x1 = (coordinates[i+1][0] - coordinates[i][0]);
            int y2_y1 = (coordinates[i+1][1] - coordinates[i][1]);
            
            if( dy*x2_x1 == dx*y2_y1)
                 continue;
            else
                 return false;
        }
        return true;
    }
};
