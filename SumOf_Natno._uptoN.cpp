#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "The sum of natural numbers up to " << N << " is " << sum << endl;
    return 0;
}
