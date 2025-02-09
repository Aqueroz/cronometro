#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){

    time_t start = time(NULL);

    //loop infinito
    while (1)
    {
        time_t now = time(NULL);
        // calcula a diferença entre agora e o inicio
        int seg_pass = (int) difftime(now, start)
    }
    

}