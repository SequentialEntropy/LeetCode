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

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution solution;
    
    int s = solution.removeElement(nums, val);
    cout << s << '\n';

    for (int i: nums) {
        cout << i;
    }
}