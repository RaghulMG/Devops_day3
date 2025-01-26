#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Raghul";
    char str2[20];
    printf("Befre cpy: %s\n",str1);
    strcpy(str2,str1);
    printf("Aftr cpy: %s\n",str2);
    return 0;
}