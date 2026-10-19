#include <iostream>
using namespace std;
bool isPossible(vector<int>& boards, int k, int mid) {
    int painters = 1;
    int curr_sum = 0;

    for (int i = 0; i < boards.size(); i++) {
        if (boards[i] > mid) return false;

        if (curr_sum + boards[i] > mid) {
            painters++;
            curr_sum = boards[i];
            if (painters > k) return false;
        } else {
            curr_sum += boards[i];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int n = boards.size();
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(boards, k, mid)) {
            ans = mid;
            high = mid - 1; // try for a better minimum
        } else {
            low = mid + 1;
        }
    }

    return ans;
}
