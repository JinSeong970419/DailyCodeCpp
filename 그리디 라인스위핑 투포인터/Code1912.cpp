﻿// 백준 1912 연속합
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int n, sum, a, ret = -1001;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
        ret = max(ret, sum);
        if (sum < 0) sum = 0;
    }
    printf("%d\n", ret);
    return 0;
}