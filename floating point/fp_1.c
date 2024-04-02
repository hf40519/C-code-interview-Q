#include <stdio.h>
#include <math.h>

int main()
{
    // float f = 5, g = 10;
    // printf("%f\n", f << 2); // float不能左移右移
    // printf("%lf\n", f % g); // float不能使用%取餘數 > 要使用fmod


    int f = 5;
    int g = 10;

    printf("%d\n", f << 2);
    printf("%d\n", f % g);
    printf("%f\n", fmod(f, g));
    return 0;
}