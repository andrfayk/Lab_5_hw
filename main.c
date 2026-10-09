#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Вариант 10
// a = 2^(-x) * sqrt(x + |y|^(1/4)) * cbrt(e^(x - 1/sin(z)))
// Контрольный пример: x = 3.981e-2, y = -1.625e3, z = 0.512, a = 1.26185
int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, z, a;
    puts("a = 2^(-x) * sqrt(x + |y|^(1/4)) * cbrt(e^(x - 1/sin(z)))");
    puts("Введите x, y, z");
    scanf("%lf %lf %lf", &x, &y, &z);
    a = pow(2.0, -x) * sqrt(x + pow(fabs(y), 1.0 / 4)) * pow(exp(x - 1 / sin(z)), 1.0 / 3);
    printf("При x = %g, y = %g, z = %g\na = %.5f\n", x, y, z, a);
    return 0;
}
