//sort and find the element approach
class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		sort(nums.begin(), nums.end(), greater<>());
		return nums[k - 1];
	}
};
