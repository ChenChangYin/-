/*************************************************************************
	> File Name: 255.安装雷达.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月18日 星期二 19时43分55秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define MAX_N 1000

struct Range {
    double l, r;
} arr[MAX_N + 5];

bool cmp(const Range &a, const Range &b) {
    return a.r < b.r;
}

int main() {
    int n;
    double d;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        if (y > d) {
            cout << -1;
            return 0;
        }
        arr[i].l = x - sqrt(d * d - y * y);
        arr[i].r = x + sqrt(d * d - y * y);
    }
    sort(arr, arr + n, cmp);
    double p = arr[0].r;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i].l > p) {
            cnt += 1;
            p = arr[i].r;
        }
    }
    cout << cnt << endl;
   return 0;
}
