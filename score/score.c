#include <stdio.h>

int
main(void)
{
    int score;
    printf("%d", score);

    do {
        printf("点数を入力...");
        scanf("%d", score);
        if (score < 1 || score > 100) {
            printf("入力された値は無効です、もう一度入力してください...");
        }
    } while (score < 1 || score > 100);

    printf("入力された点数は%dです。", score);
    return 0;
}