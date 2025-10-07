#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int last = INT_MAX;
        vector<int> duplicates;
        for (int num: nums) {
            if (num == last) {
                duplicates.push_back(num);
            }
            last = num;
        }
        return duplicates;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> nums;

    // Test case 1
    nums = {4, 3, 2, 7, 8, 2, 3, 1};

    // Test case 2
    // nums = {1, 1, 2};

    // Test case 3
    // nums = {1};

    vector<int> answers = solution.findDuplicates(nums);
    for (int answer: answers) {
        cout << answer << " ";
    }
    cout << "\n";
}
