#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    // Test case 1
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    // Test case 2
    vector<int> nums1 = {1};
    vector<int> nums2 = {};

    // Test case 3
    vector<int> nums1 = {0};
    vector<int> nums2 = {1};

    int n = nums2.size();
    int m = nums1.size() - n;

    queue<int> q1;
    queue<int> q2;

    // for (int n1 : nums1)
    for (int i = 0; i < m; i++)
    {
        // cout << nums1[i] << '\n';
        q1.push(nums1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        q2.push(nums2[i]);
    }

    short index = 0;
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

    for (int i : nums1)
    {
        cout << i << ' ';
    }
}