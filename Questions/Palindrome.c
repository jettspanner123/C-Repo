#include <stdio.h>

void Palindrome(int number)
{
    int temp = number;
    int last_digit, reverse;
    while (number > 0)
    {
        last_digit = number % 10;
        reverse = (reverse * 10) + last_digit;
        number /= 10;
    }
    temp == reverse ? printf("Its a Palindrome Number\n") : printf("Its not a Palindrome Number\n");
}
int main()
{
    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    Palindrome(base_number);
    return 0;
}