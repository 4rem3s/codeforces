#include <bits/stdc++.h>
#include <vector>

int main() {
  int n;
  std::vector<std::string> a = {
      "ABSINTH", "BEER",    "BRANDY", "CHAMPAGNE", "GIN",  "RUM",
      "SAKE",    "TEQUILA", "VODKA",  "WHISKEY",   "WINE", "0",
      "1",       "2",       "3",      "4",         "5",    "6",
      "7",       "8",       "9",      "10",        "11",   "12",
      "13",      "14",      "15",     "16",        "17"};
  std::cin >> n;

  int x = 0;
  while (n--) {
    std::string s;
    std::cin >> s;
    for (int j = 0; j < a.size(); j++) {
      if (s == a[j]) {
        x++;
      }
    }
  }
  std::cout << x;
}
