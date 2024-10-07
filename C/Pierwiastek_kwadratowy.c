#include <math.h>
#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Podaj wyraz z x^2: \n");
    scanf("%f", &a);
    printf("Podaj wyraz z x: \n");
    scanf("%f", &b);
    printf("Podaj wyraz wolny: \n");
    scanf("%f", &c);
    
    float delta = (b*b) - (4*a*c);
    float pierwiastek_delta = sqrtf(delta);
    printf("Pierwiastek z delty wynosi: %.1f\n", pierwiastek_delta);

    if (delta > 0)
    {
        float x_one = (-b-pierwiastek_delta)/(2*a);
        float x_two = (-b+pierwiastek_delta)/(2*a);
        printf("x1 = %.1f\nx2 = %.1f\n", x_one, x_two);
    }
    if (delta == 0) 
    {
        float x = -b/(2*a);
        printf("x0 = %.1f\n", x);
    }
    else 
    {
        printf("Brak przecięć z osią");
    }

    return 0;
}


