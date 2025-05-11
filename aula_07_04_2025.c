#include <stdio.h>

int main(void){
    int num, aux_num, count, aux;
    scanf("%d", &num);
    for (aux = 0; aux <= 9; aux++)
    {
        count = 0;
        aux_num = num;
        while (aux_num > 0)
        {
            if (aux_num % 10 == aux){
                count++;
            }
            aux_num = aux_num / 10;
        }
        if (count > 1)
        {
            printf("Dígito %d aparece %d vezes\n", aux, count);
        }
    }
    return 0;
}