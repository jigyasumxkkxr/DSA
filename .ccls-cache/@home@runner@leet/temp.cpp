#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    void print(vector<int>& v) {
        for (auto num : v) {
            cout << num << " ";
        }
        cout << endl;
    }

    vector<int> nextsmallest(vector<int>& v) {
        stack<int> st;
        vector<int> ans(v.size());
        for (int i = v.size() - 1; i >= 0; --i) {
            while (!st.empty() && v[i] <= v[st.top()]) {
                st.pop();
            }
            ans[i] = st.empty() ? v.size() : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevsmallest(vector<int>& v) {
        stack<int> st;
        vector<int> ans(v.size());
        for (int i = 0; i < v.size(); ++i) {
            while (!st.empty() && v[i] <= v[st.top()]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if (n == 1) {
            return heights[0];
        }
        vector<int> next = nextsmallest(heights);
        vector<int> prev = prevsmallest(heights);
        print(next);
        print(prev);
        int area = INT_MIN;
        for (int i = 0; i < n; ++i) {
            int width = next[i] - prev[i] - 1;
            int length = heights[i];
            area = max(area, width * length);
        }
        return area;
    }
};

int main() {
    Solution sol;
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int area = sol.largestRectangleArea(heights);
    cout << "Largest Rectangle Area: " << area << endl;
    return 0;
}
