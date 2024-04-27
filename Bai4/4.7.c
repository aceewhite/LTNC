#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool checkLeft(char r[1000][1000], int i, int j, ll w, ll h) {
    if (r[i + 1][j - 1] != 'R' && i + 1 < w && j - 1 >= 0 && r[i][j - 1] != 'R') return true;
    return false;
}
bool checkRight(char r[1000][1000], int i, int j, ll w, ll h) {
    if (r[i + 1][j + 1] != 'R' && i + 1 < w && j + 1 < h && r[i][j + 1] != 'R') return true;
    return false;
}
bool check(char r[1000][1000], int i, int j, ll w, ll h) {
    if (r[i + 1][j] != 'R' && i + 1 < w) return true;
    return false;
}
int main() {
    ll w, h;
    cin >> h >> w;
    char R[1000][1000];
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cin >> R[i][j];
        }
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            if (R[i][j] == 'Y') {
                if (checkLeft(R, i, j, w, h)) {
                    R[i + 1][j - 1] = 'Y';
                }
                if (checkRight(R, i, j, w, h)) {
                    R[i + 1][j + 1] = 'Y';
                }
                if (check(R, i, j, w, h)) {
                    R[i + 1][j] = 'Y';
                }
            }
        }
    }
    for (int j = 0; j < h; j++) {
        if (R[w - 1][j] == 'Y') {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
    return 0;
}
