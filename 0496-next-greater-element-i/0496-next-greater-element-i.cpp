class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto x:nums1){
            int value=-1;
            bool flag=false;
            for(int i=0;i<nums2.size();i++){
                if(nums2[i]==x){
                    flag=true;
                }
                if(nums2[i]>x && flag){
                    value=nums2[i];
                    break;
                }
            }
            ans.push_back(value);
        }
        return ans;
    }
};