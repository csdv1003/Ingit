#include<stdio.h>
int main()
{
int arr[100],j,i,a,b,num,n;
printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("\nEnter elements in the array: ");
    for(a=0; a<num; a++)
    {
        scanf("%d", &arr[a]);
    }
printf("Enter the position for deletion");
scanf("%d",&j);
for(a=j;a<=num-1;a++){
   arr[a]=arr[a+1];
}
num--;
printf("Array after deletion");
for(a=0;a<num;a++)
printf("%d ",arr[a]);
printf("Enter the position for insertion");
scanf("%d",&i);
printf("Enter the value which should be inserted at given position ");
scanf("%d",&n);
num++;

for(b=num;b>=i;b--)
{
arr[num]=arr[num-1];
  }
  arr[i]=n;
printf("Array after insertion");
for(b=0;b<num;b++)
printf("%d ",arr[b]);
return 0;
}

