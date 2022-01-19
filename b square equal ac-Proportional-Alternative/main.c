#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float a, b, c;
    printf("Please Enter 3 Number to verify its proportionality : ");
    scanf("%f%f%f", &a, &b, &c);
    if(b*b==a*c)
    {
        printf("These Number is Proportional");
    }
    else
    {
        printf("These Number is Not Proportional");
    }

    getch();
    return 0;
}
