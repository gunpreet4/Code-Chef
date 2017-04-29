#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

char n[25][25];
int a[100];
int i=0;

void insertion()
{
	printf("enter the label name :");
	cin>>n[i];
	printf("Enter the address :");
	scanf("%d",&a[i]);
	i++;
}

void ext()
{
}

void creation()
{
			printf("\n\n\n");
			printf("\t\t--------------------------------\n");
			printf("\t\t|Symbol     |Address           |\n");
			printf("\t\t--------------------------------\n");
				for(int j=0;j<i;j++)
				{
			printf("\t\t|	%s      |  %d              |\n",n[j],a[j]);
				}
			printf("\t\t--------------------------------\n");
}

		void 0menu()
		{
	printf("\n\n\t\t 1.Insert \n\t\t2.Table\n\t\t3.Exit\n");
		}

int main()
{
while(1)
	{
		menu();
		int k;
		printf("\n\n\t\tEnter choice | ");
		scanf("%d",&k);
		switch(k)
		{
		case 1: int num;
		printf("\n\t\tEnter  number of symbol :");
		scanf("%d",&num);
		for(int j=0;j<num;j++)
			{
			insertion();
			}
		break;
		case 2: creation();
		break;
		case 3: return 0;
		break;
		default:return 0;
		}
		getch();
	}
	return 0;
}




