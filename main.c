#include <stdio.h>

// 総和を返す関数
int function(int x) {
    static int sum = 0;
    sum += x;
    return sum;
}

int main(void) {
    int num, ans = 0;
    scanf("%d", &num);
    // 入力値の範囲チェック
    if(num < 1 || num > 10) {
        printf("NG");
        return 0;
    }
    // 1からnumまでの偶数の総和を計算
    for(int cnt = 1; cnt <= num; cnt++) {
        ans = function(cnt * 2);
    }
    printf("%d", ans);
    return 0;
}
