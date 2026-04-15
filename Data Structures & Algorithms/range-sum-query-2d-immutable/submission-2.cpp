class NumMatrix {
public:
    vector<vector<int>> prefixrow;
    NumMatrix(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int C = matrix[0].size();
        cout << "test";
        int c = 0;
        for(int row = 0 ; row < r ; row++){
            vector<int>temp;
            for(int col = 0 ; col < C ; col++){
                //cout << "test col ";
                c += matrix[row][col];
                temp.push_back(c);
                //cout << c << row << " row " << col << " col " << endl;
            }
            prefixrow.push_back(temp);
            c = 0;
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1 ; i <= row2 ; i++){
            sum += prefixrow[i][col2]-prefixrow[i][col1-1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */