#include "test.h"

//This test does not work properly when argument contains '\n'.

int ft_printf_test(void)
{
    int fd = 0;
    char *buf = (char *)malloc(1000 * sizeof(char));
    if (buf == NULL)
    {
        printf("Memory allocate error.\n");
        return 1;
    }

    fd = open("ft_printf.txt", O_RDONLY);
    if (fd == -1)
    {
        printf("open error\n");
        return 1;
    }
    ssize_t rd_check = read(fd, buf, 1000);
    if (rd_check == -1)
    {
        printf("read error\n");
        return 1;
    }
    char **array = ft_split(buf, '\n');
    char *str_ft;
    char *str_lb;
    int i = 0;
    while (array[i] == NULL)
    {
        if (i % 4 == 1 || i % 4 == 3)
        {
            printf("loop error.\n");
            return 1;
        }
        else if (i % 4 == 0) //string
        {
            str_ft = ft_strdup(array[i]);
            i++;
            str_lb = ft_strdup(array[i]);
            if (strcmp(array[i - 1], array[i]) != 0)

            //How to output test numbers and argument?


            free;
        }
    }

    
}