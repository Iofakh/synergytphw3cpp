#include <stdio.h>

main()
{
    long long pin1, pin2;
    printf("pin_1 = ");
    scanf("%i", &pin1);
    printf("pin_2 = ");
    scanf("%i", &pin2);

    if (((pin1 == 54775807)&&(pin2 == 54775803))||((pin1 == 54775806)&&(pin2 == 54775802))||((pin1 == 54775805)&&(pin2 == 54775801))||((pin1 == 54775805)&&(pin2 == 54775804)))
    {
        printf("OK");
    }   
    else
    {
        printf("error");
    }

}
