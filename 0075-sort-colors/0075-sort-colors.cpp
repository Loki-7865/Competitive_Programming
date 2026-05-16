class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
          	// Comparing adjacent elements
            if (nums[j] > nums[j + 1])
              	// Swapping if in the wrong order
                swap(nums[j], nums[j + 1]);
                        }
    }
for(int i=0;i<n;i++)
cout<<nums[i];
    }
};