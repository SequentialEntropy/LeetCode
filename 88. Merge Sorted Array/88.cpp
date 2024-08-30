#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        queue<int> q1;
        queue<int> q2;

        // for (int n1 : nums1)
        for (int i = 0; i < m; i++)
        {
            q1.push(nums1[i]);
        }

        for (int i = 0; i < n; i++)
        {
            q2.push(nums2[i]);
        }

        int index = 0;
        while (q1.size() + q2.size() > 0)
        {
            if (q2.empty())
            {
                // cout << q1.front() << '\n';
                nums1[index] = q1.front();
                q1.pop();
                index++;
                continue;
            }
            if (q1.empty())
            {
                // cout << q2.front() << '\n';
                nums1[index] = q2.front();
                q2.pop();
                index++;
                continue;
            }
            if (q1.front() < q2.front())
            {
                // cout << q1.front() << '\n';
                nums1[index] = q1.front();
                q1.pop();
                index++;
            }
            else
            {
                // cout << q2.front() << '\n';
                nums1[index] = q2.front();
                q2.pop();
                index++;
            }
        }
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> nums1;
    vector<int> nums2;
    int m;
    int n;

    // Test case 1
    nums1 = {1, 2, 3, 0, 0, 0};
    nums2 = {2, 5, 6};

    // Test case 2
    // nums1 = {1};
    // nums2 = {};

    // Test case 3
    // nums1 = {0};
    // nums2 = {1};
    
    n = nums2.size();
    m = nums1.size() - n;

    solution.merge(nums1, m, nums2, n);

    for (int num: nums1) {
        cout << num << ' ';
    }
}
