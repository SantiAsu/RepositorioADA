#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumaQuimica(const vector<int> &habilidad) {
    int n = habilidad.size();
    //condicion parada
    if (n % 2 != 0) {
        cout << "Es impar, no se pueden formar equipos" << endl;
        return -1;
    }

    vector<int> sorted_habilidad = habilidad;
    sort(sorted_habilidad.begin(), sorted_habilidad.end());

    int suma = 0;
    for (int h : sorted_habilidad) {
        suma += h;
    }
    cout << "Habilidad total: " << suma << endl;

    int porEquipo = suma / (n / 2);
    cout << "Por equipo sera: " << porEquipo << endl;

    int quimicaTotal = 0;
    int izq = 0, der = n - 1;

    while (izq < der) {
        if (sorted_habilidad[izq] + sorted_habilidad[der] != porEquipo) {
            cout << "No hay forma de dividir los productos" << endl;
            return -1;
        }
        quimicaTotal += sorted_habilidad[izq] * sorted_habilidad[der];
        izq++;
        der--;
    }

    cout << "La quimica total sera: " << quimicaTotal << endl;
    return quimicaTotal;
}

int main() {
    cout << "Primer Equipo: " << endl;
    sumaQuimica({3,2,5,7,5,8});

    cout << "Segundo Equipo: " << endl;
    sumaQuimica({1,1,2,3});

    cout << "Tercer Equipo: " << endl;
    sumaQuimica({3,4});

    return 0;
}
