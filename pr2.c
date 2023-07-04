#include <stdio.h>

// Функція для знаходження НСД (найбільший спільний дільник)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Функція для знаходження НСК (найменше спільне кратне)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int r;
    printf("Введіть кількість чисел р: ");
    scanf("%d", &r);

    int numbers[r];
    printf("Введіть %d натуральних чисел, розділених пробілом: ", r);
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]);
    }
