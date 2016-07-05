#include<stdio.h>
int main()
{
int A;
scanf("%d",&A);
int arr[A][A];
for(int i=0;i<A;i++)
{
for(int j=0;j<A;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("Elements:\t index:\t sum:\n\n");
int sum = arr[0][0],i=0,j=0;
while(i!=A-1 || j!=A-1)
{
if((i==A-1 && j!=A-1))
{
j++;
sum+=arr[i][j];
}
else if(arr[i+1][j]>arr[i][j+1])
{
i++;
sum+=arr[i][j];
}
else
{
j++;
sum+=arr[i][j];
}
printf("Array:%d\t(%d,%d) \t\t sum:%d\n", arr[i][j],i,j,sum);
}
printf("\n\n The maximum sum:%d\n\n\n",sum);
}
