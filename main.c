#include <stdio.h>
int main() {
   
   unsigned int edad;
   char nombre[10]
   printf("Nombre:");
   fgets(nombre, sizeof(nombre), stdin);

   printf("Hola %s",nombre);
   printf("Edad:");
   scanf("%d", &edad);
   printf("Tienes %d años",edad);
   return 0;
}
