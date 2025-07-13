#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    char digit;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> digit;
        sum += digit - '0';
    }
    cout << sum << endl;
    return 0;
}