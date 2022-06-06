// URL do exercício: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/zero/

#include <iostream>
#include <stack>

using namespace std;

int main(){

    int cases, num, total = 0;
    stack<int> fila;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> num;

        if (num != 0) {
            fila.push(num);
            total += num;
        }

        else if (num == 0) {
            total -= fila.top();
            fila.pop();
        }
    }

    cout << total << endl;

    return 0;
}