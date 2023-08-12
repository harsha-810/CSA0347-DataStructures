#include<stdio.h>
#include<conio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
  printf("Enter the number of elements in stack");
  scanf("%d",&n);
  while(choice!=4)
  {
  printf("Choose one from below option:");
  printf("1.push\n 2.pop\n 3.show\n 4.exit");
  scanf("%d",&choice);
  switch(choice)
  {
  case1:
  {push();
  break;
  }
  case2:
  {pop();
  break;
  }
  case3:
  {show();
  break;
  }
  case4:
  {printf("Exit");
  break;
  }
  default:
  {
  printf("please enter valid choice");
  }
  }
void push();
{
int val;
if(top==n)
printf("\n overflow");
else
{
printf("Enter the value");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop();
{
if(top==-1)
printf("underflow");
else
top=top-1;
}
void show();
{
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
if(top==-1)
{
printf("Stack is empty");
}
}
}