#include <iostream>
#include <cstdio>

using namespace std;

class Expression {
    private:
        double a, b, c, d, y;

    public:
        Expression() : a(0), b(0), c(0), d(0), y(0) {}

    void calc() {
        y = (a + b) / (c + (d/(a+c)));
    }

    void inputCpp() {
        cout << "Введите значения переменных a, b, c, d\n" << endl;
        cin >> a >> b >> c >> d;
    }

    void outputCpp() const {
        cout << "Искомое значение: y = " << y;
    }

    void inputC() {
        printf("Введите значение переменных a, b, c, d\n");
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    }

    void outputC() const {
        printf("Искомое значение: y=%lf\n", y);
    }
};



int main() {
    Expression e;

    // Вариант 1 C++ (cout/cin)
    e.inputCpp();
    e.calc();
    e.outputCpp();

    // Вариант 2 C (printf/scanf)
    e.inputC();
    e.calc();
    e.outputC();

    return 0;
}

