#include "conio.h"
 #include "stdio.h"
int main()
{
    system("cls");
    char c = 0;
    char e = 0;

    c = getch();

    if (c = 0xe0)
    {
        e = getch();

        if (e == 0x48)         /*��*/
            printf("up\n");
        else if (e == 0x50)   /*��*/
            printf("down\n");
        else if (e == 0x4b)  /*��*/
            printf("left\n");
        else if (e == 0x4d)  /*��*/
            printf("right\n");
        else
            printf("other\n");
    }
    else
    {
        printf("other");
    }





    return 0;
}
