#include<stdio.h>

main()

{
	int unit,ele_bill,sr,total,b;
	
	printf("enter the unit=");
	scanf("%d",&unit);
	
	if(unit<=50)
    {
    	ele_bill=unit*0.50;
    	printf("ele_bill = %d",ele_bill);
	}
	else if(unit<=150)
	{
		ele_bill=(unit-50)*0.75+25;
		printf("ele_bill = %d",ele_bill);
		
	}
	else if(unit<=250)
	{
		ele_bill=(unit-150)*1.20+100;
		printf("ele_bill = %d",ele_bill);
	}
	else if(unit>250)
	{
		ele_bill=(unit-250)*1.50+150;
		printf("ele_bill = %\n",ele_bill);
	}
	
	{
		sr=ele_bill*0.2;
		printf("\nsr= %d\n",sr);
		
		b=ele_bill+sr;
		printf("total=%d",b);
		
	}
	
}
