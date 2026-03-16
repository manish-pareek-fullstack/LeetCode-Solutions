class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count=0;
        int count2=0;
        int maj=0;
        int maj2=0;
        for(auto x:nums){
            if(x==maj){
                count++;
            }
            else if(x==maj2){
                count2++;
            }
            else if(count==0){
                count=1;
                maj=x;
            }
            else if(count2==0){
                maj2=x;
                count2=1;
            }
            else{
                count--;
                count2--;
            }
        }
        vector<int>ans;
        int freq1=0;
        int freq2=0;
        int n=nums.size();
        for(auto x:nums){
            if(x==maj){
                freq1++;
            }
            else if(maj2==x){
                freq2++;
            }
        }
        if(freq1>floor(n/3)){
            ans.push_back(maj);
        }
        if(freq2>floor(n/3)){
            ans.push_back(maj2);
        }
        return ans;
       
    }
};