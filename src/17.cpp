#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; ++i) {
            if (i * i == n) {
                return 0; // Even number found
            }
        }
    } else {
        cout << "The entered integer is odd." << endl;
    }

    return 0;
}
