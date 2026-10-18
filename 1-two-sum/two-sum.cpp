class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) !=
                mp.end()) { // finding if difference exists in the map or not
                            // and array is not end
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }
        return {};
    }
}; //take out difference of elemnts n target and if it exists in the map  then  return it