#include <iostream>
using namespace std;

int nr, r, s, j, x, y, i, n, m, a[11][11];

int main() {

  cin >> n;
  cin >> m;

  // Generate adjacency matrix
  for (i = 1; i <= m; i++) {
    cin >> x >> y;
    a[x][y] = 1;
    a[y][x] = -1;
  }

  for (i = 1; i <= n; i++) {
    s = 0;
    for (j = 1; j <= n; j++) {
      if (a[i][j] > 0) {
        s = s + 1;
        for (r = 1; r <= n; r++) {
          if (a[j][r] > 0) {
            s = s + 1;
          }
        }

        if (s > n/2) {
          nr++;
        }
      }

      if (a[i][j] < 0) {
        s = s + 1;
        for (r = 1; r <= n; r++) {
          if (a[j][r] < 0) {
            s = s + 1;
          }
        }

        if (s > n/2) {
          nr++;
        }
      }
    }
  }

  cout << nr << " bile nu pot avea greutatea mediana";

  return 0;
}
