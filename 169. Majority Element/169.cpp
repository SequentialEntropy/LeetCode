#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq; // frequency map

        for (int num: nums) {
            ++freq[num]; // increment frequency map
        }

        for (pair<int, int> p: freq) {
            if (p.second > nums.size() / 2) {
                return p.first;
            }
        }
        return 0;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> nums;

    // Test case 1
    nums = {3, 2, 3};

    // Test case 2
    // nums = {2, 2, 1, 1, 1, 2, 2};

    int answer = solution.majorityElement(nums);

    cout << answer;
}
