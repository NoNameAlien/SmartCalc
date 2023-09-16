#include <check.h>

#include "s21_smartCalc.h"

START_TEST(operation_test) {
  char inputStr[255] = "-33+(-4+8)*2";
  char postfix[255] = {0};
  parser(inputStr, postfix);
  double outputStr = 0;
  int status = calculation(postfix, &outputStr, 0);
  ck_assert_double_eq(outputStr, -25.000000);
  ck_assert_int_eq(status, 0);

  char inputStr1[255] = "((-33/3)*8)%5";
  char postfix1[255] = {0};
  parser(inputStr1, postfix1);
  status = calculation(postfix1, &outputStr, 0);
  ck_assert_double_eq(outputStr, -3);
  ck_assert_int_eq(status, 0);

  char inputStr2[255] = "-2^5+3";
  char postfix2[255] = {0};
  parser(inputStr2, postfix2);
  status = calculation(postfix2, &outputStr, 0);
  ck_assert_double_eq(outputStr, -29);
  ck_assert_int_eq(status, 0);

  char inputStr3[255] = "-5+(3-0)";
  char postfix3[255] = {0};
  parser(inputStr3, postfix3);
  status = calculation(postfix3, &outputStr, 0);
  ck_assert_double_eq(outputStr, -2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(function_test) {
  char inputStr[255] = "(sqrt(64)+2)*3";
  char postfix[255] = {0};
  parser(inputStr, postfix);
  double outputStr = 0;
  int status = calculation(postfix, &outputStr, 0);
  ck_assert_double_eq(outputStr, 30);
  ck_assert_int_eq(status, 0);

  char inputStr1[255] = "sin(1+0.678)";
  char postfix1[255] = {0};
  parser(inputStr1, postfix1);
  status = calculation(postfix1, &outputStr, 0);
  ck_assert_ldouble_eq_tol(outputStr, 0.994259, 1e-6);
  ck_assert_int_eq(status, 0);

  char inputStr2[255] = "cos(1.32)";
  char postfix2[255] = {0};
  parser(inputStr2, postfix2);
  status = calculation(postfix2, &outputStr, 0);
  ck_assert_ldouble_eq_tol(outputStr, 0.248175, 1e-6);
  ck_assert_int_eq(status, 0);

  char inputStr3[255] = "asin(0.56)";
  char postfix3[255] = {0};
  parser(inputStr3, postfix3);
  status = calculation(postfix3, &outputStr, 0);
  ck_assert_ldouble_eq_tol(outputStr, 0.594386, 1e-6);
  ck_assert_int_eq(status, 0);

  char inputStr4[255] = "acos(0.56)";
  char postfix4[255] = {0};
  parser(inputStr4, postfix4);
  status = calculation(postfix4, &outputStr, 0);
  ck_assert_ldouble_eq_tol(outputStr, 0.976411, 1e-6);
  ck_assert_int_eq(status, 0);

  char inputStr5[255] = "tan(1)";
  char postfix5[255] = {0};
  parser(inputStr5, postfix5);
  status = calculation(postfix5, &outputStr, 0);
  ck_assert_ldouble_eq_tol(outputStr, 1.557408, 1e-6);
  ck_assert_int_eq(status, 0);

  char inputStr6[255] = "ln(atan(5))";
  char postfix6[255] = {0};
  parser(inputStr6, postfix6);
  status = calculation(postfix6, &outputStr, 0);
  ck_assert_ldouble_eq_tol(outputStr, 0.317290, 1e-6);
  ck_assert_int_eq(status, 0);

  char inputStr7[255] = "log(90+10-0)";
  char postfix7[255] = {0};
  parser(inputStr7, postfix7);
  status = calculation(postfix7, &outputStr, 0);
  ck_assert_ldouble_eq_tol(outputStr, 2, 1e-6);
  ck_assert_int_eq(status, 0);
}
END_TEST

int main() {
  Suite *suite = suite_create("S21_SMARTCALC");
  SRunner *srunner = srunner_create(suite);

  TCase *operation_tcase = tcase_create("operation_test");
  suite_add_tcase(suite, operation_tcase);
  tcase_add_test(operation_tcase, operation_test);

  TCase *function_tcase = tcase_create("function_test");
  suite_add_tcase(suite, function_tcase);
  tcase_add_test(function_tcase, function_test);

  srunner_run_all(srunner, CK_VERBOSE);
  srunner_free(srunner);

  return 0;
}
