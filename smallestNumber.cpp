#include <iostream>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int min_sum = INT_MAX;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int current = A[i] + A[j] + (i + 1) * (j + 1);
                if (current < min_sum) {
                    min_sum = current;
                }
            }
        }
        cout << min_sum << endl;
    }
    return 0;
}