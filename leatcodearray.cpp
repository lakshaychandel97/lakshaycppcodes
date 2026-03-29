// 1. Two Sum

// #include <vector>

// class Solution {
// public:
//     std::vector<int> twoSum(std::vector<int>& nums, int target) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; ++i) {
//             for (int j = i + 1; j < n; ++j) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         // No solution found
//         return {};
//     }
// };



// 2. Maximum Subarray


// #include <vector>
// #include <algorithm>

// class Solution {
// public:
//     int maxProfit(std::vector<int>& prices) {
//         int minPrice = prices[0];
//         int maxProfit = 0;

//         for (int i = 1; i < prices.size(); i++) {
//             if (prices[i] < minPrice) {
//                 minPrice = prices[i];
//             } else {
//                 int profit = prices[i] - minPrice;
//                 maxProfit = std::max(maxProfit, profit);
//             }
//         }

//         return maxProfit;
//     }
// };



// 3. Move Zeroes

// #include <vector>

// class Solution {
// public:
//     void moveZeroes(std::vector<int>& nums) {
//         int j = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0) {
//                 std::swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };


// 4. Rotate Array

// #include <vector>
// #include <algorithm>

// class Solution {
// public:
//     void rotate(std::vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;

//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());
//     }
// };




// 5. Pivot Index

// #include <vector>

// class Solution {
// public:
//     int pivotIndex(std::vector<int>& nums) {
//         int total = 0;

//         for (int x : nums) {
//             total += x;
//         }

//         int leftSum = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             int rightSum = total - leftSum - nums[i];

//             if (leftSum == rightSum) {
//                 return i;
//             }

//             leftSum += nums[i];
//         }

//         return -1;
//     }
// };