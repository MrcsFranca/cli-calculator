#include <iostream>

using namespace std;

int soma(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int divi(int a, int b);

int main() {
    int a, b, s, *p;
    char op;
    do {
        cin >> a >> b >> op;
        p = &a;
        switch(op) {
            case '+':
                s = soma(a, b);
                break;
            case '-':
                s = sub(a, b);
                break;
            case '*':
                s = mult(a, b);
                break;
            case '/':
                s = divi(a, b);
                break;
        }
        cout << "O resultado da operação é: " << s << endl;
        s = 0;
        cout << p << endl << *p << endl << &p << endl << &a << endl;
    } while (a != 0 && b != 0);
}

int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}

int mult(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    if (b == 0) {
        return a / 1;
    } 
    else if (a > b) {
        return a / b;   
    }
    else {
        return b / a;
    }
}
