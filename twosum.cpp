class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int more=0;
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
         more=target-nums[i];
         if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i}; //more ki index value, current i 
         }
         else{
            mpp[nums[i]]=i;
         }
        }
        return {-1,-1};
    }
};
