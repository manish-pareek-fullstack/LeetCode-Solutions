class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        for(auto x:nums){
            if(x!=0){
                ans.push_back(x);
            }
        }
        int i=0;
        for(auto x:ans){
            nums[i]=x;
                i++;
        }
        while(i<nums.size()){
           nums[i]=0;
           i++;  
        }
       for(auto x:nums){
        cout<<x;
       }
    }
};