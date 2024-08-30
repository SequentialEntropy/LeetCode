#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;

        queue<int> q;
        for (int i = size - k; i < size; i++) {
            q.push(nums[i]);
        }
        for (int i = 0; i < size - k; i++) {
            q.push(nums[i]);
        }

        for(int i = 0; i < size; i++) {
            nums[i] = q.front();
            q.pop();
        }
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> nums;
    int k;

    // Test case 1
    // nums = {1, 2, 3, 4, 5, 6, 7};
    // k = 3;

    // Test case 2
    // nums = {-1, -100, 3, 99};
    // k = 2;

    // Test case 3
    nums = {-1};
    k = 2;

    // Test case 3
    // nums = {-1, -2};
    // k = 3;

    solution.rotate(nums, k);

    for (int num: nums) {
        cout << num << ' ';
    }
}
