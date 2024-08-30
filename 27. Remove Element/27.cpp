#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        int fillIndex = 0;
        while (index < nums.size()) {
            int temp = nums[index];
            if (temp != val) {
                nums[fillIndex] = temp;
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
    int val;

    // Test case 1
    nums = {3, 2, 2, 3};
    val = 3;

    // Test case 2
    nums = {0, 1, 2, 2, 3, 0, 4, 2};
    val = 2;

    int answer = solution.removeElement(nums, val);
    cout << answer << '\n';

    for (int num: nums) {
        cout << num << ' ';
    }
}