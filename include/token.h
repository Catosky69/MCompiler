#ifndef TOKEN_H
#define TOKEN_H

typedef enum
{
  TOKEN_PRINT,
  TOKEN_STRING,
  TOKEN_LPAREN,
  TOKEN_RPAREN,
  TOKEN_SEMICOLON,
  TOKEN_EOF,
  TOKEN_UNKNOWN
} TokenType;

typedef struct
{
  TokenType type;
  char value[256];
} Token;

#endif