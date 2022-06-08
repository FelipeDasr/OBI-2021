// URL do exerc�cio: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/baralho/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Naipe {
public:
    vector<int> cartas;
    string value = "";
};

class Baralho {
public:
    Naipe C = Naipe();
    Naipe E = Naipe();
    Naipe U = Naipe();
    Naipe P = Naipe();

    Naipe *pegarNaipe(char letra) {
        switch (letra) {
        case 'C':
            return &this->C;
            break;

        case 'U':
            return &this->U;
            break;

        case 'E':
            return &this->E;
            break;

        case 'P':
            return &this->P;
            break;
        }
    }

    void addCarta(int num, char nai) {

        Naipe* naipe = this->pegarNaipe(nai);

        if (naipe->value == "erro") {
            return;
        };

        auto busca = find(
            naipe->cartas.begin(),
            naipe->cartas.end(),
            num
        );

        if(busca == naipe->cartas.end()) {
            naipe->cartas.push_back(num);
        } 
        else {
            naipe->value = "erro";
        }
    }

    auto mostrarResultado(Naipe* naipe) {
        if (naipe->value == "erro"){
            cout << "erro" << endl;
        }
        else {
            cout << 13 - naipe->cartas.size() << endl;
        }
    }
};

int main() {
    Baralho baralho = Baralho();

    string baralhoStr;
    cin >> baralhoStr;

    for (int i = 0; i < baralhoStr.size(); i+=3) {

        string numeroStr = "";
        numeroStr += baralhoStr[i];
        numeroStr += baralhoStr[i+1];

        int numero = stoi(numeroStr);
        char naipe = baralhoStr[i+2];

        baralho.addCarta(numero, naipe);
    }

    baralho.mostrarResultado(&baralho.C);
    baralho.mostrarResultado(&baralho.E);
    baralho.mostrarResultado(&baralho.U);
    baralho.mostrarResultado(&baralho.P);

    return 0;
}
