#include <bits/stdc++.h>
int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
    std::string str;
    std::cin >> str;

    size_t piv = str.find('^');
    int n = str.length();
    long long l = 0, r = 0;

    // left
    for (int i = 0; i < piv; ++i) {
        if (str[i] >= '1' && str[i] <= '9') {
            int w = str[i] - '0';
            l += w * (piv - i);
        }
    }

    for (int i = piv + 1; i < n; ++i) {
        if (str[i] >= '1' && str[i] <= '9') {
            int w = str[i] - '0';
            r += w * (i - piv);
        }
    }
    if (l > r) {
        std::cout << "left";
    } else if (r > l) {
        std::cout << "right";
    } else {
        std::cout << "balance";
    }

    return 0;
}

