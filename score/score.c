#include <stdio.h>

int
main(void)
{
    int score;
    printf("%d", score);

    do {
        printf("�_�������...");
        scanf("%d", score);
        if (score < 1 || score > 100) {
            printf("���͂��ꂽ�l�͖����ł��A������x���͂��Ă�������...");
        }
    } while (score < 1 || score > 100);

    printf("���͂��ꂽ�_����%d�ł��B", score);
    return 0;
}