#include <bits/stdc++.h>

std::pair<int, char> v[4];
int main() {

  for (int i = 0; i < 4; i++) {
    std::string input;
    std::cin >> input;
    v[i].first = input.size() - 2;
    v[i].second = input[0];
  }
  sort(v, v + 4);

  if ((v[0].first * 2 <= v[1].first) && (v[3].first >= v[2].first * 2)) {
    std::cout << "C\n";
  } else if (v[0].first * 2 <= v[1].first) {
    std::cout << v[0].second << "\n";
  } else if (v[3].first >= v[2].first * 2) {
    std::cout << v[3].second << "\n";
  } else
    std::cout << "C\n";
  return 0;
}

