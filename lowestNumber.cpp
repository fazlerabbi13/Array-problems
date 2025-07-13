#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int min_val = A[0], min_pos = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] < min_val) {
            min_val = A[i];
            min_pos = i + 1;
        }
    }
    cout << min_val << " " << min_pos << endl;
    return 0;
}