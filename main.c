#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

void showValidOperations() {
  printf("Operacoes validas:\n");
  printf("soma\n");
  printf("subtracao\n");
  printf("divisao\n");
  printf("multiplicacao\n");
  printf("resto\n");
  printf("potencia\n");
  printf("raiz_quadrada\n");
  printf("raiz_cubica\n");
}

int main(int argc, char *argv[]) {
  char *operation = argv[1];
  double firstValue = atof(argv[2]);
  double secondValue = atof(argv[3]);
  double result;

  if (strcmp(operation, "soma") == 0) {
    result = add(firstValue, secondValue);
  } else if (strcmp(operation, "subtracao") == 0) {
    result = subtract(firstValue, secondValue);
  } else if (strcmp(operation, "divisao") == 0) {
    result = divide(firstValue, secondValue);
  } else if (strcmp(operation, "multiplicacao") == 0) {
    result = multiply(firstValue, secondValue);
  } else if (strcmp(operation, "resto") == 0) {
    result = remainder(firstValue, secondValue);
  } else if (strcmp(operation, "potencia") == 0) {
    result = power(firstValue, secondValue);
  } else if (strcmp(operation, "raiz_quadrada") == 0) {
    result = squareRoot(firstValue);
  } else if (strcmp(operation, "raiz_cubica") == 0) {
    result = cubeRoot(firstValue);
  } else {
    showValidOperations();
    return 1;
  }

  printf("A operacao %s resultou no numero %.2f.\n", operation, result);

  return 0;
}
