#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double numero1, numero2;
    int opcao;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "=== Calculadora ===" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtracao" << endl;
        cout << "3. Multiplicacao" << endl;
        cout << "4. Divisao" << endl;
        cout << "5. Raiz quadrada" << endl;
        cout << "6. Potencia" << endl;
        cout << "7. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 7) {
            cout << "Encerrando o programa. Ate mais!" << endl;
            break;
        }

        cout << "Digite o primeiro numero: ";
        cin >> numero1;

        if (opcao != 5) {
            cout << "Digite o segundo numero: ";
            cin >> numero2;
        }

        switch (opcao) {
            case 1:
                cout << fixed << setprecision(2);
                cout << "Resultado: " << numero1 + numero2 << endl;
                break;

            case 2:
                cout << fixed << setprecision(2);
                cout << "Resultado: " << numero1 - numero2 << endl;
                break;

            case 3:
                cout << fixed << setprecision(2);
                cout << "Resultado: " << numero1 * numero2 << endl;
                break;

            case 4:
                if (numero2 == 0) {
                    cout << "Erro: divisao por zero nao e permitida." << endl;
                } else {
                    cout << fixed << setprecision(2);
                    cout << "Resultado: " << numero1 / numero2 << endl;
                }
                break;

            case 5:
                if (numero1 < 0) {
                    cout << "Erro: nao existe raiz quadrada real de numero negativo." << endl;
                } else {
                    cout << fixed << setprecision(2);
                    cout << "Resultado: " << sqrt(numero1) << endl;
                }
                break;

            case 6:
                cout << fixed << setprecision(2);
                cout << "Resultado: " << pow(numero1, numero2) << endl;
                break;

            default:
                cout << "Operacao invalida." << endl;
                break;
        }

        cout << "Deseja realizar outra operacao? (s/n): ";
        cin >> continuar;
    }

    return 0;
}


























    
  


  




























