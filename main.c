#include <stdio.h>
#include <math.h>

main()
{
    #define Freez_pt 32
    #define Scale_factor (5.0/9.0)
    float cel, fah;
    printf("Please enter your temperature in fahrenheit ");
    scanf("%f", &fah);
    // cell = ((fah-32) *(5.0/9.0)) ;
    cel= ((fah-Freez_pt) *Scale_factor ) ;
    printf ( "\n Your temperature in Celsius is : %.3f \n", cel);
    return 0 ;
}
