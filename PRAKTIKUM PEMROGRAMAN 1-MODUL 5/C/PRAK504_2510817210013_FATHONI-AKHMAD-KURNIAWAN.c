#include <stdio.h>
int reverse(int n)
{
    int reversed_number = 0;
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        reversed_number = (reversed_number * 10) + digit;
        n = n / 10;
    }
    return reversed_number;
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
}
