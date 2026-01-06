class Solution {
public:
    int mySqrt(int x) {
        long start = 0;
        long end = x;
        while (start <= end) {
            long mid = (start + end) / 2;
            long sq = mid * mid;
            if (sq > x) {
                end = mid - 1;
            } else if (sq < x) {
                start = mid + 1;
            } else {
                return mid;
            }
        }
        return end;
    }
};