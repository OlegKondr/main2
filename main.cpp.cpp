#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main() 
{
    int a,b;
    printf("a=");
    scanf("%i",&a);
    printf("b=");
    scanf("%i",&b);
    if (a>b)
    {
        printf(" a bolshe");
	}
	else
	{
	    if(a==b)
	    {
	    	printf(" a=b");
		}
		else
		{
			printf(" b bolshe");
		}
	}
}

