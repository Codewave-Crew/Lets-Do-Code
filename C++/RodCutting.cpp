#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int rodCutting(vector<int>& prices, int length) {
    if (length <= 0) return 0;

    vector<int> dp(length + 1, 0);

    for (int i = 1; i <= length; i++) {
        int max_price = INT_MIN;
        for (int j = 1; j <= i; j++) {
            max_price = max(max_price, prices[j - 1] + dp[i - j]);
        }
        dp[i] = max_price;
    }

    return dp[length];
}

int main() {
    int n;
    cout << "Enter the number of pieces: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the prices for each piece:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int length;
    cout << "Enter the length of the rod: ";
    cin >> length;

    int max_profit = rodCutting(prices, length);
    cout << "Maximum profit: " << max_profit << endl;

    return 0;
}
