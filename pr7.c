#include <stdio.h>

int main() {
    float x1, y1, r1, x2, y2, r2;
    int intersection_points = 0;

    // Введення координат і радіусів колів
    printf("Введіть координати та радіус першого кола (x1, y1, r1): ");
    scanf("%f %f %f", &x1, &y1, &r1);

    printf("Введіть координати та радіус другого кола (x2, y2, r2): ");
    scanf("%f %f %f", &x2, &y2, &r2);

    // Обчислення відстані між центрами колів
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Перевірка випадків, коли кола не перетинаються
    if (distance > r1 + r2) {
        printf("Кола не перетинаються. Кількість точок перетину: 0\n");
    } else if (distance < fabs(r1 - r2)) {
        printf("Одне коло міститься всередині іншого. Кількість точок перетину: 0\n");
    } else if (distance == 0 && r1 == r2) {
        printf("Кола ідентичні. Кількість точок перетину: -1\n");
    } else {
        // Обчислення кількості точок перетину
        if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
            intersection_points = 1;
        } else if (distance < r1 + r2 && distance > fabs(r1 - r2)) {
            intersection_points = 2;
        } else {
            intersection_points = -1;
        }

        // Виведення результату
        printf("Кількість точок перетину: %d\n", intersection_points);
    }

    return 0;
}
