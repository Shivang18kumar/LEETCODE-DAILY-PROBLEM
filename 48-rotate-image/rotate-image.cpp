class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int start=0;
        int end = matrix.size()-1;
        while(start<end){
            for(int i =0;i<matrix[0].size();i++){
                int temp=matrix[start][i];
                matrix[start][i]=matrix[end][i];
                matrix[end][i]=temp;
            }
            start++;
            end--;
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
};