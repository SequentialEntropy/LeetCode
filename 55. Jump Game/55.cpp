#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (reach >= i) { // if current index can be reached
                reach = max(reach, i + nums[i]); // update reach
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> nums;

    // Test case 1
    nums = {2, 3, 1, 1, 4};

    // Test case 2
    // nums = {3, 2, 1, 0, 4};

    bool answer = solution.canJump(nums);
    cout << answer << "\n";
}
