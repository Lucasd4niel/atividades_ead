#include <stdio.h>

int main(void)
{
    int a, b, a_simp, b_simp, maior, i;
    scanf("%d/%d", &a, &b);
    i = 1;
    if(a >= b)
    {
        maior = a;
    }
    else
    {
        maior = b;
    }
    i = 1;
    do
    {
        if(a % i == 0 && b % i == 0)
        {
            a_simp = a / i;
            b_simp = b / i;
        }
        i++;
    }while (i <= maior);
    printf("%d/%d", a_simp, b_simp);
    return 0;
}