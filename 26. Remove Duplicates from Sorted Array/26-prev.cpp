#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int fillIndex = 0;
        int prev = INT_MAX; // Input is sorted, just compare if the previous == current
        while (index < nums.size()) {
            int num = nums[index];
            if (num != prev) {
                prev = num;
                nums[fillIndex] = num;
                fillIndex++;
            }
            index++;
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
    nums = {1, 1, 2};

    // Test case 2
    // nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int answer = solution.removeDuplicates(nums);
    cout << answer << '\n';

    for (int num: nums) {
        cout << num << ' ';
    }
}