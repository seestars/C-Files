#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 100000

// 线段树节点结构
typedef struct {
    int max_val;
} SegmentTreeNode;

SegmentTreeNode tree[4 * MAX_SIZE];

// 构建线段树
void build(int arr[], int node, int start, int end) {
    if (start == end) {
        tree[node].max_val = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    build(arr, 2 * node, start, mid);
    build(arr, 2 * node + 1, mid + 1, end);
    tree[node].max_val = (tree[2 * node].max_val > tree[2 * node + 1].max_val) ? 
                          tree[2 * node].max_val : tree[2 * node + 1].max_val;
}

// 查询区间最大值
int query(int node, int start, int end, int l, int r) {
    if (r < start || l > end) {
        return INT_MIN;
    }
    if (l <= start && end <= r) {
        return tree[node].max_val;
    }
    int mid = (start + end) / 2;
    int left_max = query(2 * node, start, mid, l, r);
    int right_max = query(2 * node + 1, mid + 1, end, l, r);
    return (left_max > right_max) ? left_max : right_max;
}

// 更新单个元素
void update(int node, int start, int end, int idx, int val) {
    if (start == end) {
        tree[node].max_val = val;
        return;
    }
    int mid = (start + end) / 2;
    if (idx <= mid) {
        update(2 * node, start, mid, idx, val);
    } else {
        update(2 * node + 1, mid + 1, end, idx, val);
    }
    tree[node].max_val = (tree[2 * node].max_val > tree[2 * node + 1].max_val) ? 
                          tree[2 * node].max_val : tree[2 * node + 1].max_val;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 构建线段树
    build(arr, 1, 0, n - 1);

    // 查询整个数组的最大值
    printf("数组中的最大值是: %d\n", query(1, 0, n - 1, 0, n - 1));

    // 更新某个元素
    update(1, 0, n - 1, 2, 10);
    printf("更新后数组中的最大值是: %d\n", query(1, 0, n - 1, 0, n - 1));

    return 0;
}