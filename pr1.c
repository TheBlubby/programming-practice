#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Введіть 3 числа:\n");
    scanf("%d %d %d", &t1, &t2, &t3); // Введення трьох чисел

    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3; // Обчислення загального часу

    double cake_time = 1.0 / total_time; // Обчислення часу, за який гості з'їдять пиріг

    printf("Час необхідний для зїдання пирога: ""%.2f\n", cake_time); // Виведення результату з округленням до 2 знаків після коми

    return 0;
}

