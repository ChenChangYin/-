/*************************************************************************
	> File Name: p1583.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月23日 星期日 20时34分51秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, y;
    scanf("%d%d", &n, &y);
    int w[n + 5] = {0};
    int E[11] = {0};
    for (int i = 1; i < 11; i++) {
        scanf("%d", &E[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }    
    return 0;
}
