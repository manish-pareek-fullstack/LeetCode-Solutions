class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int x:nums){
            if(to_string(x).size()%2==0){ // string kr rup me canvart kr dega 
                count++;
            }
        }
        return count;
    }
};