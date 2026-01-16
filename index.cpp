#include <iostream>
#include <string>

using namespace std;

int evaluateExpression(string expr) {
    int sum = 0;
    int num = 0;

    for (char ch : expr) {
        if (ch >= '0' && ch <= '9') {
            num = num * 10 + (ch - '0');
        } else if (ch == '+') {
            sum += num;
            num = 0;
        }
    }

    sum += num;
    return sum;
}

int main() {
    string expr;
    cout << "Enter expression: ";
    cin >> expr;

    cout << "Result = " << evaluateExpression(expr);
    return 0;
}