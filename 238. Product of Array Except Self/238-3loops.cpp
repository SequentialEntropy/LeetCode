#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftProduct[nums.size()];
        int rightProduct[nums.size()];

        int accumulator = 1;
        for (int i = 0; i < nums.size(); i++) {
            leftProduct[i] = accumulator;
            accumulator *= nums[i];
        }

        accumulator = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            rightProduct[i] = accumulator;
            accumulator *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = leftProduct[i] * rightProduct[i];
        }

        return nums;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> nums;

    // Test case 1
    nums = {1, 2, 3, 4};
    // expected [24,12,8,6]

    //[1, 1, 2, 6]
    //    1  1  1 
    //       2  2 
    //          3

    //[24,12,4, 1]
    // 2
    // 3  3
    // 4  4  4

    // Test case 2
    nums = {-1, 1, 0, -3, 3};
    // expected [0,0,9,0,0]

    vector<int> answer = solution.productExceptSelf(nums);
    for (int num : answer) {
        cout << num << " ";
    }
    cout << "\n";
}
