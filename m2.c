#include <stdio.h>

int reversenum(int num)
{
int reverse =0;
while(num > 0)
{
reverse = (reverse * 10) + (num % 10);
num = num / 10;
}
return reverse;
}

int main()
{
int num = 12345;
printf("Reverse a num %d\n",reversenum(num));
return 0;
}
