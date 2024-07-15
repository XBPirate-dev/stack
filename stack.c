
#include<stdlib.h>
#include<stdio.h>
int stack [50],top=0,i,max,ch,item;
void push();
void pop();
void display();
void main()
{
	printf("Enter maximum size of the stack: ");
	scanf("%d",&max);
	do
	{
	printf("\n MENU \n 1:PUSH \n 2:POP \n 3:DISPLAY \n 4:EXIT \n ");
	printf("Enter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: push();
				break;
		
		case 2: pop();
				break;
		
		case 3: display();
				break;
		case 4: exit (1);
		
		default : printf("Wrong choice");
		}
		  
	} while (ch<4); 

} 
void push()
{
	if(top>=max)
	printf("Overflow");
	else
	{
	top++;
	printf("Enter element:");
	scanf("%d",&item);
	stack[top]=item;
	}
}
void pop()
{
	if(top==0)
	printf("Underflow");
	else
	{
		item=stack[top];
		top--;
		printf("%d is deleted ",item);
	}
}
void display()
{
	if(top==0)
	  printf("StaCK EMPTY");
	  else
	  {
	  for(i=1;i<=top;i++)
			printf("%d\t",stack[i]);
	  }
}
		
		
