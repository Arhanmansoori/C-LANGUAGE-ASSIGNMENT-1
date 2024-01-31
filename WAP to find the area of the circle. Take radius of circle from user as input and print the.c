#include<stdio.h>
#include<conio.h>
void main()
{

    float A,R;
    printf("enter the radius of circle : \n");
    scanf("%f",&R);
    A=3.14*R*R;
    printf("the Area A of circle having the radius R is %.2f",A);
    getch();
}
