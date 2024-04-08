#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> giftsgiven(n);
  for (int i = 0; i < n; i++) {

    int givenTo;
    cin >> givenTo;
    giftsgiven[givenTo - 1] = i + 1;
  }
  for (int i = 0; i < n; i++) {
    cout << giftsgiven[i] << " ";
  }

  return 0;
}
