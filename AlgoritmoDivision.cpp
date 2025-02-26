#include <iostream>
using namespace std;

void divisor(int x, int y) {
    if (y == 0) {
        cout << "No se puede dividir entre 0 :(" << endl;
        return;
    }

    if (x == 0) {
        cout << "El resultado es: 0" << endl;
        return;
    }

    int contador = 0;
    bool negativo = (x < 0) ^ (y < 0);
    x = abs(x);
    y = abs(y);

    while (x >= y) {
        x -= y;
        contador++;
    }

    if (negativo) contador = -contador;

    cout << "El resultado es: " << contador << endl;
}


int main() {

    int x, y;
    cout << "Ingrea el dividendo (x): "<<endl;
    cin >> x;
    cout << "Ingrea el divisor (y): "<<endl;
    cin >> y;

    divisor(x, y);


    return 0;
}