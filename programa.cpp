#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int fila, media = 5, tempo, horas, resp, minutos;
    cout << "voce esta na fila 1-sim 2-nao\n";
    cin >> resp;
    while (resp == 1)
    {
        cout << "Qual o tamanho da fila?\n";
        cin >> fila;
        tempo = fila * media;
        horas = tempo / 60;
        minutos = tempo % 60;
        if (tempo <= 10)
        {
            cout << "Voce sera atendido logo\n";
            system("pause");
        }
        else
        {
            cout << "Voce sera atendido em " << horas << "horas e " << minutos << "minutos\n", horas, minutos;
            system("pause");
        }
        cout << "voce ainda esta na fila? 1-sim 2-nao\n";
        cin >> resp;
        if (resp == 2)
        {
            cout << "Agradecemos sua paciencia!";
            return 0;
        }
    }
    cout << "Va para a fila";
    return 0;
}