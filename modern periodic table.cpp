#include<stdio.h>
int main()
{
	int n;
	int m;
	int a;
	int exit;
	int exi;
	printf("Welcome to modern periodic table/n/n");
	printf("> enter 1to know about an element/n/n");
	printf(">enter 2 to close the periodic table /n/n");
	printf("enter/n");
	scanf("%d", &n);
	if(n==1)
	{
		printf(">press 3 to search the element by atomic number /n/n");
		printf("enter /n");
		scanf("%d",&m);
		if(m==3)
		{
			printf("enter the atomic number of the element to searched :n");
			scanf("%d", &a);
			if(a==1)
			{
				printf("Name : hydrogen \n");
				printf("symbol:h\n");
				printf("atomic number :1\n");
				printf("electronic configuration :1s^ 1\n");
				printf("charge :+1\n");
			}
			else if(n==2)
			{
				printf("do you want to exit ?(yes/no)\n");
				printf("> press 8 for no\n");
				printf("enter\n");
				if(exit==6)
				{
					printf("are you sure, you wanna leave/close the periodic table?(yes/no)\n");
					printf(">press 6 for yes/n");
					printf("> press 7 for no/n");
					scanf("%d", & exit);
					if(exi==4)
					{
						printf("the periodic table has closed");
					}
					else if (exi==7)
					{
						printf("periodic table has not closed and you can continue learn more about the elements\n\n");
						printf("enter the atomic number of the element to be searched :\n\n");
						scanf("%d" ,& a);
						if(a==1)
						{
							printf("name : hydrogen/n");
							printf("symbol :h/n");
							printf("atomic no :1\n");
							printf("electronic configuration :1s^1\n");
							printf("discovered by :zaara khan\n");
							printf("charge : +1\n");
						}
						else if(exit==8)
						{
							printf("periodic table has not closed and youy can continue to learn more elements /n/n");
							printf("enter the atomic number of the element to be searched :");
							scanf("%d" ,& a);
							if(a==1)
							{
							printf("name : hydrogen/n");
							printf("symbol :h/n");
							printf("atomic no :1\n");
							printf("electronic configuration :1s^1\n");
							printf("discovered by :zaara khan\n");
							printf("charge : +1\n");	
							}
						}
				
					}
				}
			}
		}
	}
}
