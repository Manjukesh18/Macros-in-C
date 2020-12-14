#include<stdio.h>
#define CAPS(ch)(ch>= 'A' && ch <='Z')
#define SMALL(ch)(ch>='a' && ch <='z')
#define ALPH(ch) (SMALL(ch) || CAPS(ch))
#define LARGE(x1,x2) ((x1>x2)?\
                     printf("%d is the biggest \n",x1):\
                     printf("%d is the biggest \n",x2))

int main()
{
    int choice,x1,x2;
    char ch,ch2,l;
    do
    {

       printf("1.Check if a letter is in caps\n");
       printf("2.Check if a letter is in small\n");
       printf("3.Check if the character is an alph\n");
       printf("4.Check which number is greater\n");
       printf("enter a choice:\n");
       scanf("%d",&choice);

       switch(choice)
       {
       case 1:
        {
            printf("Enter the char you want to check\n");
            scanf(" %c", &ch);
            printf("hi");
            if (CAPS(ch))
                printf(" Entered character %c is in caps !\n",ch);
            else{
                printf("NO\n");
            }
            break;
        }
       case 2:
        {
            printf("Enter the char you want to check\n");
            scanf(" %c", &ch2);
            if SMALL(ch2)
                printf(" Entered character %c is in small !\n",ch2);
            break;
        }
       case 3:
        {
            printf("Enter the char you want to check\n");
            scanf(" %c", &l);
            if (ALPH(l))
                printf(" Entered character is %c an alphabet !\n",l);
            break;
        }
       case 4:

       {
            printf("Enter num1 and num2\n");
            scanf("%d %d",&x1,&x2);
            LARGE(x1,x2);

            break;
       }
    }fflush(stdin);
    }while(ch==1);

return 0;

}





