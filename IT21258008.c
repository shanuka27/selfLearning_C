// malabe campus_Group4.2_IT21258008_Gamage W.G.S.Y
#include<stdio.h>
 int main()
{
	int itemcode,quantity;
	float discount, billamount, price, totalprice;
	char type;
	
	printf("Enter item code(Noodles-1, Burger-2, Fried fice-3): ");
	scanf("%d", &itemcode);
	
	printf("Enter quantity : ");
	scanf("%d", &quantity);
	
	printf("Enter customer type(loylaty-L, Non loyalty-N) : ");
	type = getchar();
	
	if(itemcode = '1')
	{
		if(type = 'L')
		{
		 billamount = 530.00 * quantity;
		 discount = billamount * 25/100;
		 printf("Discount = %.2f", discount);
	    }
		if(type = 'N')
		{
		 billamount = 530.00 * quantity;
		 discount = billamount * 5/100;
		 printf("Discount = %.2f", discount);
     	}
	}
	
	else if(itemcode = '2')
	{
		if(type = 'L')
		{
		 billamount = 300.00 * quantity;
		 discount = billamount * 25/100;
		 printf("Discount = %.2f", discount);
	    }
		if(type = 'N')
		{
		 billamount = 300.00 * quantity;
		 discount = billamount * 5/100;
		 printf("Discount = %.2f", discount);
     	}
	}
	
	else if(itemcode = '3')
	{
		if(type = 'L')
		{
		 billamount = 950.00 * quantity;
		 discount = billamount * 25/100;
		 printf("Discount = %.2f", discount);
	    }
		if(type = 'N')
		{
		 billamount = 950.00 * quantity;
		 discount = billamount * 5/100;
		 printf("Discount = %.2f", discount);
     	}
	}
	
	else 
	{
		printf("invalid number");
	}
	 
	 totalprice = billamount - discount;
	 
	printf("Total bill : %.2‍f ", totalrprrice);
 	
 	return 0;
}