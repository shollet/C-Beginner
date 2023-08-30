#include <stdio.h>

int main(void)
{
	int number = 10;
    int *pnumber = &number;
    
    printf("pnumber's address: %p\n", &pnumber);
    printf("pnumber's value: %p\n", pnumber);
    printf("pointed value: %d\n", *pnumber);
    
	return 0;
}
