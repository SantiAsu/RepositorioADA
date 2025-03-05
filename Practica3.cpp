#include <iostream>
#include <vector>
//fuentes torres santiago
using namespace std;

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};

    vector<string> mapping[10] = {
        {}, {}, {"a", "b", "c"}, {"d", "e", "f"}, {"g", "h", "i"},
        {"j", "k", "l"}, {"m", "n", "o"}, {"p", "q", "r", "s"},
        {"t", "u", "v"}, {"w", "x", "y", "z"}
    };

    vector<string> result = {""};

    for (char digit : digits) {
        int num = digit - '0'; //cambiamos el caracter a un numero, una mutacion
        vector<string> temp;

        //funcion que junta los pares
        for (string prev : result) {
            for (string letter : mapping[num]) {
                temp.push_back(prev + letter);
            }
        }
        result = temp;
    }

    return result;
}

int main() {
    string digits;
    cout << "Ingrese los dígitos: ";
    cin >> digits;

    if (digits.length() <= 4 && digits.length() > 0) {
        vector<string> combinations = letterCombinations(digits);

        cout << "Combinaciones posibles: ";
        for (const string &comb : combinations) {
            cout << comb << " ";
        }
        cout << endl;
        return 0;
    }
    else {
        cout << "No se hara esto, son unicamente 4 digitos" << endl;
    }



    return 0;
}
