#include<stdio.h>
int main()
{
int num1,num2,flag_var,i,j;
printf("Enter two range(input integer only):");
scanf("%d%d",&num1,&num2);
printf("Prime number from%dand %dare:",num1,num2);
for(i=num1+1;i<num2;i++)
{
flag_var=0;
for(j=2;j<=i/2;++j)
{
    if(i%j==0)
    {
        flag_var=1;
        break;
        }
    }
    if(flag_var==0)
    print("%d",1);
    }
return 0;
}
