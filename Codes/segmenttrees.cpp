#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;

public:
    SegmentTree(vector<int>& data) {
        n = data.size();
        tree.resize(2 * n);
        build(data);
    }

    void build(vector<int>& data) {
        for (int i = 0; i < n; ++i)
            tree[n + i] = data[i];
        for (int i = n - 1; i > 0; --i)
            tree[i] = min(tree[2 * i], tree[2 * i + 1]);
    }

    void update(int pos, int value) {
        pos += n;
        tree[pos] = value;
        while (pos > 1) {
            pos /= 2;
            tree[pos] = min(tree[2 * pos], tree[2 * pos + 1]);
        }
    }

    int query(int l, int r) {
        l += n;
        r += n;
        int res = INT_MAX;
        while (l < r) {
            if (l % 2 == 1) {
                res = min(res, tree[l]);
                l++;
            }
            if (r % 2 == 1) {
                r--;
                res = min(res, tree[r]);
            }
            l /= 2;
            r /= 2;
        }
        return res;
    }
};

int main() {
    vector<int> data = {5, 2, 6, 3, 7, 1, 4, 9};
    SegmentTree st(data);

    cout << "Min in range [1, 5): " << st.query(1, 5) << endl;
    st.update(2, 1);
    cout << "Min in range [1, 5) after update: " << st.query(1, 5) << endl;

    return 0;
}
