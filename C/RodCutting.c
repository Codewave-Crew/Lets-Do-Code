#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int rodCutting(int prices[], int length) {
    if (length <= 0) return 0;

    int* dp = (int*)malloc((length + 1) * sizeof(int));
    if (dp == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i <= length; i++) {
        dp[i] = 0;
    }

    for (int i = 1; i <= length; i++) {
        int max_price = -1;
        for (int j = 1; j <= i; j++) {
            max_price = max(max_price, prices[j - 1] + dp[i - j]);
        }
        dp[i] = max_price;
    }

    int max_profit = dp[length];
    free(dp);

    return max_profit;
}

int main() {
    int n;
    printf("Enter the number of pieces: ");
    scanf("%d", &n);

    int* prices = (int*)malloc(n * sizeof(int));
    if (prices == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter the prices for each piece:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int length;
    printf("Enter the length of the rod: ");
    scanf("%d", &length);

    int max_profit = rodCutting(prices, length);
    printf("Maximum profit: %d\n", max_profit);

    free(prices);
    return 0;
}
