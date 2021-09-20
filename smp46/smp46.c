#include <stdio.h>

int
main()
{
    int price, pricea, priceb, pricec, priced;

    printf("定価を入力してください...: ");
    scanf("%d", &price);

    pricea = (int)(price * 9);
    priceb = (int)(price * 7);
    pricec = (int)(price * 5);
    priced = (int)(price * 2);

    printf("%d\n%d\n%d\n%d\n", pricea, priceb, pricec, priced);

    return 0;
}