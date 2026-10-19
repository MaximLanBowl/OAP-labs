#include <iostream>
#include <cmath>


using namespace std;


int main() {
    double x, y;
    
    cout << "Введите значение координат x и y" << endl; 
    cin >> x >> y;

    if (x < 0.2 && y < 0 && pow(x, 2) + pow(y, 2) < 1) {
        cout << "Точка принадлежит области" << endl;
    } else if (x > 0.2 || y > 0 || pow(x, 2) + pow(y, 2) > 1) {
        cout << "Точка не принадлежит области" << endl;
    } else {
        cout << "Точка лежит на границе области" << endl;
    }

    return 0;
}

