#include <stdio.h>

int main() {
    int income, grade;
    double tax;

    printf("월 수입액: ");
    scanf("%d", &income);

    printf("등급(1: 생활 보호 대상자, 2: 국가 유공자, 3: 일반): ");
    scanf("%d", &grade);

    if (income < 500000) {
        tax = income * 0.02;
    } else if (income < 1000000) {
        switch (grade) {
        case 1:
        case 2:
            tax = income * 0.02;
            break;
        case 3:
            tax = 500000 * 0.02 + (income - 500000) * 0.05;
            break;
        }
    } else {
        switch (grade) {
        case 1:
        case 2:
            tax = 500000 * 0.02 + (income - 500000) * 0.05;
            break;
        case 3:
            tax = 500000 * 0.02 + 500000 * 0.05 + (income - 1000000) * 0.07;
            break;
        }
    }

    printf("총세금: %.0lf 원\n", tax);

    return 0;
}
