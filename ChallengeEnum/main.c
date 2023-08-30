#include <stdio.h>

int main(int argc, char **argv)
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
    
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    
    printf("%d\n%d\n%d\n", xerox, google, ebay);
	return 0;
}
