#include <stdio.h>
#include <math.h>
int getLength(int number)
{
    int count;
    while (number > 0)
    {
        count++;
        number /= 10;
    }
    return count;
}

int power(int number, int digit)
{
    int returnPower = 1;
    for (int i = 0; i < digit; i++)
    {
        returnPower *= number;
    }

    return returnPower;
}

void armstrongNumber(int number, int digit)
{
    int sum;
    int something = 1;
    int temp = number;
    while (number > 0)
    {
        int lastDigit = number % 10;
        int dig = power(lastDigit, digit);
        sum += dig;
        number /= 10;
    }
    sum == temp ? printf("Armstrong number!") : printf("Not armstrong number");
}
int main()
{

    int base_number;
    printf("Enter number: ");
    scanf("%d", &base_number);
    int length = getLength(base_number);
    armstrongNumber(base_number, length);
}