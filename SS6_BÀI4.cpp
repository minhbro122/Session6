#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Nhap a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else {
            printf("Phuong trinh co mot nghiem: x = %.2lf\n", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2lf\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        }
    }

    return 0;
}

