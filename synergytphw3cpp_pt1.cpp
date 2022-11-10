#include <stdio.h>

main()
{
    int pin1, pin2;
    printf("pin_1 = ");
    scanf("%i", &pin1);
    printf("pin_2 = ");
    scanf("%i", &pin2);

    if ((pin1 == 9020)&&(pin2 == 5050))
    {
        printf("OK");
    }
    else
    {
        printf("error");
    }

}
