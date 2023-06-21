class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote=0,candidate=0,count=0;
        for(int i=0; i<nums.size(); i++){
           if(nums[candidate]==nums[i])
           vote++;
           else
           vote--;
           if(vote==0){
           candidate=i;
           vote=1;
           }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[candidate]==nums[i])
            count++;
            if(count>=nums.size()/2){
            return nums[candidate];
            }
        }
        return 0;
    }
};