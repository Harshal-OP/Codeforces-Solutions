#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;
    int little_x[n] = {0};
    for (int i = 0; i < p; i++) {
        cin >> little_x[i];
    }

    int q;
    cin >> q;
    int little_y[n] = {0};
    for (int i = 0; i < q; i++) {
        cin >> little_y[i];
    }

    bool levels[n + 1] = {false};
    levels[0] = true;
    int cnt = 0;
    for (int i = 0; i < p; i++) {
        int index = little_x[i];
        if (levels[index] == false) {
            cnt++;
            levels[index] = true;
        }
    }
    for (int i = 0; i < q; i++) {
        int index = little_y[i];
        if (levels[index] == false) {
            cnt++;
            levels[index] = true;
        }
    }
    if (cnt == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}
