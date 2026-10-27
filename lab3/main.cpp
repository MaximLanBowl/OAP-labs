#include <iostream>
#include <math.h>

using namespace std;

void input(double &x, double &eps) {
    cout << "Ввод x, eps" << endl;
    cin >> x >> eps;
}

void output(double F, double x) {
    cout << "F = " << F << endl;
    cout << "ln x = " << log(x) << endl;
}

void preCondition() { 
    double x, eps;
    input(x, eps); // Ввод x, eps

    double t = (x-1) / (x+1);
    double F = 2 * t;
    double a = t;
    int n = 3;

    while (fabs(a) >= eps) {
        a = a * pow(t, 2) * (n-2) / n;
        F = F + a;
        n = n + 2;
    }

    output(F, x); // Вывод F, ln x
}

void postCondition() { 
    double x, eps;
    input(x, eps); // Ввод x, eps

    double t = (x-1) / (x+1);
    double F = 2 * t;
    double a = t;
    int n = 3;

    do { 
        a = a * pow(t, 2) * (n-2) / n;
        F = F + a;
        n = n + 2;
    } while (fabs(a) >= eps);

    output(F, x); // Вывод F, ln x
}


int main() { 
    preCondition(); // предусловие while
    postCondition(); // постусловие do while

    return 0;
}