#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int fillIndex = 0;
        set<int> existing;
        while (index < nums.size()) {
            int num = nums[index];
            if (existing.find(num) == existing.end()) {
                existing.insert(num);
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
