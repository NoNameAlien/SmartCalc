#include "s21_SmartCalc.h"

// int main() {
//   char INPUT_STRING[] = "2/0";
//   double X_VALUE = 5;

//   char postfix[255] = {0};
//   double output = 0;

//   if (parser(INPUT_STRING, postfix)) {
//     printf("\n%d\n", parser(INPUT_STRING, postfix));
//   } else {
//     if (calculation(postfix, &output, X_VALUE)) {
//       printf("Error in calculation.\n");
//     } else {
//       printf("\n%.7lf\n\n", output);
//     }
//   }

//   return 0;
// }

/// @brief Обработка введенной строки
/// @param str Строка
/// @return Статус-код
int parser(const char *input, char *postfix) {
  int status_code = input_check(input);
  stack *stack = NULL;

  if (status_code == OK) {
    int count = 0;
    for (int i = 0; input[i] != '\0' && status_code == OK; i++) {
      if (is_number(input[i])) {
        while (is_number(input[i])) {
          postfix[count++] = input[i++];
        }
        postfix[count++] = ' ';
        if (input[i] == '\0') {
          break;
        }
      }
      if (input[i] == 'x') {
        postfix[count++] = 'x';
        postfix[count++] = ' ';
      } else if (input[i] == '(') {
        if (push_stack(&stack, 0, LEFT)) {
          status_code = BAD_INPUT;
        }
      } else if (input[i] == ')') {
        token operation = pop_stack(&stack);
        while (operation != LEFT) {
          postfix[count++] = from_token_to_char(operation);
          operation = pop_stack(&stack);
        }
      } else {
        if (is_operation(input[i]) == 0) {
          char str[12] = {0};
          int j = 0;

          for (j = i; input[j] != '(' && j - i < 12; j++) {
            str[j - i] = input[j];
          }
          i = j;

          token token_operation = get_token_of_function(str);
          if (stack == NULL ||
              priority(token_operation) > priority(get_token(&stack))) {
            if (push_stack(&stack, 0, token_operation) ||
                push_stack(&stack, 0, LEFT)) {
              status_code = BAD_INPUT;
            }
          } else {
            while (priority(token_operation) <= priority(get_token(&stack))) {
              postfix[count++] = from_token_to_char(pop_stack(&stack));
            }

            if (push_stack(&stack, 0, token_operation)) {
              status_code = BAD_INPUT;
            }
          }
        } else {
          token token_operation = get_token_of_operation(input + i);

          if (stack == NULL ||
              priority(token_operation) > priority(get_token(&stack))) {
            if (push_stack(&stack, 0, token_operation)) {
              status_code = BAD_INPUT;
            }
          } else {
            while (priority(token_operation) <= priority(get_token(&stack))) {
              if (token_operation == POW && get_token(&stack) == POW) {
                break;
              }
              postfix[count++] = from_token_to_char(pop_stack(&stack));
            }
            if (push_stack(&stack, 0, token_operation)) {
              status_code = BAD_INPUT;
            }
          }
        }
      }
    }
    while (stack != NULL) {
      postfix[count++] = from_token_to_char(pop_stack(&stack));
    }
  }
  // printf("\n%s\n", postfix);
  return status_code;
}

/// @brief Первоначальная проверка строки на ошибки
/// @param str Строка
/// @return Статус-код
int input_check(const char *str) {
  int status_code = OK;
  int balance = 0;
  int not_empty = 0;

  for (int i = 0; str[i] != '\0' && status_code == OK; ++i) {
    char curr = str[i], prev = i > 0 ? str[i - 1] : '\0', next = str[i + 1];

    if ((is_operation(curr) && is_operation(next) &&
         !(curr == '-' && prev == '(')) ||
        (curr == '.' && next == '.')) {
      status_code = BAD_INPUT;
    }

    if ((is_operation(curr) && is_operation(next)) ||
        (curr == '.' && next == '.')) {
      status_code = BAD_INPUT;
    }

    if (curr == '(') {
      balance++;
      // printf("+%d%c=%d ", balance, curr, i);
      not_empty = 0;

      if (is_number(prev)) status_code = BAD_INPUT;
      if (next == '*' || next == '/' || next == '^' || next == '%')
        status_code = BAD_INPUT;

    } else if (curr == ')') {
      if (!not_empty) status_code = BAD_INPUT;
      balance--;
      // printf("-%d%c=%d ", balance, curr, i);
      if (balance < 0) status_code = BAD_INPUT;
      if (next != '\0' && !is_operation(next) && next != ')')
        status_code = BAD_INPUT;

    } else {
      not_empty = is_number(curr) || curr == 's' || curr == 'c' ||
                  curr == 'l' || curr == 'a' || curr == 't';
    }

    if ((curr == '*' || curr == '/' || curr == '%' || curr == '^') &&
        !is_number(prev) && prev != ')') {
      status_code = BAD_INPUT;
    }

    if ((curr == '*' || curr == '/' || curr == '%' || curr == '^' ||
         curr == '-' || curr == '+') &&
        !is_number(next) && next != '(' &&
        !(next == 'c' || next == 's' || next == 't' || next == 'a' ||
          next == 'l')) {
      status_code = BAD_INPUT;
    }
  }

  if (balance != 0) status_code = BAD_INPUT;

  return status_code;
}

/// @brief Определение приоритета токена
/// @param symbol Токен
/// @return Приоритет
int priority(token symbol) {
  int result = -1;
  if (symbol == LEFT || symbol == RIGHT) {
    result = 0;
  } else if (symbol == PLUS || symbol == MINUS) {
    result = 1;
  } else if (symbol == MULT || symbol == DIV || symbol == MOD) {
    result = 2;
  } else if (symbol == POW) {
    result = 3;
  } else if (symbol == SIN || symbol == COS || symbol == TAN ||
             symbol == ASIN || symbol == ACOS || symbol == ATAN ||
             symbol == SQRT || symbol == LOG || symbol == LN) {
    result = 4;
  } else if (symbol == UMINUS || symbol == UPLUS) {
    result = 5;
  }
  return result;
}

/// @brief Добавление элемента в стек
/// @param top Верхний элемент стека
/// @param value Значение элемента
/// @param elem Токен элемента
/// @return Статус-код
int push_stack(stack **top, double value, token elem) {
  int status_code = OK;
  stack *new = malloc(sizeof(stack));
  if (new != NULL) {
    new->value = value;
    new->elem = elem;
    new->ptr = *top;
    *top = new;
  } else {
    status_code = MEMORY_ERROR;
  }
  return status_code;
}

/// @brief Извлечение верхнего элемента в стеке
/// @param top Верхний элемент стека
/// @return Токен элемента
token pop_stack(stack **top) {
  stack *tmp = *top;
  token result = (*top)->elem;
  *top = (*top)->ptr;
  free(tmp);
  return result;
}

/// @brief Получение токена верхнего элемента
/// @param top Верхний элемент стека
/// @return Токен элемента
token get_token(stack **top) {
  token result = 0;
  if (*top != NULL) {
    result = (*top)->elem;
  }
  return result;
}

/// @brief Перевод токена в символ
/// @param symbol Токен
/// @return Символ
char from_token_to_char(token symbol) {
  const char TOKEN_CHARS[] = {
      '0', 'x', '+', '-', '*', '/', '^', '%', 'c', 's', 't',
      'C', 'S', 'T', 'q', 'l', 'L', '(', ')', '#', '~',
  };
  if (symbol >= 0 && symbol < sizeof(TOKEN_CHARS)) {
    return TOKEN_CHARS[symbol];
  } else {
    return OK;
  }
}

/// @brief Получение токена функции
/// @param symbol Строка-функция
/// @return Токен
token get_token_of_function(char *str) {
  token result = 0;
  if (strcmp(str, "sin") == 0) {
    result = SIN;
  } else if (strcmp(str, "cos") == 0) {
    result = COS;
  } else if (strcmp(str, "tan") == 0) {
    result = TAN;
  } else if (strcmp(str, "asin") == 0) {
    result = ASIN;
  } else if (strcmp(str, "acos") == 0) {
    result = ACOS;
  } else if (strcmp(str, "atan") == 0) {
    result = ATAN;
  } else if (strcmp(str, "sqrt") == 0) {
    result = SQRT;
  } else if (strcmp(str, "ln") == 0) {
    result = LN;
  } else if (strcmp(str, "log") == 0) {
    result = LOG;
  }
  return result;
}

/// @brief Получение токена операции
/// @param symbol Символ-операция
/// @return Токен
token get_token_of_operation(const char *operation) {
  token result = 0;
  if (*operation == '+' && is_unar(operation) == 1) {
    result = UPLUS;
  } else if (*operation == '+' && is_unar(operation) == 0) {
    result = PLUS;
  } else if (*operation == '-' && is_unar(operation) == 1) {
    result = UMINUS;
  } else if (*operation == '-' && is_unar(operation) == 0) {
    result = MINUS;
  } else if (*operation == '*') {
    result = MULT;
  } else if (*operation == '/') {
    result = DIV;
  } else if (*operation == '^') {
    result = POW;
  } else if (*operation == '%') {
    result = MOD;
  }
  return result;
}

/// @brief Проверка на унарную операцию
/// @param c Символ
/// @return 0 - нет, 1 - да
int is_unar(const char *c) {
  int result = 0;
  if (is_number(*(c + 1)) && *(c - 1) == '(' && (*c == '+' || *c == '-')) {
    result = 1;
  }
  if (is_number(*(c + 1)) && *(c - 1) == 0 && (*c == '+' || *c == '-')) {
    result = 1;
  }
  return result;
}

/// @brief Проверка на номер
/// @param c Символ
/// @return 0 - нет, 1 - да
int is_number(char c) {
  return (c == 'x' || c == '.' || (c >= '0' && c <= '9'));
}

/// @brief Проверка на функцию
/// @param c Символ
/// @return 0 - нет, 1 - да
int is_function(char c) { return strchr("sctSCTqlL", c) != NULL; }

/// @brief Проверка на операцию
/// @param c Символ
/// @return 0 - нет, 1 - да
int is_operation(char c) { return strchr("+-*/^%~#", c) != NULL; }

/// @brief Вычисление математического выражения
/// @param postfix Строка, содержащая выражение в постфиксной нотации
/// @param output Строка, где содержится результат вычисления
/// @param x Переменная
/// @return Статус-код
int calculation(char *postfix, double *output, double x) {
  int status_code = OK;
  stack *stack = NULL;
  size_t i;
  for (i = 0; i < strlen(postfix) && status_code == OK; i++) {
    char curr = postfix[i];
    if (curr == 'x') {
      if (push_stack(&stack, x, 1)) {
        status_code = BAD_INPUT;
      }
    } else if (is_number(curr)) {
      char str[255] = {0};
      size_t index = 0;
      while (is_number(postfix[i])) {
        str[index++] = postfix[i];
        i++;
      }
      double number = atof(str);
      if (push_stack(&stack, number, 0)) {
        status_code = BAD_INPUT;
      }
    } else if (is_operation(curr)) {
      status_code = calculation_operation(curr, &stack);
    } else if (is_function(curr)) {
      status_code = calculation_function(curr, &stack);
    }
  }
  *output = pop_value_from_stack(&stack);
  return status_code;
}

/// @brief Извлечение значений из стека
/// @param top Верхний элемент стека
/// @return Значение элемента
double pop_value_from_stack(stack **top) {
  stack *tmp = *top;
  double result = 0;
  if (*top != NULL) {
    result = (*top)->value;
    *top = (*top)->ptr;
    free(tmp);
  }
  return result;
}

/// @brief Вычисление функций в стеке
/// @param function Символ-функция
/// @param stack Стек
/// @return Статус-код
int calculation_function(char function, stack **stack) {
  int status_code = OK;
  double number = 0;
  if (function == 's') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, sin(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 'c') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, cos(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 't') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, tan(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 'S') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, asin(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 'C') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, acos(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 'T') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, atan(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 'q') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, sqrt(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 'l') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, log(number), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (function == 'L') {
    number = pop_value_from_stack(stack);
    if (push_stack(stack, log10(number), 0)) {
      status_code = CALC_ERROR;
    }
  }
  return status_code;
}

/// @brief Вычисление операции в стеке
/// @param function Символ-операция
/// @param stack Стек
/// @return Статус-код
int calculation_operation(char operation, stack **stack) {
  int status_code = OK;
  double number_1, number_2;
  if (operation == '+') {
    number_2 = pop_value_from_stack(stack);
    number_1 = pop_value_from_stack(stack);
    if (push_stack(stack, number_1 + number_2, 0)) {
      status_code = CALC_ERROR;
    }
  } else if (operation == '-') {
    number_2 = pop_value_from_stack(stack);
    number_1 = pop_value_from_stack(stack);
    if (push_stack(stack, number_1 - number_2, 0)) {
      status_code = CALC_ERROR;
    }
  } else if (operation == '*') {
    number_2 = pop_value_from_stack(stack);
    number_1 = pop_value_from_stack(stack);
    if (push_stack(stack, number_1 * number_2, 0)) {
      status_code = CALC_ERROR;
    }
  } else if (operation == '/') {
    number_2 = pop_value_from_stack(stack);
    number_1 = pop_value_from_stack(stack);
    if (number_2 != 0) {
      // printf("\n%d %d\n", number_2, number_1);
      if (push_stack(stack, number_1 / number_2, 0)) {
        status_code = CALC_ERROR;
      }
    } else {
      status_code = CALC_ERROR;
    }
  } else if (operation == '^') {
    number_2 = pop_value_from_stack(stack);
    number_1 = pop_value_from_stack(stack);
    if (push_stack(stack, pow(number_1, number_2), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (operation == '%') {
    number_2 = pop_value_from_stack(stack);
    number_1 = pop_value_from_stack(stack);
    if (push_stack(stack, fmod(number_1, number_2), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (operation == '~') {
    number_1 = pop_value_from_stack(stack);
    if (push_stack(stack, (0 - number_1), 0)) {
      status_code = CALC_ERROR;
    }
  } else if (operation == '#') {
    number_1 = pop_value_from_stack(stack);
    if (push_stack(stack, number_1, 0)) {
      status_code = CALC_ERROR;
    }
  }
  return status_code;
}
