#include <stdio.h>

int main(void) {
  // Pruebe el compilador con un programa hello.c que envíe a stdout
  // la línea Hello, World! o similar.
  char expectedOutput[] = "Hello, World";
  fprintf(stdout, "%s\n", expectedOutput);
  
  // Ejecute el programa con la salida redireccionada a un archivo
  // output.txt; verifique su contenido.
  // char filename[] = "output.txt";
  // FILE* outputFile = fopen(filename, "w");
  // fprintf(outputFile, "%s\n", expectedOutput);
  // fclose(outputFile);

  return 0;
}
