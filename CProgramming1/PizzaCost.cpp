#include <stdio.h>

int main() {
    int diameter, price;
    double radius, pizza_size, price_per_10cm;

    printf("피자 직경(cm^2)?: ");
    scanf("%d", &diameter);

    printf("피자 가격(원)?: ");
    scanf("%d", &price);

    radius = diameter / 2.0;
    pizza_size = 3.14 * radius * radius;
    price_per_10cm = price / pizza_size * 10;

    printf("피자의 크기: %.2lf cm^2\n", pizza_size);
    printf("10cm당 가격: %.2lf 원\n", price_per_10cm);

    return 0;
}
