#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum errors {
  OK,
  BAD_INPUT,
  MEMORY_ERROR,
  CALC_ERROR,
};

typedef enum token {
  NUM = 0,
  X = 1,
  PLUS = 2,
  MINUS = 3,
  MULT = 4,
  DIV = 5,
  POW = 6,
  MOD = 7,
  COS = 8,
  SIN = 9,
  TAN = 10,
  ACOS = 11,
  ASIN = 12,
  ATAN = 13,
  SQRT = 14,
  LN = 15,
  LOG = 16,
  LEFT = 17,
  RIGHT = 18,
  UPLUS = 19,
  UMINUS = 20,
} token;

typedef struct stack {
  double value;
  token elem;
  struct stack *ptr;
} stack;

int parser(const char *, char *);
int input_check(const char *);

int push_stack(stack **, double, token);
token pop_stack(stack **);
token get_token(stack **);
token get_token_of_operation(const char *);
token get_token_of_function(char *);
char from_token_to_char(token);
int priority(token);

int calculation(char *, double *, double);
int calculation_function(char, stack **);
int calculation_operation(char, stack **);
double pop_value_from_stack(stack **);

int is_unar(const char *);
int is_number(char);
int is_function(char);
int is_operation(char);

#endif  // SRC_S21_SMARTCALC_H_
