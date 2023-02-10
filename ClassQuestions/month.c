#include <stdio.h>

int main()
{
    int year, month;
    scanf("%d %d", &month, &year);

    int days = 0;
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        switch (month)
        {
        case 12:
            days += 31;
        case 11:
            days += 30;
        case 10:
            days += 31;
        case 9:
            days += 30;
        case 8:
            days += 31;
        case 7:
            days += 31;
        case 6:
            days += 30;
        case 5:
            days += 31;
        case 4:
            days += 30;
        case 3:
            days += 31;
        case 2:
            days += 29;
        case 1:
            days += 31;
        default:
            break;
        }
    }
    else
    {
        switch (month)
        {
        case 12:
            days += 31;
        case 11:
            days += 30;
        case 10:
            days += 31;
        case 9:
            days += 30;
        case 8:
            days += 31;
        case 7:
            days += 31;
        case 6:
            days += 30;
        case 5:
            days += 31;
        case 4:
            days += 30;
        case 3:
            days += 31;
        case 2:
            days += 28;
        case 1:
            days += 31;
        default:
            break;
        }
    }

    printf("Days: %d\n", days);
}