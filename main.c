#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);
    //int f = !(input < 0 || (input >= 10 && input < 12) || input >= 15); original
    //int f = (input >= 0 && (input < 10 || input >= 12) && input < 15); ドモルガンで展開
    int conditions = ((input <= 0 && input < 10) || (12 <= input && input < 15))// 簡略化
    // C言語の条件式は、1(true)か1じゃないか(false)
    if (conditions == 1) {
        printf("OK");
    }
    else {
        printf("NG");
    }
    return 0;
}
