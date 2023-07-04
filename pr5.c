#include <stdio.h>

int countSequences(int n) {
    int mod = 12345;
    int dp[n + 1];

    // Ініціалізуємо початкові значення
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    // Обчислюємо кількість послідовностей
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % mod;
    }

    return dp[n];
}

int main() {
    int n;

    printf("Введіть довжину послідовностей n: ");
    scanf("%d", &n);

    int result = countSequences(n);

    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
