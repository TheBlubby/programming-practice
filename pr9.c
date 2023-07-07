#include <stdio.h>

// Функція для обчислення мінімальної кількості кроків
int minSteps(int x, int y) {
    int steppp = y - x;  // Визначення різниці між x та y

    // Обробка випадку, коли steppp <= 3
    if (steppp <= 3) {
        return steppp;
    }

    int steps = 0;  // Ініціалізація змінних
    int power = 1;
    int range = 2;

    // Знаходження найближчої степені двійки, більшої за steppp
    while (range <= steppp) {
        power++;
        range *= 2;
    }

    // Обчислення кількості кроків
    if (steppp <= (range - range/2)) {
        steps = power;
    } else {
        steps = power + 1;
    }

    return steps;
}

int main() {
    int x, y;
    printf("Введіть x: ");
    scanf("%d", &x);
    printf("Введіть y: ");
    scanf("%d", &y);

    int steps = minSteps(x, y);
    printf("Мінімальна к-сть кроків: %d\n", steps);

    return 0;
}
