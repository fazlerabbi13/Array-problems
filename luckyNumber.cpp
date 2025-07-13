#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    int min_val = INT_MAX;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] < min_val) {
            min_val = A[i];
        }
    }
    int freq = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == min_val) {
            freq++;
        }
    }
    cout << (freq % 2 == 1 ? "Lucky" : "Unlucky") << endl;
    return 0;
}