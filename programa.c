#include <stdio.h>
#include <math.h>

int main()
{
    int fila, media = 5, tempo, horas, resp, minutos;
    printf("voce esta na fila 1-sim 2-nao\n");
    scanf("%i", &resp);
    while (resp == 1)
    {
        printf("Qual o tamanho da fila?\n");
        scanf("%i", &fila);
        tempo = fila * media;
        horas = tempo / 60;
        minutos = tempo % 60;
        if (tempo <= 10)
        {
            printf("Voce sera atendido logo\n");
            system("pause");
        }
        else
        {
            printf("Voce sera atendido em %i horas e %i minutos\n", horas, minutos);
            system("pause");
        }
        printf("voce ainda esta na fila? 1-sim 2-nao\n");
        scanf("%i", &resp);
        if (resp == 2)
        {
            printf("Agradecemos sua paciencia!");
            return 0;
        }
    }
    printf("Va para a fila");
    return 0;
}