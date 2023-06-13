#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

struct Node {
    int l, r;
    int gcd;
};

vector<Node> tree;

void build(vector<int>& arr, int i, int l, int r) {
    tree[i].l = l;
    tree[i].r = r;
    if (l == r) {
        tree[i].gcd = arr[l];
        return;
    }
    int mid = (l + r) / 2;
    build(arr, 2 * i + 1, l, mid);
    build(arr, 2 * i + 2, mid + 1, r);
    tree[i].gcd = gcd(tree[2 * i + 1].gcd, tree[2 * i + 2].gcd);
}

void update(int i, int idx, int val) {
    if (tree[i].l == tree[i].r) {
        tree[i].gcd += val;
        return;
    }
    int mid = (tree[i].l + tree[i].r) / 2;
    if (idx <= mid) {
        update(2 * i + 1, idx, val);
    } else {
        update(2 * i + 2, idx, val);
    }
    tree[i].gcd = gcd(tree[2 * i + 1].gcd, tree[2 * i + 2].gcd);
}

int query(int i, int l, int r) {
    if (tree[i].l >= l && tree[i].r <= r) {
        return tree[i].gcd;
    }
    int mid = (tree[i].l + tree[i].r) / 2;
    if (r <= mid) {
        return query(2 * i + 1, l, r);
    } else if (l > mid) {
        return query(2 * i + 2, l, r);
    } else {
        return gcd(query(2 * i + 1, l, r), query(2 * i + 2, l, r));
    }
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    tree.resize(4 * N);
    build(arr, 0, 0, N - 1);
    for (int q = 0; q < Q; q++) {
        int op;
        cin >> op;
        if (op == 1) {
            int A, B, V;
            cin >> A >> B >> V;
            for (int i = A - 1; i <= B - 1; i++) {
                update(0, i , V);
            }
        } else if (op == 2) {
            int A, B;
            cin >> A >> B;
            cout << query(0 , A - 1 , B - 1 ) << endl;
        }
    }
}
