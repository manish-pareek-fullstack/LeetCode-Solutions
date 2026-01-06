class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end()); // pahle pure array ko reverse kiya {6,5,4,3,2,1}
        reverse(nums.begin(),nums.begin()+k); // fir starting k element ko reverse kiya {4,5,6}
        reverse(nums.begin()+k,nums.end()); // fir last ke bache huye element ko reverse kiya {1,2,3}
    }
};