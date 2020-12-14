#include "macroheader.h"
#include<stdio.h>
int main()
{
    int choice,a,b,c,s1,s2,s;
    float r;

    printf("enter your choice:\n");
    printf("1.Area of a triangle\n");
    printf("2.Perimeter of a triangle\n");
    printf("3.Area of a square and perimeter of a square\n");
    printf("4.Area of a circle and Perimeter of a circle\n");

    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
        {
            printf("Enter sides a,b\n");
            scanf("%d %d",&s1,&s2);
            printf("%.2f",AR_TRI(s1,s2));
            break;
        }
    case 2:
        {
            printf("sides of triangle");
            scanf("%d %d %d",&a,&b,&c);
            printf("%d",PER_TRI(a,b,c));
            break;
        }
    case 3:
        {
            printf("Enter side\n");
            scanf("%d",&s);
            printf("AREA IS %d\n",AR_SQ(s));

            printf("PERIMETER IS %d\n",PER_SQ(s));
            break;

        }
    case 4:
        {
            printf("Enter radius for circle\n");
            scanf(" %f",&r);
            printf("AREA OF CIRCLE IS %f\n",AR_CIR(r));
            printf("PER OF CIRCLE IS %f\n",PER_CIR(r));
            break;

        }

    }
    return 0;
}
