/******************************************************************************

Pretende-se um programa que dado o comprimento da diagonal de um losango, o desenhe
no ecrã com asteriscos. O losango deverá ter a largura igual à altura. Considere ainda que o
comprimento máximo da diagonal é um número inteiro inferior a 20. O losango deverá ser escrito
ao centro do ecrã.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int diagonal, i=0, meio;
    
    printf("Insira o valor da diagonal: ");
    scanf("%d", &diagonal);
    
    while(diagonal > 20 || diagonal <= 0)
    {
        printf("Valor invalido para diagonal, insira um maior que zero e menor que 20: ");
        scanf("%d", &diagonal);
    }
    
    meio = diagonal / 2;
    
    while(i <= meio)
    {
        printf(" ");
        i++;
    }    
    printf("*\n");
    
    i = 0;
        
    if (meio-1 >= 0 && diagonal != 3)
    {
        while(i <= meio-1)
        {
            printf(" ");
            i++;
        }    
        printf("***\n");
    }
    
    i = 0;
    
    if(meio-2 >= 0 && diagonal != 5)
    {
        while(i <= meio-2)
        {
            printf(" ");
            i++;
        }    
        printf("*****\n");
    }
    
    i = 0;
    
    if(meio-3 >= 0 && diagonal != 7)
    {
        while(i <= meio-3)
        {
            printf(" ");
            i++;
        }    
        printf("*******\n");
    }
    
    i = 0;
    
    if(meio-4 >= 0 && diagonal != 9)
    {
        while(i <= meio-4)
        {
            printf(" ");
            i++;
        }    
        printf("*********\n");
    }
    
    i = 0;
    
    if(meio-5 >= 0 && diagonal != 11)
    {
        while(i <= meio-5)
        {
            printf(" ");
            i++;
        }    
        printf("***********\n");
    }
    
    i = 0;
    
    if(meio-6 >= 0 && diagonal != 13)
    {
        while(i <= meio-6)
        {
            printf(" ");
            i++;
        }    
        printf("*************\n");
    }
    
    i = 0;
    
    if(meio-7 >= 0 && diagonal != 15)
    {
        while(i <= meio-7)
        {
            printf(" ");
            i++;
        }    
        printf("***************\n");
    }
    
    i = 0;
    
    if(meio-8 >= 0 && diagonal != 17)
    {
        while(i <= meio-8)
        {
            printf(" ");
            i++;
        }    
        printf("*****************\n");
    }
    
    i = 0;
    
    if(meio-9 >= 0 && diagonal != 19)
    {
        while(i <= meio-9)
        {
            printf(" ");
            i++;
        }    
        printf("*******************\n");
    }
    
    i = 0;
    
    if(meio-10 >= 0 && diagonal != 20)
    {
        while(i <= meio-10)
        {
            printf(" ");
            i++;
        }    
        printf("********************\n");
    }
    
    i = 0;
    
    if(meio-9 >= 0)
    {
        while(i <= meio-9)
        {
            printf(" ");
            i++;
        }    
        printf("*******************\n");
    }
    
    i = 0;
    
    if(meio-8 >= 0)
    {
        while(i <= meio-8)
        {
            printf(" ");
            i++;
        }    
        printf("*****************\n");
    }
    
    i = 0;

    if(meio-7 >= 0)
    {
        while(i <= meio-7)
        {
            printf(" ");
            i++;
        }    
        printf("***************\n");
    }

    i = 0;
    
    if(meio-6 >= 0)
    {
        while(i <= meio-6)
        {
            printf(" ");
            i++;
        }    
        printf("*************\n");
    }
    
    i = 0;
    
    if(meio-5 >= 0)
    {
        while(i <= meio-5)
        {
            printf(" ");
            i++;
        }    
        printf("***********\n");
    }
    
    i = 0;
    
    if(meio-4 >= 0)
    {
        while(i <= meio-4)
        {
            printf(" ");
            i++;
        }    
        printf("*********\n");
    }
    
    i = 0;
    
    if(meio-3 >= 0)
    {
        while(i <= meio-3)
        {
            printf(" ");
            i++;
        }    
        printf("*******\n");
    }
    
    i = 0;
    
    if(meio-2 >= 0)
    {
        while(i <= meio-2)
        {
            printf(" ");
            i++;
        }    
        printf("*****\n");
    }
    
    i = 0;

    if (meio-1 >= 0)
    {
        while(i <= meio-1)
        {
            printf(" ");
            i++;
        }    
        printf("***\n");
    }
    
    i = 0;
    
    while(i <= meio)
    {
        printf(" ");
        i++;
    }    
    printf("*\n");

    return 0;
}
