#include <stdio.h>
#include <string.h>
#include "lexer.h"

void tokenize(const char *source)
{

  if (strstr(source, "print"))
  {
    printf("TOKEN_PRINT\n");
  }

  if (strchr(source, '('))
  {
    printf("TOKEN_LPAREN\n");
  }

  const char *start = strchr(source, '"');

  if (start)
  {
    const char *end = strrchr(source, '"');

    if (end && end > start)
    {

      char buffer[256];

      int length = end - start - 1;

      strncpy(buffer, start + 1, length);

      buffer[length] = '\0';

      printf("TOKEN_STRING: %s\n", buffer);
    }
  }

  if (strchr(source, ')'))
  {
    printf("TOKEN_RPAREN\n");
  }

  if (strchr(source, ';'))
  {
    printf("TOKEN_SEMICOLON\n");
  }

  printf("TOKEN_EOF\n");
}