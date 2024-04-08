#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int coins[101];
  for (int i = 0; i < n; ++i) {
    cin >> coins[i];
  }
  sort(coins, coins + n, greater<int>());

  int total = 0;
  for (int i = 0; i < n; ++i) {
    total = total + coins[i];
  }

  int count = 0;
  int mycoin = 0;
  int twin = total;
  for (int i = 0; i < n; ++i) {
    mycoin = mycoin + coins[i];
    twin = twin - coins[i];
    count = count + 1;
    if (mycoin > twin) {
      break;
    }
  }
  cout << count;
  return 0;
}
