#include <stdio.h>
#include <string.h>

// Функція для обміну значень двох символів
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Функція для генерації анаграм та підрахунку їх кількості
void generateAnagrams(char *word, int start, int end, int *count) {
    int i;
    if (start == end) {
        printf("%s\n", word); // Виводимо анаграму
        (*count)++; // Збільшуємо лічильник анаграм
    } else {
        for (i = start; i <= end; i++) {
            // Перевіряємо, чи символи вже були оброблені
            int isDuplicate = 0;
            for (int j = start; j < i; j++) {
                if (word[j] == word[i]) {
                    isDuplicate = 1;
                    break;
                }
            }
            if (isDuplicate) {
                continue; // Пропускаємо обробку дублікатів
            }

            swap((word + start), (word + i)); // Міняємо місцями дві букви
            generateAnagrams(word, start + 1, end, count); // Рекурсивно генеруємо анаграми для підмасиву
            swap((word + start), (word + i)); // Відновлюємо початковий порядок букв
        }
    }
}

int main() {
    char word[15];
    int count = 0;

    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);

    printf("Анаграми для слова \"%s\":\n", word);
    generateAnagrams(word, 0, length - 1, &count);

    printf("Кількість анаграм: %d\n", count);

    return 0;
}
