// punishment for overspeed
#include <stdio.h>
int main()
{
    int std, spd;
    printf("Please input the standard speed and your car's speed:");
    scanf_s("%d%d", &std, &spd);
    double std1 = std * 1.1;
    double std2 = std * 1.5;
    if (spd < 0 || std <= 0)
    {
        printf("Invalid speed!");
    }
    else if (spd >= 0 && spd < std1)
    {
        printf("OK");
    }
    else if (spd >= std1 && spd < std2)
    {
        printf("Exceed %.0lf%%. Ticket 200.", (spd * 1.0 / std - 1) * 100);
    }
    else if (spd >= std2)
    {
        printf("Exceed %.0lf%%. License revoked.", (spd * 1.0 / std - 1) * 100);
    }
    return 0;
}