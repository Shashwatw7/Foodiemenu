#include<stdio.h>
main()
{
	printf("Food item\n. Price");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		 case 1:
	    printf("Pizza, \n.Rs 239");
	    break;	
	       case 2:
	    printf("Burger, \n.Rs 129");
	    break;
	    	case 3:
	 printf("Pasta, \n.Rs 179");
	 break;
	 printf("French fries, \n.Rs 99");
	 break;
	 case 5:
	 printf("Sandwich, \n.Rs 149");
	 break;
	 default : printf("Invalid choice");
	}
}
