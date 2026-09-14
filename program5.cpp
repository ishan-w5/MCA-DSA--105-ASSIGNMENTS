#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int evaluatePostfix(string expression) {
    stack<int> s;

    for (int i = 0; i < (int)expression.length(); i++) {
        char ch = expression[i];

        if (isdigit(ch)) {
            s.push(ch - '0');  
        }
        else if (ch == '+' || ch == '-' ||
                 ch == '*' || ch == '/' || ch == '^') {

            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            int result;
            switch (ch) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
                case '^': result = (int)pow(a, b); break;
            }
            s.push(result);
        }
    }

    return s.top();
}

int main() {
    string expression;

    cout << "Enter a postfix expression: ";
    cin >> expression;

    cout << "Result = " << evaluatePostfix(expression) << endl;

    return 0;
}

