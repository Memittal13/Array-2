//Time O(n)
//Space O(1)
//Leetcode: yes
//Issue seen: none
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            while (nums[i] != i + 1) {
                int temp = nums[i] - 1;
                if (nums[i] != nums[temp]) {
                    swap(nums[temp], nums[i]);
                } else {
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != i+1) {
               ans.push_back(i + 1);
            }
        }
        
        return ans;
    }
};
