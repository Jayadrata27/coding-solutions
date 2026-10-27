class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();

        int j=0;
        for(int i=0;i<n+1;i++){
            if(nums[j]!=nums[i]){
                nums[j++]=nums[i];
            }
        }
        return j++;
    }
};