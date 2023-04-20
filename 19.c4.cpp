#include<stdio.h>
// Write C program use switch statement. Display Monday to Sunday.
main()
{
     int choise; 


	printf("M for MONDAY");
	printf("T for TUESDAY");
	printf("W for WEDNESDAY");
	printf("t for THURSDAY");
	printf("F for FRIDAY");
	printf("S for SATURDAY");
	printf("s for SUNDAY");
	printf("entre your choise=");
	scanf("%d",&choise);

	switch(choise)
	{
		case 'M':
			printf("MONDAY");
			break;
		case 'T':
			printf("TUESDAY");
			break;
		case 'W':
			printf("WEDNESDAY");
			break;
		case 't':
			printf("THURSDAY");
			break;	
		case 'F':
			printf("FRIDAY");
			break;
		case 'S':
			printf("SATURDAY");
			break;
		case 's':
			printf("SUNDAY");
			break;			

			default:					

	        printf("plz recheck");

     }
}      
