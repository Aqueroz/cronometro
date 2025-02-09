#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){

    time_t start = time(NULL);
    int number_in;

    //pede ao ususario o tempo limite do cronometro
    printf("Informe o tempo limite:");
    scanf("%d", &number_in);
    //loop infinito
    while (1)
    {
        time_t now = time(NULL);
        // calcula a diferença entre agora e o inicio - o int é para converter para valor nterio, difftime retorna um double
        int seg_pass = (int) difftime(now, start);

        // \r faz com que atualize na mesma linha, sem ficar criando inumeras linhas no terminal
        printf("\r segundos passados: %d", seg_pass);

        // força a taualizacao da tela
        fflush(stdout);

        //pausa de 1 segundo antes de refazer o loop
        sleep(1);

        if( seg_pass >= number_in){
            break;
        }
    }
    
    return 0;

}