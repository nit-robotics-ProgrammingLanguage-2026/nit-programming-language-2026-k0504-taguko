#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);
    //int f = !(a < 0 || (a >= 10 && a < 12) || a >= 15); original
    //int f = (a >= 0 && (a < 10 || a >= 12) && a < 15); ドモルガンで展開
    int conditions = ((a <= 0 && a < 10) || (12 <= a && a < 15))// 簡略化
    // C言語の条件式は、1(true)か1じゃないか(false)
    if (conditions == 1) {
        printf("OK");
    }
    else {
        printf("NG");
    }
    return 0;
}
