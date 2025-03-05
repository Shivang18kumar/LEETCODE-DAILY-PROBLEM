class Solution {
public:
    long long coloredCells(int n) {
        long long int count=0;
        count=1+(2*(long long)(n-1)*n);
        return count;
    }
};