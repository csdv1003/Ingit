#include<stdio.h>
#include<stdlib.h>
void main()
{
int j,stack[5]={0};
int p=0,stop;
printf("Press 1 to enter elements in stack or press 0 to terminate");
scanf("%d",&stop);
if (stop==0)
{
printf("\nBy choice terminated:");
}
else
{
while(stop==1)
{
printf("Enter Element\n");
scanf("%d",&stack[p]);
p++;
if(p>4)
{
    printf("Stack is full you cannot enter more elements\n");
break;
}
else
printf("Stack is empty you can enter more elemnts\n");
}
}
printf("\nElements of stack are:\n");
for(j=0;j<5;j++)
{
   printf("%d",stack[j]);
}
}

