#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fillIndex = 0;
        int prev = INT_MAX;
        int prev2 = INT_MAX;
        for (int index = 0; index < nums.size(); index++) {
            int num = nums[index];
            if (!(prev == num && prev2 == num)) {
                nums[fillIndex] = num;
                fillIndex++;
            }
            prev2 = prev;
            prev = num;
        }
        return fillIndex;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;
    
    // Declare arguments
    vector<int> nums;

    // Test case 1
    nums = {1, 1, 1, 2, 2, 3};

    // Test case 2
    // nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};

    int answer = solution.removeDuplicates(nums);
    cout << answer << '\n';

    for (int num: nums) {
        cout << num << ' ';
    }
}
