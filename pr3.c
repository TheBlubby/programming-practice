#include <stdio.h>

// Функція для обрахунку кількості чисел з розрядами
// з умовою, що три однакові цифри не стоять поруч
int countNumbers(int r) {
    if (r <= 0) {
        return 0;
    }

    int count = 0;

    // Перебираємо всі можливі комбінації чисел
    // з розрядами, використовуючи цифри 5 та 9
    for (int i = 0; i < (1 << r); i++) {
        int hasRepeating = 0;
        int prevDigit = -1;

        // Перебираємо всі розряди числа
        for (int j = 0; j < r; j++) {
            int digit = (i >> j) & 1;

            if (digit == prevDigit && digit == 1) {
                hasRepeating = 1;
                break;
            }

            prevDigit = digit;
        }

        if (!hasRepeating) {
            count++;
        }
    }

    return count;
}

int main() {
    int r;

    printf("Введіть кількість розрядів (р): ");
    scanf("%d", &r);

    int result = countNumbers(r);

    printf("Кількість чисел з %d розрядами: %d\n", r, result);

    return 0;
}
