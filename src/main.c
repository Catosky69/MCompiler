#include <stdio.h>
#include "lexer.h"

int main()
{

  const char *code =
      "print(\"Hola Manrique\");";

  tokenize(code);

  return 0;
}