// URL do exercício: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/torneio/

#include <iostream>

using namespace std;

int main() {

    int pVencidas = 0;
    char partida;

    for (int i = 0; i < 6; i++) {
        cin >> partida;
        
        if (partida == 'V')
            pVencidas++;
    }

    if (pVencidas >= 5 && pVencidas <= 6)
        cout << 1 << endl;

    else if (pVencidas >= 3 && pVencidas <= 4)
        cout << 2 << endl;

    else if (pVencidas >= 1 && pVencidas <= 2)
        cout << 3 << endl;

    else
        cout << -1 << endl;

    return 0;
}