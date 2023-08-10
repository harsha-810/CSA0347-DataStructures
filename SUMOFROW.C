#include<stdio.h>
#include<conio.h>
int main()
{
  static int array[10][10];
  int i,j,m,n,sum=0;
  clrscr();

  printf("Enter the order of the matrix\n");
  scanf("%d %d",&m,&n);

  printf("Enter the co-efficient of the matrix\n");
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
   {
    scanf("%d\n",&array[i][j]);
    }
  }
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
       {
	 sum=sum+array[i][j];
       }
      printf("Sum of the %d row is=%d\n",i,sum);
      sum=0;
  }
  sum=0;
  for(j=0;j<n;j++)
  {
   for(i=0;i<m;i++)
   {
    sum=sum+array[i][j];
   }
   printf("Sum of the %d column is %d",j,sum);
   sum=0;
   }
   getch();
   return 0;
}