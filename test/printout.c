#include "test.h"

// if (i % 4 == 
// 0 : ft_printf
// 1 : printf
// 2 : len_ft
// 3 : len_lb

int main(void)
{
    char c = 'a'; 
    int len_ft = ft_printf("%c",c); //0
    printf("\n");
    int len_lb = printf("%c", c); //1
    printf("\n");
    printf("%d", len_ft); //2
    printf("\n");
    printf("%d", len_lb); //3
    printf("\n");

    return 0;
}
