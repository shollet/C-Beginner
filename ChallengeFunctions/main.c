#include <stdio.h>

int gcd(int value1, int value2) {
    int temp;
    while (value2 != 0) {
        temp = value1;
        value1 = value2;
        value2 = temp % value2;
    }
    return value1;
}

float absoluteValue(float number) {
    return number < 0 ? -number : number;
}

float squareRoot(float number) {
    if (number < 0) {
        printf("Cannot sqrt a negative number\n");
        return -1.0;
    }
    
    const float epsilon = 1e-7;
    float x = number;
    float y;
    while (1) {
        y = (x + number / x) / 2;
        if (absoluteValue(x - y) < epsilon) {
            return y;
        }
        x = y;
    }
}

int main()
{
	int result;
    
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    
    result = gcd(150, 35);
    printf("gcd = %d\n", result);
    
    result = gcd(1026, 405);
    printf("gcd = %d\n", result);
    
    result = gcd(83, 240);
    printf("gcd = %d\n", result);
    
    printf("\n\n\n\n\n");
    
    float fresult;
    
    fresult = absoluteValue(f1);
    printf("abs = %.2f\n", fresult);
    
    fresult = absoluteValue(f2) + absoluteValue(f3);
    printf("abs = %.2f\n", fresult);
    
    fresult = absoluteValue((float) i1);
    printf("abs = %.2f\n", fresult);
    
    fresult = absoluteValue((-6.0) / 4);
    printf("abs = %.2f\n", fresult);
    
    printf("\n\n\n\n\n");
    
    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(165.0));
    
    
	return 0;
}
