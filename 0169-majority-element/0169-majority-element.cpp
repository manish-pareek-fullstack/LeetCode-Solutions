class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        int count=0;
        int maj=0;
        for(auto x:nums){
            if(count==0){
                maj=x;
                count=1;
            }
            else if(maj==x){
                count++;
            }
            else {
                count--;
            }
        }
        return maj;
    }
};