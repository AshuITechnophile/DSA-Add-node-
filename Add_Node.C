#include<studio.h>
#include<process.h>
#include<alloc.h>
typedef struct List
{
	int info;
	struct List * Link;
}
node;
node *Start,*ptr,*loc;
void add()
{
  int data;
  printf("Allocate Memory" );
  ptr = (node*)malloc (4);
  printf("Enter data into new node");
  scanf("%d",&data);
  ptr->info=data;
  if(Start==NULL)
  	{
  		Start=ptr;
  		Start->Link= NULL;
  		return;
}
void dis()
{
	if(Start==NULL)
	{
		printf("Link List is empty");
		return;
	}
	loc=Start;
    while(loc!=NULL)
    {
    	scanf("/n %d",loc->info);
    	loc=loc->Link;

    }

}
void main()
{
	int n;
	clrscr();
	printf("/n press 1 for Add /n Enter 2 for display /n 0 for Exit);
		while(1)
		{
			printf("Enter your choice");
			scanf("%d",& n)
			switch(n)
			{
			case 1:add();
				break;
			case 2:dis();
				break;
			case 0:Exit(0);


			}
		}
}

