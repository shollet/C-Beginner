#include <stdio.h>

int main()
{
    int minutes;
    double years = 0.0;
    int days = 0;
    double minutesInYear = 0.0;
    
    printf("Enter the number of minutes: ");
    
    // get input
    scanf("%d", &minutes);
    
    minutesInYear = (60 * 24 * 365);
    years = (minutes / minutesInYear);
    days = (int) (minutes / 60.0) / 24.0;
    
	printf("%d minutes is:\n~%.2f years\n~%d days\n", minutes, years, days);
	return 0;
}
