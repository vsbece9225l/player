#include <stdio.h>

int main() {
	int day;
	printf("enter the day");
	scanf("%d",&day);
	switch(day)
	{
	    case 1:printf("\nsunday");
	           printf("\nworking day");
	           break;
	    case 2:printf("\nmonday");
	           printf("working day");
	           break;
	    case 3:printf("\ntuesday");
	           printf("working day");
	           break;
	    case 4:printf("\nwednesday");
	           printf("working day");
	           break;
	    case 5:printf("\nthuresday");
	           printf("working day");
	           break;
	    case 6:printf("friday");
	           printf("working day");
	           break;
	    case 7:printf("holiday");//saturday        
	}
	return 0;
}
