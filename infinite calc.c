#include<stdio.h>

void calc()
{
	int n,a,b;

	while(n<6)
	{
		
		printf("\nEnter Your Choice = ");
		scanf("%d",&n);
		
		if(n==6)
		{
			
			printf("Exit...");
				
		}		
		else if(n>6)
		{
			
			printf("\nEnter valid value...");
			
		}
		else if(n<6)
		{
			
			printf("Enter First Number = ");
			scanf("%d",&a);

			printf("Enter Second Number = ");
			scanf("%d",&b);

		}
			switch(n)
			{
				case 1:
					printf("%d + %d = %d",a,b,a+b);
					break;
				case 2:
					printf("%d - %d = %d",a,b,a-b);
					break;
				case 3:
					printf("%d * %d = %d",a,b,a*b);
					break;
				case 4:
					printf("%d / %d = %d",a,b,a/b);
					break;
				case 5:
					printf("%d %% %d = %d",a,b,a%b);
					break;
			}
	}	
}

main()
{
	printf("\n1. Addition\n");
	printf("2. Sabstraction\n");
	printf("4. Division\n");
	printf("3. Multiplication\n");
	printf("5. Modulos\n");
	printf("6. Exit\n");

	calc();
}