
#include <iostream>
using namespace std;

void palindromo(int numero){
    int inv,original=numero;

    if(numero<0){
        cout << "No es palindromo";
        return;
    }

    do{
        inv = inv *10+ numero%10;
        numero /= 10;
    }while (numero > 0);


    cout << ((inv == original) ? "Es un palindromo\n" : "No es palindromo\n");
}

int main()
{
    int num ;
    cout<< "Imgrese su numero: " <<endl;
    cin >> num;

    palindromo(num);

    cout<<"0.0";

    return 0;
}