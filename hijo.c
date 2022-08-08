///Programa hijo
/* Programa hijo.c, cuyo ejecutable se lanza desde el proceso padre */
#include <stdlib.h>
#include <stdio.h>
/* Función principal */
int main(void)
{
int i = 0;
int j = 0;
char c;
/* Introducción por teclado del número de veces que se repetirá el bucle while */
printf("Número de ciclos <1‐20>:");
fflush(stdout);
scanf("%s",&c);
i = atoi(&c);
while(j < i)
{
printf("Hola soy de nuevo el proceso hijo %d\n",j);
j++;
}
exit(EXIT_SUCCESS);
printf("\n");
}
/* Fin función principal */
