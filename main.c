#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Вариант 15
// h = (x^(y+1) + e^(y-1)) / (1 + x*|y - tg z|) * (1 + |y - x|) + |y - x|^2 / 2 - |y - x|^3 / 3
// Контрольный пример: x = 2.444, y = 0.869e-2, z = -0.13e3, h = -0.49871
int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, z, h;
    puts("h = (x^(y+1) + e^(y-1)) / (1 + x*|y - tg z|) * (1 + |y - x|) + |y - x|^2 / 2 - |y - x|^3 / 3");
    puts("Введите x, y, z");
    scanf("%lf %lf %lf", &x, &y, &z);
    h = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z))) * (1 + fabs(y - x))
        + pow(fabs(y - x), 2) / 2 - pow(fabs(y - x), 3) / 3;
    printf("При x = %g, y = %g, z = %g\nh = %.5f\n", x, y, z, h);
    return 0;
}
