#include <stdio.h>

main() 
{
    int n, r = 0, remainder, t;
    
    printf("Enter an n: ");
    scanf("%d", &n);
    
    t=n;
    
    for (; n != 0; n /= 10) 
	{
        remainder = n % 10;
        r = r * 10 + remainder;
    }
    
    printf("Reversed value = %d\n", r);
    
    if(t==r)
    {
    	printf("this is palindrom");
	}
	else 
	{
		printf("this is not palindrom");
	}
}
