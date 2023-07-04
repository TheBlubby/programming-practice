#include <stdio.h>

int main() {
    int n;
    int count = 0;  // Змінна для підрахунку кількості рівних дільників

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    // Шукаємо рівні дільники числа n
    for (int i = 1; i < n; i++) {
        int quotient = n / i;  // Частка від ділення n на i
        int remainder = n % i;  // Залишок від ділення n на i

        if (quotient == remainder) {
            count++;  // Якщо частка і залишок рівні, збільшуємо лічильник
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}
