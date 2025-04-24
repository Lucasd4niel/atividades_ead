#include <stdio.h>

int main(void){
    int item, a, menor, i;
    float venda, b, media_menor;
    a = 0;
    b = 0; 
    scanf("%d %f", &item, &venda);
    a = a + item;
    b = b + venda;
    media_menor = venda / item;
    menor = 1;
    for (i = 2; i <= 5; i++){
        scanf("%d %f", &item, &venda);
        a = a + item;
        b = b + venda;
        if(venda / item < media_menor){
            media_menor = venda / item;
            menor = i;
        }
    }
    printf("Vendas da semana: R$ %.2f\n", b);
    printf("Quandidade média de vendas: %.1f\n", a / 5.0);
    printf("Valor medio por venda: R$ %.2f\n", b / a);
    printf("Menor valor médio: ");
    switch (menor){
    case 1:
        printf("Segunda-feira (R$ %.2f)\n", media_menor);
        break;
    case 2:
        printf("Terça-feira (R$ %.2f)\n", media_menor);
        break;
    case 3:
        printf("Quarta-feira (R$ %.2f)\n", media_menor);
        break;
    case 4:
        printf("Quinta-feira (R$ %.2f)\n", media_menor);
        break;
    case 5:
        printf("Sexta-feira (R$ %.2f)\n", media_menor);
        break;
    default:
        break;
    }
    
    return 0;
}