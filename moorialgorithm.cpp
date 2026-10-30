#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {

    int candidate = 0;
    int count = 0;

    // Step 1: Find candidate
    for (int i = 0; i < nums.size(); i++) {

        if (count == 0) {
            candidate = nums[i];
        }

        if (nums[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    }

    return -1;
}

int main() {

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << majorityElement(nums);

    return 0;
}