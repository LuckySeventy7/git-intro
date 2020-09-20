#include <stdio.h>
int main() {
   char[100] nombre;
   printf("Hello, World!");
   printf("Nombre:")
   fgets(nombre, sizeof(nombre), stdin);
   printf("Hola %s", nombre);
   return 0;
}