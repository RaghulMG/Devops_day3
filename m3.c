#include <stdio.h>

struct swap
{
    int a;
    int b;
};

int main()
{
    struct swap s1;
    s1.a = 10; // Example value for a
    s1.b = 20; // Example value for b
    
    printf("Before swap: A = %d, B = %d\n", s1.a, s1.b);

    // Swapping logic
    s1.a = s1.a + s1.b;
    s1.b = s1.a - s1.b;
    s1.a = s1.a - s1.b;

    printf("After swap: A = %d, B = %d\n", s1.a, s1.b);

    return 0;
}
