#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int pid = fork();
    printf("Id del proceso: %d\n", pid);

    if(pid > 0){
        sleep(40);
    }else if(pid == 0){
        printf("\nProceso zombie creado con exito!");
        printf("\nEstara activo durante 40 segundos\n");
        exit(0);
    }else{
        printf("\nLo sentimos! El proceso hijo no pudo ser creado...");
    }

    return 0;
}



