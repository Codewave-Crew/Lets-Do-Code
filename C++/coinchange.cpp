#include <bits/stdc++.h>  
using namespace std;  
  
  
int minCoins(int coins[], int total_coins, int N) // Function to return the minimum // coins needed   
{  
        if (N == 0) // If we have a combination then   
        return 0;  
  
    int result = INT_MAX; // Currently result is initialised as INT_MAX   
  
    for (int i = 0; i < total_coins; i++) // run until availability of coins  
    {  
        if (coins[i] <= N) { // Add to the list of counting   
            int sub_res = 1 + minCoins(coins, total_coins, N - coins[i]); // add 1 due to the coin inclusion  
            // see if result can minimize  
            if (sub_res < result)  
                result = sub_res;  
        }  
    }  
    return result;  
}  
  
int main()  
{  
    int coins[] = { 10, 25, 5 };  
    int sum = 30; // the money to convert  
    int total_coins = 3; // total availability of coins  
    cout << "Minmum coins needed are " << minCoins(coins, total_coins, sum);  
}  
