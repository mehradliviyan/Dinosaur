/*
author : Mehrad Liviyan
date : 2023/1/11
subject : game with c
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define HIGHT 10
#define WIDTH 50
int main()
{
    int chance = rand() % 4;
        int ymane = 1 ;
        int xmane = 0;
        if (chance == 0)
        {
            ymane = rand() % 5 + 5;
            xmane = WIDTH-3;
        }
        else 
        {
            xmane = WIDTH-3;
        }
    int xabr = 0  , yabr = 0;
    xabr = rand() % WIDTH +1;
    yabr = rand() % 5 + 5;
    int x2abr = 0  , y2abr = 0;
    x2abr = rand() % WIDTH +1;
    y2abr = rand() % 5 + 5;
    int x = 1 , y = 1;
    int flagy = 0;
    char a;
    //a = getchar();
    while (/*a  == '\n' || a == ' '*/1)
    {
        if (kbhit())
        {
            y = y +3;
            flagy = 1;
            getchar();
        }
        /*if (a == ' ')
        {
            y = y + 3;
            flagy = 1;
        }*/
        for (int hight = HIGHT; hight >= 1; hight--)
        {
            for (int width = 1; width <= WIDTH; width++)
            {
            if (x == width && y == hight)
            {
                printf("#");
            }
            else
            {
                if ((xabr == width && yabr == hight) || (x2abr == width && y2abr == hight))
                {
                    printf("abr");
                }
                else
                {
                    if (xmane == width && ymane == hight)
                    {
                        printf("khar");
                    }
                    else
                    {
                    printf(" ");
                    }
                }
            }
            }
            printf("\n");
        }
    for (int i = 1; i <= WIDTH; i++)
    {
        printf("-");
    } 
    if (xmane == x && ymane == y)
    {
        printf("GAME OVER");
        return 1;
    }
    
    xmane--;
    if (xmane == 0)
    {
        chance = rand() % 4;
        
        ymane = 1 ;
        xmane = 0;
        if (chance == 0)
        {
            ymane = rand() % 5 + 5;
            xmane = WIDTH-3;
        }
        else 
        {
            xmane = WIDTH-3;
        }
    }
    
    xabr--;
    if (xabr == 0)
    {
        xabr = rand() % WIDTH +1;
        yabr = rand() % 5 + 5;
    }
    x2abr--;
    if (x2abr == 0)
    {
        x2abr = rand() % WIDTH +1;
        y2abr = rand() % 5 + 5;
    }
    x++;
    if (x >= WIDTH / 2)
    {
        x = x-1;
    }
    if (y >= 2)
    {
        y = y-1;
        flagy = 0;
    }
   // a = getchar();
    usleep(100000);
    system("cls");
    }   
}