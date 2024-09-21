#include<stdio.h>
#include<stdlib.h>
#include<windows.h> // for Sleep() function

int main()
{
    for(int i = 0; i < 24; i++)
    {
        for(int j = 0; j < 60; j++)
        {
            for(int k = 0; k < 60; k++)
            {
                printf("\t\t|\t%d : %d : %d\t|\n",i,j,k);
                Sleep(1000);
                system("cls");
            }
        }
    }
    return 0;
}