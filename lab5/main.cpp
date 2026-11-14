#include "iostream"

using namespace std;

void createB() {   
    int n, m;
    
    cout << "Введите параметр матрицы" << endl;
    cout << "N = ";
    cin >> n;
    cout << "M = ";
    cin >> m;

    int **a = new int *[n];
    int **b = new int *[n];

    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        b[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];

            for (int k = i; k < n; k++) {
                for (int l = j; l < m; l++) {
                    b[k][l] += a[i][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "b[" << i << "][" << j << "] = " << b[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];
        delete[] b[i];
    }

    delete[] a;
    delete[] b;
}

int main()
{
    createB();
    return 0;
}
