class Solution {
public:
    
    int findMinIndex(vector<int> nums, int start, int end){
        if( end - start == 1) return nums[end] > nums[start] ? start : end;
        int mid = (end + start) / 2;
        if(nums[start] > nums[mid]) return findMinIndex(nums, start, mid);
        else if (nums[mid] > nums[end]) return findMinIndex(nums, mid, end);
        else return 0;
    }
    

    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int index = findMinIndex(nums, 0, nums.size() - 1);
        return nums[index];
    }
};
