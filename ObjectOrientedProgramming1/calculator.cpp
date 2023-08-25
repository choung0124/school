#include <iostream>
using namespace std;

class Operator {
public:
    Operator() {}
    virtual ~Operator() {}
    void setValue(int x, int y) { a = x; b = y; }
    virtual int calculate() = 0;

protected:
    int a, b;
};

class Add : public Operator {
public:
    int calculate() { return a + b; }
};

class Sub : public Operator {
public:
    int calculate() { return a - b; }
};

class Mul : public Operator {
public:
    int calculate() { return a * b; }
};

class Div : public Operator {
public:
    int calculate() { return a / b; }
};

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;
    Operator* op = nullptr;

    int x, y;
    char op_char;

    while (true) {
        cout << "두 개의 정수와 연산자 입력>> ";
        cin >> x >> y >> op_char;

        switch(op_char) {
            case '+': op = &a; break;
            case '-': op = &s; break;
            case '*': op = &m; break;
            case '/': op = &d; break;
            default: cout << "잘못된 연산자입니다." << endl; continue;
        }

        op->setValue(x, y);
        cout << op->calculate() << endl;
    }

    return 0;
}