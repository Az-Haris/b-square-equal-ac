#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter 3 Number : ");
    scanf("%d%d%d", &a,&b,&c);
    (pow(b,2)==a*c) ? printf("Proportional") : printf("Not Proportional");


    /*
    if(pow(b,2)==a*c)
    {
        printf("Proportional")
    }
    else
    {
        printf("Not Proportional");
    }
    */


    getch();
    return 0;
}
